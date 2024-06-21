// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_BTT_BasicMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_BTT_BasicMonster() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_BTT_BasicMonster();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_BTT_BasicMonster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	void UC_BTT_BasicMonster::StaticRegisterNativesUC_BTT_BasicMonster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_BTT_BasicMonster);
	UClass* Z_Construct_UClass_UC_BTT_BasicMonster_NoRegister()
	{
		return UC_BTT_BasicMonster::StaticClass();
	}
	struct Z_Construct_UClass_UC_BTT_BasicMonster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_BTT_BasicMonster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_BTT_BasicMonster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "C_BTT_BasicMonster.h" },
		{ "ModuleRelativePath", "C_BTT_BasicMonster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_BTT_BasicMonster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_BTT_BasicMonster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_BTT_BasicMonster_Statics::ClassParams = {
		&UC_BTT_BasicMonster::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UC_BTT_BasicMonster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_BTT_BasicMonster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_BTT_BasicMonster()
	{
		if (!Z_Registration_Info_UClass_UC_BTT_BasicMonster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_BTT_BasicMonster.OuterSingleton, Z_Construct_UClass_UC_BTT_BasicMonster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UC_BTT_BasicMonster.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UC_BTT_BasicMonster>()
	{
		return UC_BTT_BasicMonster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_BTT_BasicMonster);
	UC_BTT_BasicMonster::~UC_BTT_BasicMonster() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTT_BasicMonster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTT_BasicMonster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UC_BTT_BasicMonster, UC_BTT_BasicMonster::StaticClass, TEXT("UC_BTT_BasicMonster"), &Z_Registration_Info_UClass_UC_BTT_BasicMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_BTT_BasicMonster), 2672696001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTT_BasicMonster_h_3961092502(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTT_BasicMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTT_BasicMonster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
