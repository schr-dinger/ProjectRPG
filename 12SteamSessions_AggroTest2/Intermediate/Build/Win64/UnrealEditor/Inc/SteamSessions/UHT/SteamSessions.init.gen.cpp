// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamSessions_init() {}
	STEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamSessions.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamSessions",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3BFBEF30,
				0xBD6E7F22,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamSessions.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamSessions.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamSessions(Z_Construct_UPackage__Script_SteamSessions, TEXT("/Script/SteamSessions"), Z_Registration_Info_UPackage__Script_SteamSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3BFBEF30, 0xBD6E7F22));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
