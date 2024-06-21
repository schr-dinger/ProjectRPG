// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_BTAttackTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_BTAttackTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_BTAttackTask();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_BTAttackTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	void UC_BTAttackTask::StaticRegisterNativesUC_BTAttackTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_BTAttackTask);
	UClass* Z_Construct_UClass_UC_BTAttackTask_NoRegister()
	{
		return UC_BTAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UC_BTAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_BTAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_BTAttackTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "C_BTAttackTask.h" },
		{ "ModuleRelativePath", "C_BTAttackTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_BTAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_BTAttackTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_BTAttackTask_Statics::ClassParams = {
		&UC_BTAttackTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UC_BTAttackTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_BTAttackTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_BTAttackTask()
	{
		if (!Z_Registration_Info_UClass_UC_BTAttackTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_BTAttackTask.OuterSingleton, Z_Construct_UClass_UC_BTAttackTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UC_BTAttackTask.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UC_BTAttackTask>()
	{
		return UC_BTAttackTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_BTAttackTask);
	UC_BTAttackTask::~UC_BTAttackTask() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTAttackTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTAttackTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UC_BTAttackTask, UC_BTAttackTask::StaticClass, TEXT("UC_BTAttackTask"), &Z_Registration_Info_UClass_UC_BTAttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_BTAttackTask), 367504625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTAttackTask_h_2226728802(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTAttackTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BTAttackTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
