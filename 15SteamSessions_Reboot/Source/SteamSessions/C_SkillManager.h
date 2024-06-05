// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "C_TopDownCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_SkillManager.generated.h"

UCLASS()
class STEAMSESSIONS_API AC_SkillManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_SkillManager();

	UFUNCTION(Server,Reliable)
	void SerSpawnAttack(AC_TopDownCharacter* Own, TSubclassOf<class AC_Attack> attack, FVector location, bool isFloor, bool isMove);

	UFUNCTION(NetMulticast,Reliable)
	void MulSpawnAttack(AC_TopDownCharacter* Own, TSubclassOf<class AC_Attack> attack, FVector location);



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> SlashAttackClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> SlashAttackClass2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> ProjectileClass;






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
