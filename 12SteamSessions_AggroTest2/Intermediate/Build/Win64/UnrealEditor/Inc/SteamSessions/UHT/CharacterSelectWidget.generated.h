// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterSelectWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMSESSIONS_CharacterSelectWidget_generated_h
#error "CharacterSelectWidget.generated.h already included, missing '#pragma once' in CharacterSelectWidget.h"
#endif
#define STEAMSESSIONS_CharacterSelectWidget_generated_h

#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_10_DELEGATE \
struct _Script_SteamSessions_eventTextChangeDelegate_Parms \
{ \
	FText NewText; \
}; \
static inline void FTextChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& TextChangeDelegate, FText const& NewText) \
{ \
	_Script_SteamSessions_eventTextChangeDelegate_Parms Parms; \
	Parms.NewText=NewText; \
	TextChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_SPARSE_DATA
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChangeName); \
	DECLARE_FUNCTION(execGetChosenInt); \
	DECLARE_FUNCTION(execConfirmed); \
	DECLARE_FUNCTION(execChooseHeal); \
	DECLARE_FUNCTION(execChooseDPS); \
	DECLARE_FUNCTION(execChooseTank);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChangeName); \
	DECLARE_FUNCTION(execGetChosenInt); \
	DECLARE_FUNCTION(execConfirmed); \
	DECLARE_FUNCTION(execChooseHeal); \
	DECLARE_FUNCTION(execChooseDPS); \
	DECLARE_FUNCTION(execChooseTank);


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_ACCESSORS
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UCharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSelectWidget)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UCharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamSessions"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSelectWidget)


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSelectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSelectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSelectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSelectWidget(UCharacterSelectWidget&&); \
	NO_API UCharacterSelectWidget(const UCharacterSelectWidget&); \
public: \
	NO_API virtual ~UCharacterSelectWidget();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSelectWidget(UCharacterSelectWidget&&); \
	NO_API UCharacterSelectWidget(const UCharacterSelectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSelectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSelectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSelectWidget) \
	NO_API virtual ~UCharacterSelectWidget();


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_14_PROLOG
#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_RPC_WRAPPERS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_INCLASS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_SPARSE_DATA \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_ACCESSORS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSESSIONS_API UClass* StaticClass<class UCharacterSelectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
