// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_TopDownController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TopDownController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownCharacter_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownController();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownController_NoRegister();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCharacterSelectWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(AC_TopDownController::execHandleTextChange)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTextChange(Z_Param_Out_NewText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownController::execMulSelection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulSelection_Implementation(Z_Param_playerName,Z_Param_playerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownController::execSerSelection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerSelection_Implementation(Z_Param_playerName,Z_Param_playerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_TopDownController::execControlAccess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ControlAccess(Z_Param_playerName,Z_Param_playerClass);
		P_NATIVE_END;
	}
	struct C_TopDownController_eventMulSelection_Parms
	{
		FString playerName;
		int32 playerClass;
	};
	struct C_TopDownController_eventSerSelection_Parms
	{
		FString playerName;
		int32 playerClass;
	};
	static FName NAME_AC_TopDownController_MulSelection = FName(TEXT("MulSelection"));
	void AC_TopDownController::MulSelection(const FString& playerName, int32 const& playerClass)
	{
		C_TopDownController_eventMulSelection_Parms Parms;
		Parms.playerName=playerName;
		Parms.playerClass=playerClass;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownController_MulSelection),&Parms);
	}
	static FName NAME_AC_TopDownController_SerSelection = FName(TEXT("SerSelection"));
	void AC_TopDownController::SerSelection(const FString& playerName, int32 const& playerClass)
	{
		C_TopDownController_eventSerSelection_Parms Parms;
		Parms.playerName=playerName;
		Parms.playerClass=playerClass;
		ProcessEvent(FindFunctionChecked(NAME_AC_TopDownController_SerSelection),&Parms);
	}
	void AC_TopDownController::StaticRegisterNativesAC_TopDownController()
	{
		UClass* Class = AC_TopDownController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlAccess", &AC_TopDownController::execControlAccess },
			{ "HandleTextChange", &AC_TopDownController::execHandleTextChange },
			{ "MulSelection", &AC_TopDownController::execMulSelection },
			{ "SerSelection", &AC_TopDownController::execSerSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics
	{
		struct C_TopDownController_eventControlAccess_Parms
		{
			FString playerName;
			int32 playerClass;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventControlAccess_Parms, playerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::NewProp_playerClass = { "playerClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventControlAccess_Parms, playerClass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::NewProp_playerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::NewProp_playerClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownController, nullptr, "ControlAccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::C_TopDownController_eventControlAccess_Parms), Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownController_ControlAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownController_ControlAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics
	{
		struct C_TopDownController_eventHandleTextChange_Parms
		{
			FText NewText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventHandleTextChange_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownController, nullptr, "HandleTextChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::C_TopDownController_eventHandleTextChange_Parms), Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownController_HandleTextChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownController_HandleTextChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerClass_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventMulSelection_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerClass = { "playerClass", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventMulSelection_Parms, playerClass), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::NewProp_playerClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownController, nullptr, "MulSelection", nullptr, nullptr, sizeof(C_TopDownController_eventMulSelection_Parms), Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownController_MulSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownController_MulSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_playerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerClass_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_playerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventSerSelection_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerClass = { "playerClass", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_TopDownController_eventSerSelection_Parms, playerClass), METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::NewProp_playerClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//WidgetCharacterSelectRPC\n" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "WidgetCharacterSelectRPC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TopDownController, nullptr, "SerSelection", nullptr, nullptr, sizeof(C_TopDownController_eventSerSelection_Parms), Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC_TopDownController_SerSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TopDownController_SerSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_TopDownController);
	UClass* Z_Construct_UClass_AC_TopDownController_NoRegister()
	{
		return AC_TopDownController::StaticClass();
	}
	struct Z_Construct_UClass_AC_TopDownController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QSkillAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QSkillAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WSkillAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WSkillAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ESkillAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ESkillAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankC_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TankC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPSC_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DPSC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealC_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HealC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_selectWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectW_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_selectW;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_TopDownController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_TopDownController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_TopDownController_ControlAccess, "ControlAccess" }, // 3398831741
		{ &Z_Construct_UFunction_AC_TopDownController_HandleTextChange, "HandleTextChange" }, // 3445167702
		{ &Z_Construct_UFunction_AC_TopDownController_MulSelection, "MulSelection" }, // 2317019002
		{ &Z_Construct_UFunction_AC_TopDownController_SerSelection, "SerSelection" }, // 2780150210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "C_TopDownController.h" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_FXCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Click Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "Click Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_SetDestinationClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_SetDestinationClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_RollAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Roll Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "Roll Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_RollAction = { "RollAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, RollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_RollAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_RollAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_CameraRotAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** CamRotation Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "CamRotation Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_CameraRotAction = { "CameraRotAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, CameraRotAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_CameraRotAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_CameraRotAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_MeleeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Lbutton Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "Lbutton Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_MeleeAction = { "MeleeAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, MeleeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_MeleeAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_MeleeAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_QSkillAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Q Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "Q Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_QSkillAction = { "QSkillAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, QSkillAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_QSkillAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_QSkillAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_WSkillAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** W Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "W Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_WSkillAction = { "WSkillAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, WSkillAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_WSkillAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_WSkillAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ESkillAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** E Input Action */" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "E Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ESkillAction = { "ESkillAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, ESkillAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ESkillAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ESkillAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_TankC_MetaData[] = {
		{ "Category", "C_TopDownController" },
		{ "Comment", "//character classes\n" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
		{ "ToolTip", "character classes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_TankC = { "TankC", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, TankC), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_TankC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_TankC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DPSC_MetaData[] = {
		{ "Category", "C_TopDownController" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DPSC = { "DPSC", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, DPSC), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DPSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DPSC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_HealC_MetaData[] = {
		{ "Category", "C_TopDownController" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_HealC = { "HealC", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, HealC), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_TopDownCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_HealC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_HealC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectWidgetClass = { "selectWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, selectWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCharacterSelectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectW_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_TopDownController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectW = { "selectW", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_TopDownController, selectW), Z_Construct_UClass_UCharacterSelectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectW_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_TopDownController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_RollAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_CameraRotAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_MeleeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_QSkillAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_WSkillAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_ESkillAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_TankC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_DPSC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_HealC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TopDownController_Statics::NewProp_selectW,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_TopDownController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_TopDownController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_TopDownController_Statics::ClassParams = {
		&AC_TopDownController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_TopDownController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_TopDownController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_TopDownController()
	{
		if (!Z_Registration_Info_UClass_AC_TopDownController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_TopDownController.OuterSingleton, Z_Construct_UClass_AC_TopDownController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_TopDownController.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<AC_TopDownController>()
	{
		return AC_TopDownController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_TopDownController);
	AC_TopDownController::~AC_TopDownController() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_TopDownController, AC_TopDownController::StaticClass, TEXT("AC_TopDownController"), &Z_Registration_Info_UClass_AC_TopDownController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_TopDownController), 4230054277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownController_h_2293653157(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
