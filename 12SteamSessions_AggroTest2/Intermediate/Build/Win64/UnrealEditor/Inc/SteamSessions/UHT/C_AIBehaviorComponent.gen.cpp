// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/C_AIBehaviorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_AIBehaviorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_AIBehaviorComponent();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UC_AIBehaviorComponent_NoRegister();
	STEAMSESSIONS_API UEnum* Z_Construct_UEnum_SteamSessions_EBehaviorType();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviorType;
	static UEnum* EBehaviorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamSessions_EBehaviorType, Z_Construct_UPackage__Script_SteamSessions(), TEXT("EBehaviorType"));
		}
		return Z_Registration_Info_UEnum_EBehaviorType.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UEnum* StaticEnum<EBehaviorType>()
	{
		return EBehaviorType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enumerators[] = {
		{ "EBehaviorType::Wait", (int64)EBehaviorType::Wait },
		{ "EBehaviorType::Patrol", (int64)EBehaviorType::Patrol },
		{ "EBehaviorType::Trace", (int64)EBehaviorType::Trace },
		{ "EBehaviorType::Attack", (int64)EBehaviorType::Attack },
		{ "EBehaviorType::Hit", (int64)EBehaviorType::Hit },
		{ "EBehaviorType::Death", (int64)EBehaviorType::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EBehaviorType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EBehaviorType::Death" },
		{ "Hit.Name", "EBehaviorType::Hit" },
		{ "ModuleRelativePath", "C_AIBehaviorComponent.h" },
		{ "Patrol.Name", "EBehaviorType::Patrol" },
		{ "Trace.Name", "EBehaviorType::Trace" },
		{ "Wait.Name", "EBehaviorType::Wait" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamSessions,
		nullptr,
		"EBehaviorType",
		"EBehaviorType",
		Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamSessions_EBehaviorType()
	{
		if (!Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton, Z_Construct_UEnum_SteamSessions_EBehaviorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBehaviorType.InnerSingleton;
	}
	DEFINE_FUNCTION(UC_AIBehaviorComponent::execIsType)
	{
		P_GET_ENUM(EBehaviorType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsType(EBehaviorType(Z_Param_InType));
		P_NATIVE_END;
	}
	void UC_AIBehaviorComponent::StaticRegisterNativesUC_AIBehaviorComponent()
	{
		UClass* Class = UC_AIBehaviorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsType", &UC_AIBehaviorComponent::execIsType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics
	{
		struct C_AIBehaviorComponent_eventIsType_Parms
		{
			EBehaviorType InType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(C_AIBehaviorComponent_eventIsType_Parms, InType), Z_Construct_UEnum_SteamSessions_EBehaviorType, METADATA_PARAMS(nullptr, 0) }; // 3142213261
	void Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((C_AIBehaviorComponent_eventIsType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(C_AIBehaviorComponent_eventIsType_Parms), &Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_AIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_AIBehaviorComponent, nullptr, "IsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::C_AIBehaviorComponent_eventIsType_Parms), Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UC_AIBehaviorComponent_IsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_AIBehaviorComponent_IsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_AIBehaviorComponent);
	UClass* Z_Construct_UClass_UC_AIBehaviorComponent_NoRegister()
	{
		return UC_AIBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UC_AIBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_AIBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UC_AIBehaviorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_AIBehaviorComponent_IsType, "IsType" }, // 677228823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AIBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "C_AIBehaviorComponent.h" },
		{ "ModuleRelativePath", "C_AIBehaviorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData[] = {
		{ "Category", "C_AIBehaviorComponent" },
		{ "ModuleRelativePath", "C_AIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_BehaviorKey = { "BehaviorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UC_AIBehaviorComponent, BehaviorKey), METADATA_PARAMS(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "C_AIBehaviorComponent" },
		{ "ModuleRelativePath", "C_AIBehaviorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UC_AIBehaviorComponent, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_PlayerKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_AIBehaviorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_BehaviorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AIBehaviorComponent_Statics::NewProp_PlayerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_AIBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_AIBehaviorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_AIBehaviorComponent_Statics::ClassParams = {
		&UC_AIBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UC_AIBehaviorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AIBehaviorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_AIBehaviorComponent()
	{
		if (!Z_Registration_Info_UClass_UC_AIBehaviorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_AIBehaviorComponent.OuterSingleton, Z_Construct_UClass_UC_AIBehaviorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UC_AIBehaviorComponent.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UC_AIBehaviorComponent>()
	{
		return UC_AIBehaviorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_AIBehaviorComponent);
	UC_AIBehaviorComponent::~UC_AIBehaviorComponent() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::EnumInfo[] = {
		{ EBehaviorType_StaticEnum, TEXT("EBehaviorType"), &Z_Registration_Info_UEnum_EBehaviorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142213261U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UC_AIBehaviorComponent, UC_AIBehaviorComponent::StaticClass, TEXT("UC_AIBehaviorComponent"), &Z_Registration_Info_UClass_UC_AIBehaviorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_AIBehaviorComponent), 3514835436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_724167360(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
