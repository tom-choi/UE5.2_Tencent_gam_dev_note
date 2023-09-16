// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "David_Nixon_Learn/David_Nixon_LearnGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDavid_Nixon_LearnGameMode() {}
// Cross Module References
	DAVID_NIXON_LEARN_API UClass* Z_Construct_UClass_ADavid_Nixon_LearnGameMode();
	DAVID_NIXON_LEARN_API UClass* Z_Construct_UClass_ADavid_Nixon_LearnGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_David_Nixon_Learn();
// End Cross Module References
	void ADavid_Nixon_LearnGameMode::StaticRegisterNativesADavid_Nixon_LearnGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADavid_Nixon_LearnGameMode);
	UClass* Z_Construct_UClass_ADavid_Nixon_LearnGameMode_NoRegister()
	{
		return ADavid_Nixon_LearnGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_David_Nixon_Learn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "David_Nixon_LearnGameMode.h" },
		{ "ModuleRelativePath", "David_Nixon_LearnGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADavid_Nixon_LearnGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::ClassParams = {
		&ADavid_Nixon_LearnGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADavid_Nixon_LearnGameMode()
	{
		if (!Z_Registration_Info_UClass_ADavid_Nixon_LearnGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADavid_Nixon_LearnGameMode.OuterSingleton, Z_Construct_UClass_ADavid_Nixon_LearnGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADavid_Nixon_LearnGameMode.OuterSingleton;
	}
	template<> DAVID_NIXON_LEARN_API UClass* StaticClass<ADavid_Nixon_LearnGameMode>()
	{
		return ADavid_Nixon_LearnGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADavid_Nixon_LearnGameMode);
	ADavid_Nixon_LearnGameMode::~ADavid_Nixon_LearnGameMode() {}
	struct Z_CompiledInDeferFile_FID_UE5_2_Tencent_gam_dev_note_Projects_David_Nixon_Learn_Source_David_Nixon_Learn_David_Nixon_LearnGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2_Tencent_gam_dev_note_Projects_David_Nixon_Learn_Source_David_Nixon_Learn_David_Nixon_LearnGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADavid_Nixon_LearnGameMode, ADavid_Nixon_LearnGameMode::StaticClass, TEXT("ADavid_Nixon_LearnGameMode"), &Z_Registration_Info_UClass_ADavid_Nixon_LearnGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADavid_Nixon_LearnGameMode), 156406339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2_Tencent_gam_dev_note_Projects_David_Nixon_Learn_Source_David_Nixon_Learn_David_Nixon_LearnGameMode_h_1646617672(TEXT("/Script/David_Nixon_Learn"),
		Z_CompiledInDeferFile_FID_UE5_2_Tencent_gam_dev_note_Projects_David_Nixon_Learn_Source_David_Nixon_Learn_David_Nixon_LearnGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2_Tencent_gam_dev_note_Projects_David_Nixon_Learn_Source_David_Nixon_Learn_David_Nixon_LearnGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
