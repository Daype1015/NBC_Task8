// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AKeyItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPARTAPROJECT_AKeyItem_generated_h
#error "AKeyItem.generated.h already included, missing '#pragma once' in AKeyItem.h"
#endif
#define SPARTAPROJECT_AKeyItem_generated_h

#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAKeyItem(); \
	friend struct Z_Construct_UClass_AAKeyItem_Statics; \
public: \
	DECLARE_CLASS(AAKeyItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpartaProject"), NO_API) \
	DECLARE_SERIALIZER(AAKeyItem) \
	virtual UObject* _getUObject() const override { return const_cast<AAKeyItem*>(this); }


#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAKeyItem(AAKeyItem&&); \
	AAKeyItem(const AAKeyItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAKeyItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAKeyItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAKeyItem) \
	NO_API virtual ~AAKeyItem();


#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_10_PROLOG
#define FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPARTAPROJECT_API UClass* StaticClass<class AAKeyItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
