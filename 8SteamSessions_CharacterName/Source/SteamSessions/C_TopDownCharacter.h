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

	UFUNCTION(NetMulticast, Reliable)
	void UpdateHpPercent(float curHp, float maxHp);


protected:

	UPROPERTY(EditAnywhere)
	class UAnimMontage* RollMotion;

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

	UPROPERTY(VisibleAnywhere)
	FString CharacterName ;
};
