// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TopDownController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Character.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "C_TopDownCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterSelectWidget.h"


AC_TopDownController::AC_TopDownController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void AC_TopDownController::ControlAccess(FString playerName, int playerClass)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("Control!")));
	selectW->RemoveFromParent();
	//selectW->RemoveFromViewport();
	//selectW->RemoveFromRoot();

	//Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	SerSelection(playerName, playerClass);

}

void AC_TopDownController::BeginPlay()
{
	Super::BeginPlay();

	if (!GetWorld()->IsServer())
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("CCCCController")));
	}
	else if (GetWorld()->IsServer())
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("SSSSSController")));
	}

	if (this->IsLocalPlayerController()) 
	{
		selectW = Cast<UCharacterSelectWidget>(CreateWidget(this, selectWidgetClass));

		if (selectW != nullptr)
		{
			selectW->AddToViewport();
		}

	}
	else 
	{
	}

	//selectW = Cast<UCharacterSelectWidget>(CreateWidget(this, selectWidgetClass));

	//if (selectW != nullptr)
	//{
	//	selectW->AddToViewport();
	//}

	//ControlAccess();
}


void AC_TopDownController::SerSelection_Implementation(const FString& playerName, const int& playerClass)
{
	MulSelection(playerName,playerClass);
}

void AC_TopDownController::MulSelection_Implementation(const FString& playerName, const int& playerClass)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *playerName);

	if (GetPawn())
	{
		GetPawn()->Destroy();
	}

	if (GetWorld()->IsServer())
	{
		switch (playerClass)
		{
		case 0:
			{
				AC_TopDownCharacter* A = GetWorld()->SpawnActor<AC_TopDownCharacter>(TankC,FTransform(SpawnLocation));
				Possess(A);
				UE_LOG(LogTemp, Warning, TEXT("spawnA"));
				A->SetCharacterName(playerName);
				A->UpdateHpPercent(100.0f, 100.0f);
			}

			break;

		case 1:
			{
				AC_TopDownCharacter* A = GetWorld()->SpawnActor<AC_TopDownCharacter>(DPSC, FTransform(SpawnLocation));
				Possess(A);
				UE_LOG(LogTemp, Warning, TEXT("spawnB"));
				A->SetCharacterName(playerName);
				A->UpdateHpPercent(100.0f, 100.0f);
			}

			break;

		case 2:
			{
				AC_TopDownCharacter* A = GetWorld()->SpawnActor<AC_TopDownCharacter>(HealC, FTransform(SpawnLocation));
				Possess(A);
				UE_LOG(LogTemp, Warning, TEXT("spawnC"));
				A->SetCharacterName(playerName);
				A->UpdateHpPercent(100.0f, 100.0f);
			}
			break;
		}
	}

}

void AC_TopDownController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &AC_TopDownController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &AC_TopDownController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &AC_TopDownController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &AC_TopDownController::OnSetDestinationReleased);

		// Setup touch input events
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Started, this, &AC_TopDownController::OnRollStarted);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Triggered, this, &AC_TopDownController::OnTouchTriggered);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Completed, this, &AC_TopDownController::OnTouchReleased);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Canceled, this, &AC_TopDownController::OnTouchReleased);

		//EhancedInputComponent->BindAction(CameraRotAction, ETriggerEvent::Started, this, &AC_TopDownController::OnCamStarted);
		EnhancedInputComponent->BindAction(CameraRotAction, ETriggerEvent::Triggered, this, &AC_TopDownController::OnCamTriggered);
		//EnhancedInputComponent->BindAction(CameraRotAction, ETriggerEvent::Completed, this, &AC_TopDownController::OnTouchReleased);
		//EnhancedInputComponent->BindAction(CameraRotAction, ETriggerEvent::Canceled, this, &AC_TopDownController::OnTouchReleased);


		EnhancedInputComponent->BindAction(MeleeAction, ETriggerEvent::Started, this, &AC_TopDownController::OnMeleeStarted);

		EnhancedInputComponent->BindAction(QSkillAction, ETriggerEvent::Started, this, &AC_TopDownController::OnQStarted);

		EnhancedInputComponent->BindAction(WSkillAction, ETriggerEvent::Started, this, &AC_TopDownController::OnWStarted);

		EnhancedInputComponent->BindAction(ESkillAction, ETriggerEvent::Started, this, &AC_TopDownController::OnEStarted);




	}
}


void AC_TopDownController::OnInputStarted()
{
	StopMovement();
}

void AC_TopDownController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();

	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;
	}

	// Move towards mouse pointer or touch
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void AC_TopDownController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}

	FollowTime = 0.f;

}

void AC_TopDownController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void AC_TopDownController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}

void AC_TopDownController::OnRollStarted()
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	//AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	tmp->SerRPCRoll();
}

void AC_TopDownController::OnCamTriggered(const FInputActionValue& value)
{
	//if(IsInputKeyDown(EKeys::LeftMouseButton))
	if (IsInputKeyDown(EKeys::MiddleMouseButton))
	{
		SetShowMouseCursor(false);
		FVector2D lookVector = value.Get<FVector2D>();
		AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetPawn());
		FRotator rot = { 0.0f,3.14f * lookVector.X,0.0f };
		tmp->GetCameraBoom()->AddWorldRotation(rot);
	}
	else
	{
		SetShowMouseCursor(true);
	}



}

void AC_TopDownController::OnMeleeStarted()
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	tmp->SerRPCMeleeAttack(tmp->MeleeMotion);
}

void AC_TopDownController::OnQStarted()
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	tmp->SerRPCQAttack(tmp->QMotion);
	//tmp->TestQWAttack(tmp->QMotion);

}

void AC_TopDownController::OnWStarted()
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	tmp->SerRPCWAttack(tmp->WMotion);
}

void AC_TopDownController::OnEStarted()
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetCharacter());
	tmp->SerRPCEAttack(tmp->EMotion);
}

void AC_TopDownController::HandleTextChange(const FText& NewText)
{
	AC_TopDownCharacter* tmp = Cast<AC_TopDownCharacter>(GetPawn());
	tmp->SetCharacterName(NewText.ToString());
}
