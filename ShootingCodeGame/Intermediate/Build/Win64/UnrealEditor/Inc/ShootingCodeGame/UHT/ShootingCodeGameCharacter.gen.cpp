// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/GameMode/ShootingCodeGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCodeGameCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingCodeGameCharacter();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingCodeGameCharacter_NoRegister();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execTestWeaponSetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestWeaponSetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execEquipTestWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_WeaponClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipTestWeapon(Z_Param_WeaponClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execResReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execReqReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReqReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execResTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResTrigger_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execReqTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReqTrigger_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execResPressFClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResPressFClient_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execResPressF)
	{
		P_GET_OBJECT(AActor,Z_Param_PickUpActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResPressF_Implementation(Z_Param_PickUpActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCodeGameCharacter::execReqPressF)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReqPressF_Implementation();
		P_NATIVE_END;
	}
	struct ShootingCodeGameCharacter_eventResPressF_Parms
	{
		AActor* PickUpActor;
	};
	static FName NAME_AShootingCodeGameCharacter_ReqPressF = FName(TEXT("ReqPressF"));
	void AShootingCodeGameCharacter::ReqPressF()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ReqPressF),NULL);
	}
	static FName NAME_AShootingCodeGameCharacter_ReqReload = FName(TEXT("ReqReload"));
	void AShootingCodeGameCharacter::ReqReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ReqReload),NULL);
	}
	static FName NAME_AShootingCodeGameCharacter_ReqTrigger = FName(TEXT("ReqTrigger"));
	void AShootingCodeGameCharacter::ReqTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ReqTrigger),NULL);
	}
	static FName NAME_AShootingCodeGameCharacter_ResPressF = FName(TEXT("ResPressF"));
	void AShootingCodeGameCharacter::ResPressF(AActor* PickUpActor)
	{
		ShootingCodeGameCharacter_eventResPressF_Parms Parms;
		Parms.PickUpActor=PickUpActor;
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ResPressF),&Parms);
	}
	static FName NAME_AShootingCodeGameCharacter_ResPressFClient = FName(TEXT("ResPressFClient"));
	void AShootingCodeGameCharacter::ResPressFClient()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ResPressFClient),NULL);
	}
	static FName NAME_AShootingCodeGameCharacter_ResReload = FName(TEXT("ResReload"));
	void AShootingCodeGameCharacter::ResReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ResReload),NULL);
	}
	static FName NAME_AShootingCodeGameCharacter_ResTrigger = FName(TEXT("ResTrigger"));
	void AShootingCodeGameCharacter::ResTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingCodeGameCharacter_ResTrigger),NULL);
	}
	void AShootingCodeGameCharacter::StaticRegisterNativesAShootingCodeGameCharacter()
	{
		UClass* Class = AShootingCodeGameCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipTestWeapon", &AShootingCodeGameCharacter::execEquipTestWeapon },
			{ "ReqPressF", &AShootingCodeGameCharacter::execReqPressF },
			{ "ReqReload", &AShootingCodeGameCharacter::execReqReload },
			{ "ReqTrigger", &AShootingCodeGameCharacter::execReqTrigger },
			{ "ResPressF", &AShootingCodeGameCharacter::execResPressF },
			{ "ResPressFClient", &AShootingCodeGameCharacter::execResPressFClient },
			{ "ResReload", &AShootingCodeGameCharacter::execResReload },
			{ "ResTrigger", &AShootingCodeGameCharacter::execResTrigger },
			{ "TestWeaponSetOwner", &AShootingCodeGameCharacter::execTestWeaponSetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics
	{
		struct ShootingCodeGameCharacter_eventEquipTestWeapon_Parms
		{
			TSubclassOf<AWeapon>  WeaponClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingCodeGameCharacter_eventEquipTestWeapon_Parms, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::NewProp_WeaponClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "EquipTestWeapon", nullptr, nullptr, Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::ShootingCodeGameCharacter_eventEquipTestWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::ShootingCodeGameCharacter_eventEquipTestWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// Server only\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xda\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n Server only" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ReqPressF", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server only\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server only" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ReqReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server only\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server only" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ReqTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::NewProp_PickUpActor = { "PickUpActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingCodeGameCharacter_eventResPressF_Parms, PickUpActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::NewProp_PickUpActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Custom event\n//Mulicast\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom event\nMulicast" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ResPressF", nullptr, nullptr, Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::PropPointers), sizeof(ShootingCodeGameCharacter_eventResPressF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::PropPointers) < 2048);
	static_assert(sizeof(ShootingCodeGameCharacter_eventResPressF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Client only\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client only" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ResPressFClient", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Custom event\n//Mulicast\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom event\nMulicast" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ResReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Custom event\n//Mulicast\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom event\nMulicast" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "ResTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCodeGameCharacter, nullptr, "TestWeaponSetOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingCodeGameCharacter);
	UClass* Z_Construct_UClass_AShootingCodeGameCharacter_NoRegister()
	{
		return AShootingCodeGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingCodeGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressFAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PressFAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_EquipWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_EquipWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingCodeGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingCodeGameCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_EquipTestWeapon, "EquipTestWeapon" }, // 1169612566
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ReqPressF, "ReqPressF" }, // 555041949
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ReqReload, "ReqReload" }, // 1007805956
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ReqTrigger, "ReqTrigger" }, // 1904212926
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressF, "ResPressF" }, // 484308026
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ResPressFClient, "ResPressFClient" }, // 1587250022
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ResReload, "ResReload" }, // 1840526961
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_ResTrigger, "ResTrigger" }, // 288553325
		{ &Z_Construct_UFunction_AShootingCodeGameCharacter_TestWeaponSetOwner, "TestWeaponSetOwner" }, // 925078729
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameMode/ShootingCodeGameCharacter.h" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_TriggerAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trigger Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_TriggerAction = { "TriggerAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, TriggerAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_TriggerAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_TriggerAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_PressFAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PressF Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PressF Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_PressFAction = { "PressFAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, PressFAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_PressFAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_PressFAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reload Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ControlRot_MetaData[] = {
		{ "Category", "ShootingCodeGameCharacter" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ControlRot = { "ControlRot", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, ControlRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ControlRot_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ControlRot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_m_EquipWeapon_MetaData[] = {
		{ "Category", "ShootingCodeGameCharacter" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingCodeGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_m_EquipWeapon = { "m_EquipWeapon", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingCodeGameCharacter, m_EquipWeapon), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_m_EquipWeapon_MetaData), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_m_EquipWeapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingCodeGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_TriggerAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_PressFAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_ControlRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCodeGameCharacter_Statics::NewProp_m_EquipWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingCodeGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingCodeGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingCodeGameCharacter_Statics::ClassParams = {
		&AShootingCodeGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingCodeGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingCodeGameCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCodeGameCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShootingCodeGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AShootingCodeGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingCodeGameCharacter.OuterSingleton, Z_Construct_UClass_AShootingCodeGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingCodeGameCharacter.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<AShootingCodeGameCharacter>()
	{
		return AShootingCodeGameCharacter::StaticClass();
	}

	void AShootingCodeGameCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ControlRot(TEXT("ControlRot"));
		static const FName Name_m_EquipWeapon(TEXT("m_EquipWeapon"));

		const bool bIsValid = true
			&& Name_ControlRot == ClassReps[(int32)ENetFields_Private::ControlRot].Property->GetFName()
			&& Name_m_EquipWeapon == ClassReps[(int32)ENetFields_Private::m_EquipWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShootingCodeGameCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingCodeGameCharacter);
	AShootingCodeGameCharacter::~AShootingCodeGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingCodeGameCharacter, AShootingCodeGameCharacter::StaticClass, TEXT("AShootingCodeGameCharacter"), &Z_Registration_Info_UClass_AShootingCodeGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingCodeGameCharacter), 2263996252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_1028775025(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_20231221_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
