// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_TopDownCharacter.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TopDownCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_SlashAttack_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownCharacter();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownCharacter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(AC_TopDownCharacter::execMulRPCAttack)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AttackMon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulRPCAttack_Implementation(Z_Param_AttackMon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execSerRPCAttack)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AttackMon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerRPCAttack_Implementation(Z_Param_AttackMon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execUpdateHpPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_curHp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHpPercent_Implementation(Z_Param_curHp,Z_Param_maxHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageamount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage_Implementation(Z_Param_damageamount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execSetCharacterName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterName_Implementation(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execMulRPCRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->MulRPCRoll_Validate())
		{
			RPC_ValidateFailed(TEXT("MulRPCRoll_Validate"));
			return;
		}
		P_THIS->MulRPCRoll_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownCharacter::execSerRPCRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SerRPCRoll_Validate())
		{
			RPC_ValidateFailed(TEXT("SerRPCRoll_Validate"));
			return;
		}
		P_THIS->SerRPCRoll_Implementation();
		P_NATIVE_END;
	}
	struct C_TopDownCharacter_eventMulRPCAttack_Parms
	{
		UAnimMontage* AttackMon;
	};
	struct C_TopDownCharacter_eventSerRPCAttack_Parms
	{
		UAnimMontage* AttackMon;
	};
	struct C_TopDownCharacter_eventSetCharacterName_Parms
	{
		FString name;
	};
	struct C_TopDownCharacter_eventTakeDamage_Parms
	{
		float damageamount;
	};
	struct C_TopDownCharacter_eventUpdateHpPercent_Parms
	{
		float curHp;
		float maxHp;
	};
	static FName NAME_AC_TopDownCharacter_MulRPCAttack = FName(TEXT("MulRPCAttack"));
	void AC_TopDownCharacter::MulRPCAttack(UAnimMontage* AttackMon)
	{
		C_TopDownCharacter_eventMulRPCAttack_Parms Parms;
		Parms.AttackMon=AttackMon;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_MulRPCAttack),&Parms);
	}
	static FName NAME_AC_TopDownCharacter_MulRPCRoll = FName(TEXT("MulRPCRoll"));
	void AC_TopDownCharacter::MulRPCRoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_MulRPCRoll),NULL);
	}
	static FName NAME_AC_TopDownCharacter_SerRPCAttack = FName(TEXT("SerRPCAttack"));
	void AC_TopDownCharacter::SerRPCAttack(UAnimMontage* AttackMon)
	{
		C_TopDownCharacter_eventSerRPCAttack_Parms Parms;
		Parms.AttackMon=AttackMon;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_SerRPCAttack),&Parms);
	}
	static FName NAME_AC_TopDownCharacter_SerRPCRoll = FName(TEXT("SerRPCRoll"));
	void AC_TopDownCharacter::SerRPCRoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_SerRPCRoll),NULL);
	}
	static FName NAME_AC_TopDownCharacter_SetCharacterName = FName(TEXT("SetCharacterName"));
	void AC_TopDownCharacter::SetCharacterName(const FString& name)
	{
		C_TopDownCharacter_eventSetCharacterName_Parms Parms;
		Parms.name=name;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_SetCharacterName),&Parms);
	}
	static FName NAME_AC_TopDownCharacter_TakeDamage = FName(TEXT("TakeDamage"));
	void AC_TopDownCharacter::TakeDamage(float damageamount)
	{
		C_TopDownCharacter_eventTakeDamage_Parms Parms;
		Parms.damageamount=damageamount;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_TakeDamage),&Parms);
	}
	static FName NAME_AC_TopDownCharacter_UpdateHpPercent = FName(TEXT("UpdateHpPercent"));
	void AC_TopDownCharacter::UpdateHpPercent(float curHp, float maxHp)
	{
		C_TopDownCharacter_eventUpdateHpPercent_Parms Parms;
		Parms.curHp=curHp;
		Parms.maxHp=maxHp;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownCharacter_UpdateHpPercent),&Parms);
	}
	void AC_TopDownCharacter::StaticRegisterNativesAC_TopDownCharacter()
	{
		UClass* Class = AC_TopDownCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulRPCAttack", &AC_TopDownCharacter::execMulRPCAttack },
			{ "MulRPCRoll", &AC_TopDownCharacter::execMulRPCRoll },
			{ "SerRPCAttack", &AC_TopDownCharacter::execSerRPCAttack },
			{ "SerRPCRoll", &AC_TopDownCharacter::execSerRPCRoll },
			{ "SetCharacterName", &AC_TopDownCharacter::execSetCharacterName },
			{ "TakeDamage", &AC_TopDownCharacter::execTakeDamage },
			{ "UpdateHpPercent", &AC_TopDownCharacter::execUpdateHpPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::NewProp_AttackMon = { "AttackMon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventMulRPCAttack_Parms, AttackMon), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::NewProp_AttackMon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "MulRPCAttack", nullptr, nullptr, sizeof(C_TopDownCharacter_eventMulRPCAttack_Parms), Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "MulRPCRoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::NewProp_AttackMon = { "AttackMon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventSerRPCAttack_Parms, AttackMon), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::NewProp_AttackMon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//skills\n" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "skills" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "SerRPCAttack", nullptr, nullptr, sizeof(C_TopDownCharacter_eventSerRPCAttack_Parms), Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called to bind functionality to input\n//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;\n" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "Called to bind functionality to input\nvirtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "SerRPCRoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventSetCharacterName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "SetCharacterName", nullptr, nullptr, sizeof(C_TopDownCharacter_eventSetCharacterName_Parms), Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageamount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::NewProp_damageamount = { "damageamount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventTakeDamage_Parms, damageamount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::NewProp_damageamount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(C_TopDownCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curHp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::NewProp_curHp = { "curHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventUpdateHpPercent_Parms, curHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::NewProp_maxHp = { "maxHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownCharacter_eventUpdateHpPercent_Parms, maxHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::NewProp_curHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::NewProp_maxHp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownCharacter, nullptr, "UpdateHpPercent", nullptr, nullptr, sizeof(C_TopDownCharacter_eventUpdateHpPercent_Parms), Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_TopDownCharacter);
	UClass* Z_Construct_UClass_AC_TopDownCharacter_NoRegister()
	{
		return AC_TopDownCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AC_TopDownCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RollMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlashAttackClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlashAttackClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverHeadUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverHeadUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_TopDownCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_TopDownCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_TopDownCharacter_MulRPCAttack, "MulRPCAttack" }, // 2704008687
		{ &Z_Construct_UFunction_AC_TopDownCharacter_MulRPCRoll, "MulRPCRoll" }, // 3875094202
		{ &Z_Construct_UFunction_AC_TopDownCharacter_SerRPCAttack, "SerRPCAttack" }, // 1615103103
		{ &Z_Construct_UFunction_AC_TopDownCharacter_SerRPCRoll, "SerRPCRoll" }, // 3061684067
		{ &Z_Construct_UFunction_AC_TopDownCharacter_SetCharacterName, "SetCharacterName" }, // 332759643
		{ &Z_Construct_UFunction_AC_TopDownCharacter_TakeDamage, "TakeDamage" }, // 221640405
		{ &Z_Construct_UFunction_AC_TopDownCharacter_UpdateHpPercent, "UpdateHpPercent" }, // 22501554
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_TopDownCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_RollMotion_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_RollMotion = { "RollMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, RollMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_RollMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_RollMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_MeleeMotion_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_MeleeMotion = { "MeleeMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, MeleeMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_MeleeMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_MeleeMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_QMotion_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_QMotion = { "QMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, QMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_QMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_QMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_WMotion_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_WMotion = { "WMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, WMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_WMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_WMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_EMotion_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_EMotion = { "EMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, EMotion), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_EMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_EMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_SlashAttackClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "Comment", "//attacks\n" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "attacks" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_SlashAttackClass = { "SlashAttackClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, SlashAttackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_SlashAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_SlashAttackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_SlashAttackClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_OverHeadUI_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "Comment", "//Over Head UI\n//UPROPERTY()\n//TSubclassOf<UCUW_CharacterOverHead> OverHeadUIClass;\n//UCUW_CharacterOverHead* OverHeadUI;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
		{ "ToolTip", "Over Head UI\nUPROPERTY()\nTSubclassOf<UCUW_CharacterOverHead> OverHeadUIClass;\nUCUW_CharacterOverHead* OverHeadUI;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_OverHeadUI = { "OverHeadUI", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, OverHeadUI), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_OverHeadUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_OverHeadUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, CharacterName), METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterHp_MetaData[] = {
		{ "Category", "C_TopDownCharacter" },
		{ "ModuleRelativePath", "C_TopDownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterHp = { "CharacterHp", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownCharacter, CharacterHp), METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterHp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterHp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_TopDownCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_RollMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_MeleeMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_QMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_WMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_EMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_SlashAttackClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_OverHeadUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownCharacter_Statics::NewProp_CharacterHp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_TopDownCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_TopDownCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_TopDownCharacter_Statics::ClassParams = {
		&AC_TopDownCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_TopDownCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_TopDownCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_TopDownCharacter()
	{
		if (!Z_Registration_Info_UClass_AC_TopDownCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_TopDownCharacter.OuterSingleton, Z_Construct_UClass_AC_TopDownCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_TopDownCharacter.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<AC_TopDownCharacter>()
	{
		return AC_TopDownCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_TopDownCharacter);
	AC_TopDownCharacter::~AC_TopDownCharacter() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_TopDownCharacter, AC_TopDownCharacter::StaticClass, TEXT("AC_TopDownCharacter"), &Z_Registration_Info_UClass_AC_TopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_TopDownCharacter), 1649690824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_648799979(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
