// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamSessions/CharacterSelectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelectWidget() {}
// Cross Module References
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCharacterSelectWidget();
	STEAMSESSIONS_API UClass* Z_Construct_UClass_UCharacterSelectWidget_NoRegister();
	STEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SteamSessions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamSessions_eventTextChangeDelegate_Parms
		{
			FText NewText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SteamSessions_eventTextChangeDelegate_Parms, NewText), METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamSessions, nullptr, "TextChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::_Script_SteamSessions_eventTextChangeDelegate_Parms), Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execOnChangeName)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeName(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execGetChosenInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChosenInt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execConfirmed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Confirmed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execChooseHeal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseHeal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execChooseDPS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseDPS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectWidget::execChooseTank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseTank();
		P_NATIVE_END;
	}
	void UCharacterSelectWidget::StaticRegisterNativesUCharacterSelectWidget()
	{
		UClass* Class = UCharacterSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChooseDPS", &UCharacterSelectWidget::execChooseDPS },
			{ "ChooseHeal", &UCharacterSelectWidget::execChooseHeal },
			{ "ChooseTank", &UCharacterSelectWidget::execChooseTank },
			{ "Confirmed", &UCharacterSelectWidget::execConfirmed },
			{ "GetChosenInt", &UCharacterSelectWidget::execGetChosenInt },
			{ "OnChangeName", &UCharacterSelectWidget::execOnChangeName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "ChooseDPS", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "ChooseHeal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "ChooseTank", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "Confirmed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_Confirmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_Confirmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics
	{
		struct CharacterSelectWidget_eventGetChosenInt_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterSelectWidget_eventGetChosenInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "GetChosenInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::CharacterSelectWidget_eventGetChosenInt_Parms), Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics
	{
		struct CharacterSelectWidget_eventOnChangeName_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterSelectWidget_eventOnChangeName_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectWidget, nullptr, "OnChangeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::CharacterSelectWidget_eventOnChangeName_Parms), Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterSelectWidget);
	UClass* Z_Construct_UClass_UCharacterSelectWidget_NoRegister()
	{
		return UCharacterSelectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterSelectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bdps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bdps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bheal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bheal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenClass_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ChosenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bconfirm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bconfirm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enamebox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enamebox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChosenName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterSelectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterSelectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSelectWidget_ChooseDPS, "ChooseDPS" }, // 212181480
		{ &Z_Construct_UFunction_UCharacterSelectWidget_ChooseHeal, "ChooseHeal" }, // 198474856
		{ &Z_Construct_UFunction_UCharacterSelectWidget_ChooseTank, "ChooseTank" }, // 1892256050
		{ &Z_Construct_UFunction_UCharacterSelectWidget_Confirmed, "Confirmed" }, // 569199155
		{ &Z_Construct_UFunction_UCharacterSelectWidget_GetChosenInt, "GetChosenInt" }, // 2710358411
		{ &Z_Construct_UFunction_UCharacterSelectWidget_OnChangeName, "OnChangeName" }, // 1279276560
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CharacterSelectWidget.h" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_btank_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_btank = { "btank", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, btank), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_btank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_btank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bdps_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bdps = { "bdps", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, bdps), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bdps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bdps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bheal_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bheal = { "bheal", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, bheal), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bheal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bheal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenClass_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenClass = { "ChosenClass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, ChosenClass), METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bconfirm_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bconfirm = { "bconfirm", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, bconfirm), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bconfirm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bconfirm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_enamebox_MetaData[] = {
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_enamebox = { "enamebox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, enamebox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_enamebox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_enamebox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_OnTextChanged_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_OnTextChanged = { "OnTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, OnTextChanged), Z_Construct_UDelegateFunction_SteamSessions_TextChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_OnTextChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_OnTextChanged_MetaData)) }; // 1318760092
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenName_MetaData[] = {
		{ "Category", "CharacterSelectWidget" },
		{ "ModuleRelativePath", "CharacterSelectWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenName = { "ChosenName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterSelectWidget, ChosenName), METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSelectWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_btank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bdps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bheal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_bconfirm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_enamebox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_OnTextChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectWidget_Statics::NewProp_ChosenName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterSelectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSelectWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSelectWidget_Statics::ClassParams = {
		&UCharacterSelectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterSelectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterSelectWidget()
	{
		if (!Z_Registration_Info_UClass_UCharacterSelectWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSelectWidget.OuterSingleton, Z_Construct_UClass_UCharacterSelectWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterSelectWidget.OuterSingleton;
	}
	template<> STEAMSESSIONS_API UClass* StaticClass<UCharacterSelectWidget>()
	{
		return UCharacterSelectWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSelectWidget);
	UCharacterSelectWidget::~UCharacterSelectWidget() {}
	struct Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSelectWidget, UCharacterSelectWidget::StaticClass, TEXT("UCharacterSelectWidget"), &Z_Registration_Info_UClass_UCharacterSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSelectWidget), 825259927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_3787601211(TEXT("/Script/SteamSessions"),
		Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_12SteamSessions_AggroTest2_Source_SteamSessions_CharacterSelectWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
