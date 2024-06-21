// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_BasicMonster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef STEAMSESSIONS_C_BasicMonster_generated_h
#error "C_BasicMonster.generated.h already included, missing '#pragma once' in C_BasicMonster.h"
#endif
#define STEAMSESSIONS_C_BasicMonster_generated_h

#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_SPARSE_DATA
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_RPC_WRAPPERS \
	virtual void MulRPCAttack_Implementation(UAnimMontage* attack); \
	virtual void SerAttack_Implementation(UAnimMontage* attack); \
	virtual void UpdateHpPercent_Implementation(float curHp, float maxHp); \
	virtual void SerTakeDamage_Implementation(float damageamount); \
	virtual void SetMonsterName_Implementation(const FString& name); \
	virtual void ResetMul_Implementation(); \
	virtual void ResetSer_Implementation(); \
 \
	DECLARE_FUNCTION(execMulRPCAttack); \
	DECLARE_FUNCTION(execSerAttack); \
	DECLARE_FUNCTION(execUpdateHpPercent); \
	DECLARE_FUNCTION(execSerTakeDamage); \
	DECLARE_FUNCTION(execSetMonsterName); \
	DECLARE_FUNCTION(execResetMul); \
	DECLARE_FUNCTION(execResetSer);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulRPCAttack_Implementation(UAnimMontage* attack); \
	virtual void SerAttack_Implementation(UAnimMontage* attack); \
	virtual void UpdateHpPercent_Implementation(float curHp, float maxHp); \
	virtual void SerTakeDamage_Implementation(float damageamount); \
	virtual void SetMonsterName_Implementation(const FString& name); \
	virtual void ResetMul_Implementation(); \
	virtual void ResetSer_Implementation(); \
 \
	DECLARE_FUNCTION(execMulRPCAttack); \
	DECLARE_FUNCTION(execSerAttack); \
	DECLARE_FUNCTION(execUpdateHpPercent); \
	DECLARE_FUNCTION(execSerTakeDamage); \
	DECLARE_FUNCTION(execSetMonsterName); \
	DECLARE_FUNCTION(execResetMul); \
	DECLARE_FUNCTION(execResetSer);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_ACCESSORS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_CALLBACK_WRAPPERS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_BasicMonster(); \
	friend struct Z_Construct_UClass_AC_BasicMonster_Statics; \
public: \
	DECLARE_CLASS(AC_BasicMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_BasicMonster)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAC_BasicMonster(); \
	friend struct Z_Construct_UClass_AC_BasicMonster_Statics; \
public: \
	DECLARE_CLASS(AC_BasicMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_BasicMonster)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_BasicMonster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_BasicMonster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_BasicMonster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_BasicMonster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_BasicMonster(AC_BasicMonster&&); \
	NO_API AC_BasicMonster(const AC_BasicMonster&); \
public: \
	NO_API virtual ~AC_BasicMonster();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_BasicMonster(AC_BasicMonster&&); \
	NO_API AC_BasicMonster(const AC_BasicMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_BasicMonster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_BasicMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_BasicMonster) \
	NO_API virtual ~AC_BasicMonster();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_10_PROLOG
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_RPC_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_INCLASS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_INCLASS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSESSIONS_API UClass* StaticClass<class AC_BasicMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_BasicMonster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
