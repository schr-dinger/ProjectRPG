// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C_Attack.h"


/**
 * 
 */
class STEAMSESSIONS_API C_InfoStruct
{
public:
	C_InfoStruct();
	~C_InfoStruct();
public:

};


USTRUCT(BlueprintType)
struct FTest
{
    GENERATED_USTRUCT_BODY()

public:
    FTest()
    {
    }
    
    void Set(AC_Attack* Skill)
    {
        Skill->isFloor = this->isFloor;
        Skill->isMove = this->isMove;
        Skill->isMonster = this->isMonster;
        Skill->isSpawning = this->isSpawning;

    }
public:

    bool isFloor = false;

    bool isMove = false;

    bool isMonster = false;

    bool isSpawning = false;

};
