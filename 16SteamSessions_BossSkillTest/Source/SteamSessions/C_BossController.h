// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "C_TopDownController.h"
#include "C_TopDownCharacter.h"
#include "C_BossController.generated.h"

/**
 * 
 */
UCLASS()
class STEAMSESSIONS_API AC_BossController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool bDrawDebug = true;

	UPROPERTY(EditAnywhere)
	float AttackRange = 150;

	UPROPERTY(EditAnywhere)
	float AdjustCircleHeight = 50;

	UPROPERTY(VisibleDefaultsOnly)
	class UAIPerceptionComponent* Perception;

	UPROPERTY(VisibleDefaultsOnly)
	class UC_AIBehaviorComponent* Behavior;

};
