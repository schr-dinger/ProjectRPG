// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CUW_CharacterOverHead.h"
#include "C_BasicMonster.generated.h"

UCLASS()
class STEAMSESSIONS_API AC_BasicMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_BasicMonster();

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void ResetSer();

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void ResetMul();


	UFUNCTION(NetMulticast, Reliable)
	void SetMonsterName(const FString& name);


	UFUNCTION(Server, Reliable, BlueprintCallable)
	void SerTakeDamage(float damageamount);


	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void UpdateHpPercent(float curHp, float maxHp);

	UFUNCTION(Server, Reliable)
	void SerAttack(UAnimMontage* attack);

	UFUNCTION(NetMulticast, Reliable)
	void MulRPCAttack(UAnimMontage* attack);




	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviorTree;

	//UPROPERTY(VisibleInstanceOnly)
	//class UPatrolComponent* Patrol;


	FORCEINLINE class UBehaviorTree* GetTree() { return BehaviorTree; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
	class UAnimMontage* Attack1;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* Attack2;


	UPROPERTY(EditAnywhere)
	class UWidgetComponent* OverHeadUI;

public:

	UPROPERTY(EditAnywhere)
	FString MonsterName;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float MonsterHp = 100.0f;


public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
