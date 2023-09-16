// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDavid_Nixon_Learn_init() {}
	DAVID_NIXON_LEARN_API UFunction* Z_Construct_UDelegateFunction_David_Nixon_Learn_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_David_Nixon_Learn;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_David_Nixon_Learn()
	{
		if (!Z_Registration_Info_UPackage__Script_David_Nixon_Learn.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_David_Nixon_Learn_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/David_Nixon_Learn",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2A3DB9C8,
				0xE4A7251E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_David_Nixon_Learn.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_David_Nixon_Learn.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_David_Nixon_Learn(Z_Construct_UPackage__Script_David_Nixon_Learn, TEXT("/Script/David_Nixon_Learn"), Z_Registration_Info_UPackage__Script_David_Nixon_Learn, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2A3DB9C8, 0xE4A7251E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
