// Fill out your copyright notice in the Description page of Project Settings.

#include "C_TopDownCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/WidgetComponent.h"
#include "CUW_CharacterOverHead.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Animation/AnimMontage.h"


// Sets default values
AC_TopDownCharacter::AC_TopDownCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	//CameraBoom->TargetArmLength = 800.f;
	CameraBoom->TargetArmLength = 1600.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm


	OverHeadUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverHeadUI"));
	OverHeadUI->SetupAttachment(RootComponent);
	OverHeadUI->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

}

// Called when the game starts or when spawned
void AC_TopDownCharacter::BeginPlay()
{
	Super::BeginPlay();

	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("ChoseClass :  %d"), CharacterName));

}

// Called every frame
void AC_TopDownCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_TopDownCharacter::TakeDamage_Implementation(float damageamount)
{
	CharacterHp -= damageamount;
	UpdateHpPercent(CharacterHp,100.0f);
}

void AC_TopDownCharacter::UpdateHpPercent_Implementation(float curHp, float maxHp)
{
	Cast<UCUW_CharacterOverHead>(OverHeadUI->GetUserWidgetObject())->SetHP(curHp,maxHp);
}

void AC_TopDownCharacter::SetCharacterName_Implementation(const FString& name)
{
	CharacterName = name;
	Cast<UCUW_CharacterOverHead>(OverHeadUI->GetUserWidgetObject())->SetName(CharacterName);

}

bool AC_TopDownCharacter::SerRPCRoll_Validate()
{
	return true;
}


void AC_TopDownCharacter::SerRPCRoll_Implementation()
{
	MulRPCRoll();
}

bool AC_TopDownCharacter::MulRPCRoll_Validate()
{
	return true;
}

void AC_TopDownCharacter::MulRPCRoll_Implementation()
{
	PlayAnimMontage(RollMotion);
}




// Called to bind functionality to input
//void AC_TopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}
//
