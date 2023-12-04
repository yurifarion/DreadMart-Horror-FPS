// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorGame/HorrorGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorrorGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HORRORGAME_API UClass* Z_Construct_UClass_AHorrorGameGameMode();
	HORRORGAME_API UClass* Z_Construct_UClass_AHorrorGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HorrorGame();
// End Cross Module References
	void AHorrorGameGameMode::StaticRegisterNativesAHorrorGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHorrorGameGameMode);
	UClass* Z_Construct_UClass_AHorrorGameGameMode_NoRegister()
	{
		return AHorrorGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHorrorGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorrorGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HorrorGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorrorGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HorrorGameGameMode.h" },
		{ "ModuleRelativePath", "HorrorGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorrorGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorGameGameMode_Statics::ClassParams = {
		&AHorrorGameGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHorrorGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AHorrorGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorGameGameMode.OuterSingleton, Z_Construct_UClass_AHorrorGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHorrorGameGameMode.OuterSingleton;
	}
	template<> HORRORGAME_API UClass* StaticClass<AHorrorGameGameMode>()
	{
		return AHorrorGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorGameGameMode);
	AHorrorGameGameMode::~AHorrorGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorGameGameMode, AHorrorGameGameMode::StaticClass, TEXT("AHorrorGameGameMode"), &Z_Registration_Info_UClass_AHorrorGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorGameGameMode), 1636716202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameGameMode_h_2204444131(TEXT("/Script/HorrorGame"),
		Z_CompiledInDeferFile_FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
