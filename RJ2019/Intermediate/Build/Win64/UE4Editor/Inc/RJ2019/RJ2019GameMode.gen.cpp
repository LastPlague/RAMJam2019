// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RJ2019/RJ2019GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRJ2019GameMode() {}
// Cross Module References
	RJ2019_API UClass* Z_Construct_UClass_ARJ2019GameMode_NoRegister();
	RJ2019_API UClass* Z_Construct_UClass_ARJ2019GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RJ2019();
// End Cross Module References
	void ARJ2019GameMode::StaticRegisterNativesARJ2019GameMode()
	{
	}
	UClass* Z_Construct_UClass_ARJ2019GameMode_NoRegister()
	{
		return ARJ2019GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARJ2019GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARJ2019GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARJ2019GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RJ2019GameMode.h" },
		{ "ModuleRelativePath", "RJ2019GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARJ2019GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARJ2019GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARJ2019GameMode_Statics::ClassParams = {
		&ARJ2019GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARJ2019GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARJ2019GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARJ2019GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARJ2019GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARJ2019GameMode, 856706733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARJ2019GameMode(Z_Construct_UClass_ARJ2019GameMode, &ARJ2019GameMode::StaticClass, TEXT("/Script/RJ2019"), TEXT("ARJ2019GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARJ2019GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif