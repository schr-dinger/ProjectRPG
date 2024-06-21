// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/CUW_CharacterOverHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUW_CharacterOverHead() {}
// Cross Module References
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCUW_CharacterOverHead();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCUW_CharacterOverHead_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(UCUW_CharacterOverHead::execSetHP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_curHp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHP(Z_Param_curHp,Z_Param_maxHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCUW_CharacterOverHead::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_NewText);
		P_NATIVE_END;
	}
	void UCUW_CharacterOverHead::StaticRegisterNativesUCUW_CharacterOverHead()
	{
		UClass* Class = UCUW_CharacterOverHead::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHP", &UCUW_CharacterOverHead::execSetHP },
			{ "SetName", &UCUW_CharacterOverHead::execSetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics
	{
		struct CUW_CharacterOverHead_eventSetHP_Parms
		{
			float curHp;
			float maxHp;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curHp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::NewProp_curHp = { "curHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CUW_CharacterOverHead_eventSetHP_Parms, curHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::NewProp_maxHp = { "maxHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CUW_CharacterOverHead_eventSetHP_Parms, maxHp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::NewProp_curHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::NewProp_maxHp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CUW_CharacterOverHead.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUW_CharacterOverHead, nullptr, "SetHP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::CUW_CharacterOverHead_eventSetHP_Parms), Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics
	{
		struct CUW_CharacterOverHead_eventSetName_Parms
		{
			FString NewText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CUW_CharacterOverHead_eventSetName_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CUW_CharacterOverHead.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUW_CharacterOverHead, nullptr, "SetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::CUW_CharacterOverHead_eventSetName_Parms), Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUW_CharacterOverHead_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCUW_CharacterOverHead_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUW_CharacterOverHead);
	UClass* Z_Construct_UClass_UCUW_CharacterOverHead_NoRegister()
	{
		return UCUW_CharacterOverHead::StaticClass();
	}
	struct Z_Construct_UClass_UCUW_CharacterOverHead_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HpBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUW_CharacterOverHead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUW_CharacterOverHead_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUW_CharacterOverHead_SetHP, "SetHP" }, // 230804578
		{ &Z_Construct_UFunction_UCUW_CharacterOverHead_SetName, "SetName" }, // 867069025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUW_CharacterOverHead_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CUW_CharacterOverHead.h" },
		{ "ModuleRelativePath", "CUW_CharacterOverHead.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_CharName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CUW_CharacterOverHead.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCUW_CharacterOverHead, CharName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_CharName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_CharName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_HpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CUW_CharacterOverHead.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_HpBar = { "HpBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCUW_CharacterOverHead, HpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_HpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_HpBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCUW_CharacterOverHead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_CharName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCUW_CharacterOverHead_Statics::NewProp_HpBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUW_CharacterOverHead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUW_CharacterOverHead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUW_CharacterOverHead_Statics::ClassParams = {
		&UCUW_CharacterOverHead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCUW_CharacterOverHead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUW_CharacterOverHead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUW_CharacterOverHead()
	{
		if (!Z_Registration_Info_UClass_UCUW_CharacterOverHead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUW_CharacterOverHead.OuterSingleton, Z_Construct_UClass_UCUW_CharacterOverHead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCUW_CharacterOverHead.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UCUW_CharacterOverHead>()
	{
		return UCUW_CharacterOverHead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUW_CharacterOverHead);
	UCUW_CharacterOverHead::~UCUW_CharacterOverHead() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_CharacterOverHead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_CharacterOverHead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCUW_CharacterOverHead, UCUW_CharacterOverHead::StaticClass, TEXT("UCUW_CharacterOverHead"), &Z_Registration_Info_UClass_UCUW_CharacterOverHead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUW_CharacterOverHead), 1076377915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_CharacterOverHead_h_1004155329(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_CharacterOverHead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_CharacterOverHead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
