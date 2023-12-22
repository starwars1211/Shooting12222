// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/Blueprints/MyBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AMyBall();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AMyBall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	void AMyBall::StaticRegisterNativesAMyBall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyBall);
	UClass* Z_Construct_UClass_AMyBall_NoRegister()
	{
		return AMyBall::StaticClass();
	}
	struct Z_Construct_UClass_AMyBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBall_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/MyBall.h" },
		{ "ModuleRelativePath", "Public/Blueprints/MyBall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyBall_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MyBall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/MyBall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBall_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBall, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBall_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AMyBall_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBall_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBall_Statics::ClassParams = {
		&AMyBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBall_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBall_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBall_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyBall()
	{
		if (!Z_Registration_Info_UClass_AMyBall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBall.OuterSingleton, Z_Construct_UClass_AMyBall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyBall.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<AMyBall>()
	{
		return AMyBall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBall);
	AMyBall::~AMyBall() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_Blueprints_MyBall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_Blueprints_MyBall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyBall, AMyBall::StaticClass, TEXT("AMyBall"), &Z_Registration_Info_UClass_AMyBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBall), 144842478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_Blueprints_MyBall_h_1509013724(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_Blueprints_MyBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_Blueprints_MyBall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
