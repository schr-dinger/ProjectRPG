// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CUW_CharacterOverHead.h"
#include "C_TopDownCharacter.generated.h"

UCLASS(Blueprintable)
class STEAMSESSIONS_API AC_TopDownCharacter : public ACharacter
{
	GENERATED_BODY()

public:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this character's properties
	AC_TopDownCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Server, WithValidation, Reliable)
	void SerRPCRoll();

	UFUNCTION(NetMulticast, WithValidation, Reliable)
	void MulRPCRoll();

	UFUNCTION(NetMulticast,Reliable)
	void SetCharacterName(const FString& name);


	UFUNCTION(Server, Reliable, BlueprintCallable)
	void TakeDamage(float damageamount);


	UFUNCTION(NetMulticast, Reliable , BlueprintCallable)
	void UpdateHpPercent(float curHp, float maxHp);




	//skills

	//Melee
	UFUNCTION(Server, Reliable)
	void SerRPCMeleeAttack(UAnimMontage* AttackMon);

	UFUNCTION(NetMulticast, Reliable)
	void MulRPCMeleeAttack(UAnimMontage* AttackMon);

	//Q
	UFUNCTION(Server, Reliable)
	void SerRPCQAttack(UAnimMontage* AttackMon);

	UFUNCTION(NetMulticast, Reliable)
	void MulRPCQAttack(UAnimMontage* AttackMon);

	//W
	UFUNCTION(Server, Reliable)
	void SerRPCWAttack(UAnimMontage* AttackMon);

	UFUNCTION(NetMulticast, Reliable)
	void MulRPCWAttack(UAnimMontage* AttackMon);

	UFUNCTION()
	void TestQWAttack(UAnimMontage* AttackMon);


protected:

public:
	UPROPERTY(EditAnywhere)
	class UAnimMontage* RollMotion;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* MeleeMotion;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* QMotion;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* WMotion;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* EMotion;



	//attacks
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_SlashAttack> SlashAttackClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_SlashAttack> SlashAttackClass2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AProjectileAttack> ProjectileClass;


	//Testing

	class AC_SkillManager* SkillManager;

	class AC_Attack* Q;
	class AC_Attack* W;
	class AC_Attack* E;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_SkillManager> SkillManagerClass;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> QSkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> WSkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<class AC_Attack> ESkill;

	bool isDecal = false;
	bool isQSkill = false;
private:

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;


private:

	//Over Head UI
	//UPROPERTY()
	//TSubclassOf<UCUW_CharacterOverHead> OverHeadUIClass;
	//UCUW_CharacterOverHead* OverHeadUI;

	UPROPERTY(EditAnywhere)
	class UWidgetComponent* OverHeadUI;

public:

	UPROPERTY(VisibleAnywhere)
	FString CharacterName ;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	float CharacterHp = 100.0f;

	FVector mouselocation;
	
	class AC_TopDownController* tmpC;
	FHitResult HitT;

	UFUNCTION(Server, Reliable)
	void ServerJump();

	virtual void Jump() override;
};
