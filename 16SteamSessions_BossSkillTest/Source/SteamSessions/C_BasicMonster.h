// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CUW_CharacterOverHead.h"
#include "C_InfoStruct.h"
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
	class UAnimMontage* AttackAni1;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* AttackAni2;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* AttackAni3;


	UPROPERTY(EditAnywhere)
	class UWidgetComponent* OverHeadUI;

public:

	UPROPERTY(EditAnywhere)
	FString MonsterName;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float MonsterHp = 100.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AttackSpeed = 0.5f;

	class AC_SkillManager* SkillManager;

	class AC_Attack* Skill1;
	class AC_Attack* Skill2;
	class AC_Attack* Skill3;


	FTest Q_Info;
	FTest W_Info;
	FTest E_Info;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_SkillManager> SkillManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> TSkill1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> TSkill2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> TSkill3;

	UFUNCTION()
	void MonsterSkill1(AC_TopDownCharacter* attack);

	UFUNCTION()
	void MonsterSkill2(AC_TopDownCharacter* attack);

	UFUNCTION()
	void MonsterSkill3(AC_TopDownCharacter* attack);

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
