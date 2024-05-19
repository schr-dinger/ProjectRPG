// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "CharacterSelectWidget.h"
#include "C_TopDownController.generated.h"

/**
 * 
 */
class UNiagaraSystem;

UCLASS()
class STEAMSESSIONS_API AC_TopDownController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AC_TopDownController();

	UFUNCTION()
	void ControlAccess(FString playerName = "Player", int playerClass = 0);

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Click Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* SetDestinationClickAction;

	/** Roll Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* RollAction;

	/** CamRotation Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* CameraRotAction;

	//WidgetCharacterSelectRPC
	UFUNCTION(Server, Reliable)
	void SerSelection(const FString& playerName, const int& playerClass);

	UFUNCTION(NetMulticast, Reliable)
	void MulSelection(const FString& playerName, const int& playerClass);


	//character classes
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AC_TopDownCharacter> TankC;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AC_TopDownCharacter> DPSC;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AC_TopDownCharacter> HealC;



protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;

	// To add mapping context
	virtual void BeginPlay();

	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();

	void OnRollStarted();
	void OnCamTriggered(const FInputActionValue& value);
private:
	FVector CachedDestination;

	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
	
	FVector SpawnLocation = { 1000.0f,1810.0f,92.0f };
	

public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	UCharacterSelectWidget* selectW;

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> selectWidgetClass;
};
