// Fill out your copyright notice in the Description page of Project Settings.


#include "C_AIBehaviorComponent.h"
#include "C_TopDownCharacter.h"
#include "C_BasicMonster.h"
#include "BehaviorTree/BlackboardComponent.h"


bool UC_AIBehaviorComponent::IsType(EBehaviorType InType)
{
	return GetType() == InType;
}

void UC_AIBehaviorComponent::ChangeType(EBehaviorType InType)
{
	EBehaviorType type = GetType();
	Blackboard->SetValueAsEnum(BehaviorKey, (uint8)InType);
}

AC_TopDownCharacter* UC_AIBehaviorComponent::GetPlayer()
{
	return Cast<AC_TopDownCharacter>(Blackboard->GetValueAsObject(PlayerKey));
}

UC_AIBehaviorComponent::UC_AIBehaviorComponent()
{
}

void UC_AIBehaviorComponent::BeginPlay()
{
}

EBehaviorType UC_AIBehaviorComponent::GetType()
{
	return (EBehaviorType)Blackboard->GetValueAsEnum(BehaviorKey);
}
