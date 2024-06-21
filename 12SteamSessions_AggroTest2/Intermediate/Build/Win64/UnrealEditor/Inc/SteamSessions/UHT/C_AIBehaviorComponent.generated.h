// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_AIBehaviorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBehaviorType : uint8;
#ifdef STEAMSESSIONS_C_AIBehaviorComponent_generated_h
#error "C_AIBehaviorComponent.generated.h already included, missing '#pragma once' in C_AIBehaviorComponent.h"
#endif
#define STEAMSESSIONS_C_AIBehaviorComponent_generated_h

#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_SPARSE_DATA
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsType);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsType);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_ACCESSORS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_AIBehaviorComponent(); \
	friend struct Z_Construct_UClass_UC_AIBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UC_AIBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UC_AIBehaviorComponent)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUC_AIBehaviorComponent(); \
	friend struct Z_Construct_UClass_UC_AIBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UC_AIBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UC_AIBehaviorComponent)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_AIBehaviorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_AIBehaviorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AIBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AIBehaviorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AIBehaviorComponent(UC_AIBehaviorComponent&&); \
	NO_API UC_AIBehaviorComponent(const UC_AIBehaviorComponent&); \
public: \
	NO_API virtual ~UC_AIBehaviorComponent();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AIBehaviorComponent(UC_AIBehaviorComponent&&); \
	NO_API UC_AIBehaviorComponent(const UC_AIBehaviorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AIBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AIBehaviorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UC_AIBehaviorComponent) \
	NO_API virtual ~UC_AIBehaviorComponent();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_24_PROLOG
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_RPC_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_INCLASS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSESSIONS_API UClass* StaticClass<class UC_AIBehaviorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIBehaviorComponent_h


#define FOREACH_ENUM_EBEHAVIORTYPE(op) \
	op(EBehaviorType::Wait) \
	op(EBehaviorType::Patrol) \
	op(EBehaviorType::Trace) \
	op(EBehaviorType::Attack) \
	op(EBehaviorType::Hit) \
	op(EBehaviorType::Death) 

enum class EBehaviorType : uint8;
template<> struct TIsUEnumClass<EBehaviorType> { enum { Value = true }; };
template<> STEAMSESSIONS_API UEnum* StaticEnum<EBehaviorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
