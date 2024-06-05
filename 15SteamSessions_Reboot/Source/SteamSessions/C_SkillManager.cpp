// Fill out your copyright notice in the Description page of Project Settings.


#include "C_SkillManager.h"
#include "C_Attack.h"

// Sets default values
AC_SkillManager::AC_SkillManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AC_SkillManager::SerSpawnAttack_Implementation(AC_TopDownCharacter* Own, TSubclassOf<class AC_Attack> attack, FVector location, bool isFloor, bool isMove)
{
	if (isFloor)
	{
		if (isMove)
		{
			Own->Jump();
		}
		else
		{
			FRotator Rotation;
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = Own;

			GetWorld()->SpawnActor<AC_Attack>(attack, location, Rotation, SpawnParams);
		}
	}
	else
	{
		FVector Location = Own->GetActorLocation() + Own->GetActorForwardVector() * 100.0f; // 베기 시작 위치 설정
		FRotator Rotation = Own->GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Own;

		GetWorld()->SpawnActor<AC_Attack>(attack, Location, Rotation, SpawnParams);
	}

}

void AC_SkillManager::MulSpawnAttack_Implementation(AC_TopDownCharacter* Own, TSubclassOf<class AC_Attack> attack, FVector location)
{
	FVector Location = Own->GetActorLocation() + Own->GetActorForwardVector() * 100.0f; // 베기 시작 위치 설정
	FRotator Rotation = Own->GetActorRotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = Own;

	GetWorld()->SpawnActor<AC_Attack>(attack, location, Rotation, SpawnParams);

}

// Called when the game starts or when spawned
void AC_SkillManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_SkillManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

