// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_AIController();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_AIController_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownCharacter_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_AIBehaviorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(AC_AIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY(AActor*,Z_Param_UpdateActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated_Implementation(Z_Param_UpdateActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_AIController::execUpdateTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_AIController::execServerIncreaseAggro)
	{
		P_GET_OBJECT(AC_TopDownCharacter,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerIncreaseAggro_Implementation(Z_Param_Player,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_AIController::execGetHighestAggroTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AC_TopDownCharacter**)Z_Param__Result=P_THIS->GetHighestAggroTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_AIController::execIncreaseAggro)
	{
		P_GET_OBJECT(AC_TopDownCharacter,Z_Param_Player);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseAggro(Z_Param_Player,Z_Param_Amount);
		P_NATIVE_END;
	}
	struct C_AIController_eventOnPerceptionUpdated_Parms
	{
		TArray<AActor*> UpdateActors;
	};
	struct C_AIController_eventServerIncreaseAggro_Parms
	{
		AC_TopDownCharacter* Player;
		float Amount;
	};
	static FName NAME_AC_AIController_OnPerceptionUpdated = FName(TEXT("OnPerceptionUpdated"));
	void AC_AIController::OnPerceptionUpdated(TArray<AActor*> const& UpdateActors)
	{
		C_AIController_eventOnPerceptionUpdated_Parms Parms;
		Parms.UpdateActors=UpdateActors;
		ProcessEvent(FindFunctionChecked(NAME_AC_AIController_OnPerceptionUpdated),&Parms);
	}
	static FName NAME_AC_AIController_ServerIncreaseAggro = FName(TEXT("ServerIncreaseAggro"));
	void AC_AIController::ServerIncreaseAggro(AC_TopDownCharacter* Player, float Amount)
	{
		C_AIController_eventServerIncreaseAggro_Parms Parms;
		Parms.Player=Player;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AC_AIController_ServerIncreaseAggro),&Parms);
	}
	static FName NAME_AC_AIController_UpdateTarget = FName(TEXT("UpdateTarget"));
	void AC_AIController::UpdateTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC_AIController_UpdateTarget),NULL);
	}
	void AC_AIController::StaticRegisterNativesAC_AIController()
	{
		UClass* Class = AC_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHighestAggroTarget", &AC_AIController::execGetHighestAggroTarget },
			{ "IncreaseAggro", &AC_AIController::execIncreaseAggro },
			{ "OnPerceptionUpdated", &AC_AIController::execOnPerceptionUpdated },
			{ "ServerIncreaseAggro", &AC_AIController::execServerIncreaseAggro },
			{ "UpdateTarget", &AC_AIController::execUpdateTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics
	{
		struct C_AIController_eventGetHighestAggroTarget_Parms
		{
			AC_TopDownCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventGetHighestAggroTarget_Parms, ReturnValue), Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "C_AIController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_AIController, nullptr, "GetHighestAggroTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::C_AIController_eventGetHighestAggroTarget_Parms), Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics
	{
		struct C_AIController_eventIncreaseAggro_Parms
		{
			AC_TopDownCharacter* Player;
			float Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventIncreaseAggro_Parms, Player), Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventIncreaseAggro_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "C_AIController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_AIController, nullptr, "IncreaseAggro", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::C_AIController_eventIncreaseAggro_Parms), Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_AIController_IncreaseAggro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_AIController_IncreaseAggro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner = { "UpdateActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors = { "UpdateActors", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventOnPerceptionUpdated_Parms, UpdateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_AIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(C_AIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventServerIncreaseAggro_Parms, Player), Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIController_eventServerIncreaseAggro_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "C_AIController.h" },
		{ "ToolTip", "RPC \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_AIController, nullptr, "ServerIncreaseAggro", nullptr, nullptr, sizeof(C_AIController_eventServerIncreaseAggro_Parms), Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_AIController, nullptr, "UpdateTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_AIController_UpdateTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_AIController_UpdateTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_AIController);
	UClass* Z_Construct_UClass_AC_AIController_NoRegister()
	{
		return AC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustCircleHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustCircleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_AIController_GetHighestAggroTarget, "GetHighestAggroTarget" }, // 2372080198
		{ &Z_Construct_UFunction_AC_AIController_IncreaseAggro, "IncreaseAggro" }, // 76381616
		{ &Z_Construct_UFunction_AC_AIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2282672801
		{ &Z_Construct_UFunction_AC_AIController_ServerIncreaseAggro, "ServerIncreaseAggro" }, // 3406118118
		{ &Z_Construct_UFunction_AC_AIController_UpdateTarget, "UpdateTarget" }, // 3913435452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C_AIController.h" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "C_AIController" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	void Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AC_AIController*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_AIController), &Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "C_AIController" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_AIController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_AIController, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::NewProp_AdjustCircleHeight_MetaData[] = {
		{ "Category", "C_AIController" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_AIController_Statics::NewProp_AdjustCircleHeight = { "AdjustCircleHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_AIController, AdjustCircleHeight), METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::NewProp_AdjustCircleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::NewProp_AdjustCircleHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "C_AIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_AIController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_AIController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_AIController_Statics::NewProp_Behavior_MetaData[] = {
		{ "Category", "C_AIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_AIController_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_AIController, Behavior), Z_Construct_UClass_UC_AIBehaviorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::NewProp_Behavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_AIController_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_AIController_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_AIController_Statics::NewProp_AdjustCircleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_AIController_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_AIController_Statics::NewProp_Behavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_AIController_Statics::ClassParams = {
		&AC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_AIController()
	{
		if (!Z_Registration_Info_UClass_AC_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_AIController.OuterSingleton, Z_Construct_UClass_AC_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_AIController.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<AC_AIController>()
	{
		return AC_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_AIController);
	AC_AIController::~AC_AIController() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_AIController, AC_AIController::StaticClass, TEXT("AC_AIController"), &Z_Registration_Info_UClass_AC_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_AIController), 276801092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_1376896052(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
