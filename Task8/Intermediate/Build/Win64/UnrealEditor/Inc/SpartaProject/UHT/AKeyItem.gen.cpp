// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/AKeyItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAKeyItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPARTAPROJECT_API UClass* Z_Construct_UClass_AAKeyItem();
SPARTAPROJECT_API UClass* Z_Construct_UClass_AAKeyItem_NoRegister();
SPARTAPROJECT_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class AAKeyItem
void AAKeyItem::StaticRegisterNativesAAKeyItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAKeyItem);
UClass* Z_Construct_UClass_AAKeyItem_NoRegister()
{
	return AAKeyItem::StaticClass();
}
struct Z_Construct_UClass_AAKeyItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AKeyItem.h" },
		{ "ModuleRelativePath", "Public/AKeyItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAKeyItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAKeyItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAKeyItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAKeyItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UItemInterface_NoRegister, (int32)VTABLE_OFFSET(AAKeyItem, IItemInterface), false },  // 841126785
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAKeyItem_Statics::ClassParams = {
	&AAKeyItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAKeyItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AAKeyItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAKeyItem()
{
	if (!Z_Registration_Info_UClass_AAKeyItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAKeyItem.OuterSingleton, Z_Construct_UClass_AAKeyItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAKeyItem.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<AAKeyItem>()
{
	return AAKeyItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAKeyItem);
AAKeyItem::~AAKeyItem() {}
// End Class AAKeyItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAKeyItem, AAKeyItem::StaticClass, TEXT("AAKeyItem"), &Z_Registration_Info_UClass_AAKeyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAKeyItem), 384308704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_2712751619(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SpartaProject_Source_SpartaProject_Public_AKeyItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
