// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "C_AIBehaviorComponent.generated.h"


UENUM(BlueprintType)
enum class EBehaviorType : uint8
{
	Wait,
	Patrol,
	Trace,
	Attack,
	Hit,
	Death
};

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STEAMSESSIONS_API UC_AIBehaviorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FName BehaviorKey = "Behavior";

	UPROPERTY(EditAnywhere)
	FName PlayerKey = "Target";


public:
	UFUNCTION(BlueprintPure)
	bool IsType(EBehaviorType InType);

	void ChangeType(EBehaviorType InType);

	class AC_TopDownCharacter* GetPlayer();

	void SetBolackboard(class UBlackboardComponent* InBlackboard) { Blackboard = InBlackboard; }
public:
	UC_AIBehaviorComponent();

protected:
	virtual void BeginPlay() override;

	EBehaviorType GetType();

private:
	class UBlackboardComponent* Blackboard;

};
