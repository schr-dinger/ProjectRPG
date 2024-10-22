// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_TopDownGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TopDownGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownGameMode();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_AC_TopDownGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	void AC_TopDownGameMode::StaticRegisterNativesAC_TopDownGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_TopDownGameMode);
	UClass* Z_Construct_UClass_AC_TopDownGameMode_NoRegister()
	{
		return AC_TopDownGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AC_TopDownGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_TopDownGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_TopDownGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C_TopDownGameMode.h" },
		{ "ModuleRelativePath", "C_TopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_TopDownGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_TopDownGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_TopDownGameMode_Statics::ClassParams = {
		&AC_TopDownGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AC_TopDownGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_TopDownGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_TopDownGameMode()
	{
		if (!Z_Registration_Info_UClass_AC_TopDownGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_TopDownGameMode.OuterSingleton, Z_Construct_UClass_AC_TopDownGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_TopDownGameMode.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<AC_TopDownGameMode>()
	{
		return AC_TopDownGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_TopDownGameMode);
	AC_TopDownGameMode::~AC_TopDownGameMode() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_TopDownGameMode, AC_TopDownGameMode::StaticClass, TEXT("AC_TopDownGameMode"), &Z_Registration_Info_UClass_AC_TopDownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_TopDownGameMode), 2093688097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownGameMode_h_2798833956(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
