// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorrorGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HORRORGAME_HorrorGameProjectile_generated_h
#error "HorrorGameProjectile.generated.h already included, missing '#pragma once' in HorrorGameProjectile.h"
#endif
#define HORRORGAME_HorrorGameProjectile_generated_h

#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_SPARSE_DATA
#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_ACCESSORS
#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorrorGameProjectile(); \
	friend struct Z_Construct_UClass_AHorrorGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AHorrorGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HorrorGame"), NO_API) \
	DECLARE_SERIALIZER(AHorrorGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHorrorGameProjectile(AHorrorGameProjectile&&); \
	NO_API AHorrorGameProjectile(const AHorrorGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorrorGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorrorGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHorrorGameProjectile) \
	NO_API virtual ~AHorrorGameProjectile();


#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_12_PROLOG
#define FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_SPARSE_DATA \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_ACCESSORS \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORRORGAME_API UClass* StaticClass<class AHorrorGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_HorrorGame_Source_HorrorGame_HorrorGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
