// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RJ2019/RJ2019HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRJ2019HUD() {}
// Cross Module References
	RJ2019_API UClass* Z_Construct_UClass_ARJ2019HUD_NoRegister();
	RJ2019_API UClass* Z_Construct_UClass_ARJ2019HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RJ2019();
// End Cross Module References
	void ARJ2019HUD::StaticRegisterNativesARJ2019HUD()
	{
	}
	UClass* Z_Construct_UClass_ARJ2019HUD_NoRegister()
	{
		return ARJ2019HUD::StaticClass();
	}
	struct Z_Construct_UClass_ARJ2019HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARJ2019HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RJ2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARJ2019HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RJ2019HUD.h" },
		{ "ModuleRelativePath", "RJ2019HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARJ2019HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARJ2019HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARJ2019HUD_Statics::ClassParams = {
		&ARJ2019HUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARJ2019HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARJ2019HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARJ2019HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARJ2019HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARJ2019HUD, 1041880570);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARJ2019HUD(Z_Construct_UClass_ARJ2019HUD, &ARJ2019HUD::StaticClass, TEXT("/Script/RJ2019"), TEXT("ARJ2019HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARJ2019HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
