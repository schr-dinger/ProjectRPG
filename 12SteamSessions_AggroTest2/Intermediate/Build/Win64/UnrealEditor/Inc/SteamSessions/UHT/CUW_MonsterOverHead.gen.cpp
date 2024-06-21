// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/CUW_MonsterOverHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUW_MonsterOverHead() {}
// Cross Module References
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCUW_MonsterOverHead();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCUW_MonsterOverHead_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	void UCUW_MonsterOverHead::StaticRegisterNativesUCUW_MonsterOverHead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCUW_MonsterOverHead);
	UClass* Z_Construct_UClass_UCUW_MonsterOverHead_NoRegister()
	{
		return UCUW_MonsterOverHead::StaticClass();
	}
	struct Z_Construct_UClass_UCUW_MonsterOverHead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUW_MonsterOverHead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUW_MonsterOverHead_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CUW_MonsterOverHead.h" },
		{ "ModuleRelativePath", "CUW_MonsterOverHead.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUW_MonsterOverHead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUW_MonsterOverHead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCUW_MonsterOverHead_Statics::ClassParams = {
		&UCUW_MonsterOverHead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUW_MonsterOverHead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUW_MonsterOverHead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUW_MonsterOverHead()
	{
		if (!Z_Registration_Info_UClass_UCUW_MonsterOverHead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCUW_MonsterOverHead.OuterSingleton, Z_Construct_UClass_UCUW_MonsterOverHead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCUW_MonsterOverHead.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UCUW_MonsterOverHead>()
	{
		return UCUW_MonsterOverHead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUW_MonsterOverHead);
	UCUW_MonsterOverHead::~UCUW_MonsterOverHead() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_MonsterOverHead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_MonsterOverHead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCUW_MonsterOverHead, UCUW_MonsterOverHead::StaticClass, TEXT("UCUW_MonsterOverHead"), &Z_Registration_Info_UClass_UCUW_MonsterOverHead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCUW_MonsterOverHead), 1221576287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_MonsterOverHead_h_3443611731(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_MonsterOverHead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CUW_MonsterOverHead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
