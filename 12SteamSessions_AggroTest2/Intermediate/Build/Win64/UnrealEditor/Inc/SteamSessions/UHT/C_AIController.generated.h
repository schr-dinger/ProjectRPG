// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AC_TopDownCharacter;
#ifdef STEAMSESSIONS_C_AIController_generated_h
#error "C_AIController.generated.h already included, missing '#pragma once' in C_AIController.h"
#endif
#define STEAMSESSIONS_C_AIController_generated_h

#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_SPARSE_DATA
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_RPC_WRAPPERS \
	virtual void OnPerceptionUpdated_Implementation(TArray<AActor*> const& UpdateActors); \
	virtual void UpdateTarget_Implementation(); \
	virtual void ServerIncreaseAggro_Implementation(AC_TopDownCharacter* Player, float Amount); \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execUpdateTarget); \
	DECLARE_FUNCTION(execServerIncreaseAggro); \
	DECLARE_FUNCTION(execGetHighestAggroTarget); \
	DECLARE_FUNCTION(execIncreaseAggro);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPerceptionUpdated_Implementation(TArray<AActor*> const& UpdateActors); \
	virtual void UpdateTarget_Implementation(); \
	virtual void ServerIncreaseAggro_Implementation(AC_TopDownCharacter* Player, float Amount); \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execUpdateTarget); \
	DECLARE_FUNCTION(execServerIncreaseAggro); \
	DECLARE_FUNCTION(execGetHighestAggroTarget); \
	DECLARE_FUNCTION(execIncreaseAggro);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_ACCESSORS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_CALLBACK_WRAPPERS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_AIController(); \
	friend struct Z_Construct_UClass_AC_AIController_Statics; \
public: \
	DECLARE_CLASS(AC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_AIController)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAC_AIController(); \
	friend struct Z_Construct_UClass_AC_AIController_Statics; \
public: \
	DECLARE_CLASS(AC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_AIController)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_AIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_AIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_AIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_AIController(AC_AIController&&); \
	NO_API AC_AIController(const AC_AIController&); \
public: \
	NO_API virtual ~AC_AIController();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_AIController(AC_AIController&&); \
	NO_API AC_AIController(const AC_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_AIController) \
	NO_API virtual ~AC_AIController();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_14_PROLOG
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_RPC_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_INCLASS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSESSIONS_API UClass* StaticClass<class AC_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
