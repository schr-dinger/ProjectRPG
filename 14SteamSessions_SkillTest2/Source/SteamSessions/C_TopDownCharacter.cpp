// Fill out your copyright notice in the Description page of Project Settings.

#include "C_TopDownCharacter.h"
#include "C_TopDownController.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/WidgetComponent.h"
#include "CUW_CharacterOverHead.h"
#include "C_SlashAttack.h"
#include "C_Attack.h"
#include "C_SkillManager.h"
#include "ProjectileAttack.h"
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
	SkillManager = GetWorld()->SpawnActor<AC_SkillManager>(SkillManagerClass);
	Q = GetWorld()->SpawnActor<AC_Attack>(QSkill);
	W = GetWorld()->SpawnActor<AC_Attack>(WSkill);
	E = GetWorld()->SpawnActor<AC_Attack>(ESkill);
}

// Called every frame
void AC_TopDownCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	tmpC = Cast<AC_TopDownController>(GetController());
	if (tmpC && tmpC->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, HitT))
	{
		mouselocation = HitT.Location;
	}

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

void AC_TopDownCharacter::SerRPCMeleeAttack_Implementation(UAnimMontage* AttackMon)
{
	if (isQSkill)
	{
		SkillManager->SerSpawnAttack(this, QSkill,mouselocation,Q->isFloor,Q->isMove);
		isQSkill = false;
		return;
	}

	MulRPCMeleeAttack(AttackMon);
}

void AC_TopDownCharacter::MulRPCMeleeAttack_Implementation(UAnimMontage* AttackMon)
{
	if (SlashAttackClass)
	{
		FVector Location = GetActorLocation() + GetActorForwardVector() * 100.0f; // 베기 시작 위치 설정
		FRotator Rotation = GetActorRotation();
	
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
	
		GetWorld()->SpawnActor<AC_SlashAttack>(SlashAttackClass, Location, Rotation, SpawnParams);
	
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("Slash")));
	
	}
	PlayAnimMontage(AttackMon);

}


void AC_TopDownCharacter::SerRPCQAttack_Implementation(UAnimMontage* AttackMon)
{
	if (Q && Q->isFloor)
	{
		isQSkill = true;
		return;
	}

	SkillManager->SerSpawnAttack(this, QSkill,mouselocation, Q->isFloor, Q->isMove);

	//MulRPCQAttack(AttackMon);
}

void AC_TopDownCharacter::MulRPCQAttack_Implementation(UAnimMontage* AttackMon)
{
	//if (SlashAttackClass)
	{
		FVector Location = GetActorLocation() + GetActorForwardVector(); // 베기 시작 위치 설정
		FRotator Rotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		GetWorld()->SpawnActor<AC_SlashAttack>(SlashAttackClass2, Location, Rotation, SpawnParams);

		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("Slash2")));

	}
	PlayAnimMontage(AttackMon);
}


void AC_TopDownCharacter::SerRPCWAttack_Implementation(UAnimMontage* AttackMon)
{
	MulRPCWAttack(AttackMon);
}

void AC_TopDownCharacter::MulRPCWAttack_Implementation(UAnimMontage* AttackMon)
{
	//if (SlashAttackClass)
	{
		FVector Location = GetActorLocation() + GetActorForwardVector() * 100.0f; // 쏘기 시작 위치 설정
		FRotator Rotation = GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		GetWorld()->SpawnActor<AProjectileAttack>(ProjectileClass, Location, Rotation, SpawnParams);

		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::MakeRandomColor(), FString::Printf(TEXT("Projectile")));

	}
	PlayAnimMontage(AttackMon);
}

void AC_TopDownCharacter::TestQWAttack(UAnimMontage* AttackMon)
{
	AC_Attack* tmp = Cast<AC_Attack>(QSkill);
	if (tmp && tmp->isFloor)
	{
		isQSkill = true;
		return;
	}

}

void AC_TopDownCharacter::ServerJump_Implementation()
{
	Jump();
}

void AC_TopDownCharacter::Jump()
{
	if (!GetWorld()->IsServer())
	{
		ServerJump();
	}
	else
	{
		Super::Jump();
	}
}
