// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAPROJECT_SpartaPawn_generated_h
#error "SpartaPawn.generated.h already included, missing '#pragma once' in SpartaPawn.h"
#endif
#define SPARTAPROJECT_SpartaPawn_generated_h

#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpartaPawn(); \
	friend struct Z_Construct_UClass_ASpartaPawn_Statics; \
public: \
	DECLARE_CLASS(ASpartaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaProject"), NO_API) \
	DECLARE_SERIALIZER(ASpartaPawn)


#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpartaPawn(ASpartaPawn&&); \
	ASpartaPawn(const ASpartaPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpartaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpartaPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpartaPawn) \
	NO_API virtual ~ASpartaPawn();


#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_15_PROLOG
#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAPROJECT_API UClass* StaticClass<class ASpartaPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
