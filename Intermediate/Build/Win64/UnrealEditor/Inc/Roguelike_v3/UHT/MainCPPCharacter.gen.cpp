// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roguelike_v3/MainCPPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCPPCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ROGUELIKE_V3_API UClass* Z_Construct_UClass_AMainCPPCharacter();
	ROGUELIKE_V3_API UClass* Z_Construct_UClass_AMainCPPCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Roguelike_v3();
// End Cross Module References
	DEFINE_FUNCTION(AMainCPPCharacter::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_t);
		P_NATIVE_END;
	}
	void AMainCPPCharacter::StaticRegisterNativesAMainCPPCharacter()
	{
		UClass* Class = AMainCPPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHealth", &AMainCPPCharacter::execSetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics
	{
		struct MainCPPCharacter_eventSetHealth_Parms
		{
			float t;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MainCPPCharacter_eventSetHealth_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::NewProp_t,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainCPPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCPPCharacter, nullptr, "SetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::MainCPPCharacter_eventSetHealth_Parms), Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainCPPCharacter_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCPPCharacter_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCPPCharacter);
	UClass* Z_Construct_UClass_AMainCPPCharacter_NoRegister()
	{
		return AMainCPPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCPPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCPPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Roguelike_v3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainCPPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCPPCharacter_SetHealth, "SetHealth" }, // 1511836418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCPPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCPPCharacter.h" },
		{ "ModuleRelativePath", "MainCPPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCPPCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "MainCPPCharacter" },
		{ "ModuleRelativePath", "MainCPPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCPPCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMainCPPCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AMainCPPCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCPPCharacter_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCPPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCPPCharacter_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCPPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCPPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCPPCharacter_Statics::ClassParams = {
		&AMainCPPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainCPPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCPPCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCPPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCPPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCPPCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCPPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCPPCharacter.OuterSingleton, Z_Construct_UClass_AMainCPPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCPPCharacter.OuterSingleton;
	}
	template<> ROGUELIKE_V3_API UClass* StaticClass<AMainCPPCharacter>()
	{
		return AMainCPPCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCPPCharacter);
	AMainCPPCharacter::~AMainCPPCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Roguelike_v3_Source_Roguelike_v3_MainCPPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Roguelike_v3_Source_Roguelike_v3_MainCPPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCPPCharacter, AMainCPPCharacter::StaticClass, TEXT("AMainCPPCharacter"), &Z_Registration_Info_UClass_AMainCPPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCPPCharacter), 3175560191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Roguelike_v3_Source_Roguelike_v3_MainCPPCharacter_h_2299520449(TEXT("/Script/Roguelike_v3"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Roguelike_v3_Source_Roguelike_v3_MainCPPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Roguelike_v3_Source_Roguelike_v3_MainCPPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
