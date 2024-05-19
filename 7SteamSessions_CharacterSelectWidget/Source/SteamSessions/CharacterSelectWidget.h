// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "CharacterSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class STEAMSESSIONS_API UCharacterSelectWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized() override;

	UFUNCTION()
	void ChooseTank();

	UFUNCTION()
	void ChooseDPS();

	UFUNCTION()
	void ChooseHeal();

	UFUNCTION()
	void Confirmed();

	UFUNCTION()
	void OnChangeName(const FText& Text);


	UFUNCTION()
	int GetChosenInt() { return ChosenClass; }


public:
	UPROPERTY(VisibleDefaultsOnly)
	class UButton* btank;
	
	UPROPERTY(VisibleDefaultsOnly)
	class UButton* bdps;

	UPROPERTY(VisibleDefaultsOnly)
	class UButton* bheal;

	UPROPERTY(VisibleAnywhere)
	int ChosenClass = 0;

	UPROPERTY(VisibleAnywhere)
	FString ChosenName;


	UPROPERTY(VisibleDefaultsOnly)
	class UButton* bconfirm;


	UPROPERTY(VisibleDefaultsOnly)
	class UEditableTextBox* enamebox;


};
