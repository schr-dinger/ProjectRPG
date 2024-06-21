// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_BasicMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_BasicMonster() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_BasicMonster();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_BasicMonster_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(AC_BasicMonster::execMulRPCAttack)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_attack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulRPCAttack_Implementation(Z_Param_attack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execSerAttack)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_attack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerAttack_Implementation(Z_Param_attack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execUpdateHpPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_curHp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHpPercent_Implementation(Z_Param_curHp,Z_Param_maxHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execSerTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageamount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerTakeDamage_Implementation(Z_Param_damageamount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execSetMonsterName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMonsterName_Implementation(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execResetMul)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMul_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_BasicMonster::execResetSer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSer_Implementation();
		P_NATIVE_END;
	}
	struct C_BasicMonster_eventMulRPCAttack_Parms
	{
		UAnimMontage* attack;
	};
	struct C_BasicMonster_eventSerAttack_Parms
	{
		UAnimMontage* attack;
	};
	struct C_BasicMonster_eventSerTakeDamage_Parms
	{
		float damageamount;
	};
	struct C_BasicMonster_eventSetMonsterName_Parms
	{
		FString name;
	};
	struct C_BasicMonster_eventUpdateHpPercent_Parms
	{
		float curHp;
		float maxHp;
	};
	static FName NAME_AC_BasicMonster_MulRPCAttack = FName(TEXT("MulRPCAttack"));
	void AC_BasicMonster::MulRPCAttack(UAnimMontage* attack)
	{
		C_BasicMonster_eventMulRPCAttack_Parms Parms;
		Parms.attack=attack;
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_MulRPCAttack),&Parms);
	}
	static FName NAME_AC_BasicMonster_ResetMul = FName(TEXT("ResetMul"));
	void AC_BasicMonster::ResetMul()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_ResetMul),NULL);
	}
	static FName NAME_AC_BasicMonster_ResetSer = FName(TEXT("ResetSer"));
	void AC_BasicMonster::ResetSer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_ResetSer),NULL);
	}
	static FName NAME_AC_BasicMonster_SerAttack = FName(TEXT("SerAttack"));
	void AC_BasicMonster::SerAttack(UAnimMontage* attack)
	{
		C_BasicMonster_eventSerAttack_Parms Parms;
		Parms.attack=attack;
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_SerAttack),&Parms);
	}
	static FName NAME_AC_BasicMonster_SerTakeDamage = FName(TEXT("SerTakeDamage"));
	void AC_BasicMonster::SerTakeDamage(float damageamount)
	{
		C_BasicMonster_eventSerTakeDamage_Parms Parms;
		Parms.damageamount=damageamount;
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_SerTakeDamage),&Parms);
	}
	static FName NAME_AC_BasicMonster_SetMonsterName = FName(TEXT("SetMonsterName"));
	void AC_BasicMonster::SetMonsterName(const FString& name)
	{
		C_BasicMonster_eventSetMonsterName_Parms Parms;
		Parms.name=name;
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_SetMonsterName),&Parms);
	}
	static FName NAME_AC_BasicMonster_UpdateHpPercent = FName(TEXT("UpdateHpPercent"));
	void AC_BasicMonster::UpdateHpPercent(float curHp, float maxHp)
	{
		C_BasicMonster_eventUpdateHpPercent_Parms Parms;
		Parms.curHp=curHp;
		Parms.maxHp=maxHp;
		ProcessEvent(FindFunctionChecked(NAME_AC_BasicMonster_UpdateHpPercent),&Parms);
	}
	void AC_BasicMonster::StaticRegisterNativesAC_BasicMonster()
	{
		UClass* Class = AC_BasicMonster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulRPCAttack", &AC_BasicMonster::execMulRPCAttack },
			{ "ResetMul", &AC_BasicMonster::execResetMul },
			{ "ResetSer", &AC_BasicMonster::execResetSer },
			{ "SerAttack", &AC_BasicMonster::execSerAttack },
			{ "SerTakeDamage", &AC_BasicMonster::execSerTakeDamage },
			{ "SetMonsterName", &AC_BasicMonster::execSetMonsterName },
			{ "UpdateHpPercent", &AC_BasicMonster::execUpdateHpPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::NewProp_attack = { "attack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventMulRPCAttack_Parms, attack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::NewProp_attack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "MulRPCAttack", nullptr, nullptr, sizeof(C_BasicMonster_eventMulRPCAttack_Parms), Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "ResetMul", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_ResetMul()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_ResetMul_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "ResetSer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_ResetSer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_ResetSer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::NewProp_attack = { "attack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventSerAttack_Parms, attack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::NewProp_attack,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "SerAttack", nullptr, nullptr, sizeof(C_BasicMonster_eventSerAttack_Parms), Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_SerAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_SerAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageamount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::NewProp_damageamount = { "damageamount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventSerTakeDamage_Parms, damageamount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::NewProp_damageamount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "SerTakeDamage", nullptr, nullptr, sizeof(C_BasicMonster_eventSerTakeDamage_Parms), Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventSetMonsterName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "SetMonsterName", nullptr, nullptr, sizeof(C_BasicMonster_eventSetMonsterName_Parms), Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_SetMonsterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_SetMonsterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curHp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::NewProp_curHp = { "curHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventUpdateHpPercent_Parms, curHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::NewProp_maxHp = { "maxHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_BasicMonster_eventUpdateHpPercent_Parms, maxHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::NewProp_curHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::NewProp_maxHp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_BasicMonster, nullptr, "UpdateHpPercent", nullptr, nullptr, sizeof(C_BasicMonster_eventUpdateHpPercent_Parms), Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_BasicMonster);
	UClass* Z_Construct_UClass_AC_BasicMonster_NoRegister()
	{
		return AC_BasicMonster::StaticClass();
	}
	struct Z_Construct_UClass_AC_BasicMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverHeadUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverHeadUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MonsterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonsterHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MonsterHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_BasicMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_BasicMonster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_BasicMonster_MulRPCAttack, "MulRPCAttack" }, // 1123808135
		{ &Z_Construct_UFunction_AC_BasicMonster_ResetMul, "ResetMul" }, // 2488225628
		{ &Z_Construct_UFunction_AC_BasicMonster_ResetSer, "ResetSer" }, // 1464685427
		{ &Z_Construct_UFunction_AC_BasicMonster_SerAttack, "SerAttack" }, // 1216648927
		{ &Z_Construct_UFunction_AC_BasicMonster_SerTakeDamage, "SerTakeDamage" }, // 3301628407
		{ &Z_Construct_UFunction_AC_BasicMonster_SetMonsterName, "SetMonsterName" }, // 2866621406
		{ &Z_Construct_UFunction_AC_BasicMonster_UpdateHpPercent, "UpdateHpPercent" }, // 4138971605
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_BasicMonster.h" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack1_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack1 = { "Attack1", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, Attack1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack2_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack2 = { "Attack2", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, Attack2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_OverHeadUI_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_OverHeadUI = { "OverHeadUI", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, OverHeadUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_OverHeadUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_OverHeadUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterName_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterName = { "MonsterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, MonsterName), METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterHp_MetaData[] = {
		{ "Category", "C_BasicMonster" },
		{ "ModuleRelativePath", "C_BasicMonster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterHp = { "MonsterHp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_BasicMonster, MonsterHp), METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterHp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_BasicMonster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_Attack2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_OverHeadUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_BasicMonster_Statics::NewProp_MonsterHp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_BasicMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_BasicMonster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_BasicMonster_Statics::ClassParams = {
		&AC_BasicMonster::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_BasicMonster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_BasicMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_BasicMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_BasicMonster()
	{
		if (!Z_Registration_Info_UClass_AC_BasicMonster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_BasicMonster.OuterSingleton, Z_Construct_UClass_AC_BasicMonster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_BasicMonster.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<AC_BasicMonster>()
	{
		return AC_BasicMonster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_BasicMonster);
	AC_BasicMonster::~AC_BasicMonster() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_BasicMonster, AC_BasicMonster::StaticClass, TEXT("AC_BasicMonster"), &Z_Registration_Info_UClass_AC_BasicMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_BasicMonster), 1626223482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_2773932627(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
