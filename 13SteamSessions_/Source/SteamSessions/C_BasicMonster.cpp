// Fill out your copyright notice in the Description page of Project Settings.


#include "C_BasicMonster.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "CUW_CharacterOverHead.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Animation/AnimMontage.h"


// Sets default values
AC_BasicMonster::AC_BasicMonster()
{
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	OverHeadUI = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverHeadUI"));
	OverHeadUI->SetupAttachment(RootComponent);
	OverHeadUI->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));




 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
}


void AC_BasicMonster::ResetSer_Implementation()
{
	//ResetMul();
	SetMonsterName(MonsterName);
	UpdateHpPercent(100.0f, 100.0f);

}

void AC_BasicMonster::ResetMul_Implementation()
{
	//SetMonsterName(MonsterName);
	//UpdateHpPercent(100.0f, 100.0f);
}


void AC_BasicMonster::SetMonsterName_Implementation(const FString& name)
{
	UCUW_CharacterOverHead* tmp = Cast<UCUW_CharacterOverHead>(OverHeadUI->GetWidget());
	tmp->SetName(name);
}

void AC_BasicMonster::SerTakeDamage_Implementation(float damageamount)
{
	MonsterHp -= damageamount;
	UpdateHpPercent(MonsterHp, 100.0f);
}

void AC_BasicMonster::UpdateHpPercent_Implementation(float curHp, float maxHp)
{
	UCUW_CharacterOverHead* tmp = Cast<UCUW_CharacterOverHead>(OverHeadUI->GetWidget());
	tmp->SetHP(curHp, maxHp);
}

void AC_BasicMonster::SerAttack_Implementation(UAnimMontage* attack)
{
}

void AC_BasicMonster::MulRPCAttack_Implementation(UAnimMontage* attack)
{
}

// Called when the game starts or when spawned
void AC_BasicMonster::BeginPlay()
{
	Super::BeginPlay();

	Reset();
}

// Called every frame
//void AC_BasicMonster::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

