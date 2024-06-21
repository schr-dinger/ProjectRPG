// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_TopDownCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef STEAMSESSIONS_C_TopDownCharacter_generated_h
#error "C_TopDownCharacter.generated.h already included, missing '#pragma once' in C_TopDownCharacter.h"
#endif
#define STEAMSESSIONS_C_TopDownCharacter_generated_h

#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_SPARSE_DATA
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_RPC_WRAPPERS \
	virtual void MulRPCAttack_Implementation(UAnimMontage* AttackMon); \
	virtual void SerRPCAttack_Implementation(UAnimMontage* AttackMon); \
	virtual void UpdateHpPercent_Implementation(float curHp, float maxHp); \
	virtual void TakeDamage_Implementation(float damageamount); \
	virtual void SetCharacterName_Implementation(const FString& name); \
	virtual bool MulRPCRoll_Validate(); \
	virtual void MulRPCRoll_Implementation(); \
	virtual bool SerRPCRoll_Validate(); \
	virtual void SerRPCRoll_Implementation(); \
 \
	DECLARE_FUNCTION(execMulRPCAttack); \
	DECLARE_FUNCTION(execSerRPCAttack); \
	DECLARE_FUNCTION(execUpdateHpPercent); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCharacterName); \
	DECLARE_FUNCTION(execMulRPCRoll); \
	DECLARE_FUNCTION(execSerRPCRoll);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulRPCAttack_Implementation(UAnimMontage* AttackMon); \
	virtual void SerRPCAttack_Implementation(UAnimMontage* AttackMon); \
	virtual void UpdateHpPercent_Implementation(float curHp, float maxHp); \
	virtual void TakeDamage_Implementation(float damageamount); \
	virtual void SetCharacterName_Implementation(const FString& name); \
	virtual bool MulRPCRoll_Validate(); \
	virtual void MulRPCRoll_Implementation(); \
	virtual bool SerRPCRoll_Validate(); \
	virtual void SerRPCRoll_Implementation(); \
 \
	DECLARE_FUNCTION(execMulRPCAttack); \
	DECLARE_FUNCTION(execSerRPCAttack); \
	DECLARE_FUNCTION(execUpdateHpPercent); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCharacterName); \
	DECLARE_FUNCTION(execMulRPCRoll); \
	DECLARE_FUNCTION(execSerRPCRoll);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_ACCESSORS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_CALLBACK_WRAPPERS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_TopDownCharacter(); \
	friend struct Z_Construct_UClass_AC_TopDownCharacter_Statics; \
public: \
	DECLARE_CLASS(AC_TopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_TopDownCharacter)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAC_TopDownCharacter(); \
	friend struct Z_Construct_UClass_AC_TopDownCharacter_Statics; \
public: \
	DECLARE_CLASS(AC_TopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(AC_TopDownCharacter)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC_TopDownCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC_TopDownCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_TopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_TopDownCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_TopDownCharacter(AC_TopDownCharacter&&); \
	NO_API AC_TopDownCharacter(const AC_TopDownCharacter&); \
public: \
	NO_API virtual ~AC_TopDownCharacter();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC_TopDownCharacter(AC_TopDownCharacter&&); \
	NO_API AC_TopDownCharacter(const AC_TopDownCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_TopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_TopDownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_TopDownCharacter) \
	NO_API virtual ~AC_TopDownCharacter();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_10_PROLOG
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_RPC_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_INCLASS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_CALLBACK_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSESSIONS_API UClass* StaticClass<class AC_TopDownCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_12SteamSessions_AggroTest2_Source_SteamSessions_C_TopDownCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
