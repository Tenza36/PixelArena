// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Act3_PixelArena/Public/PixelHero.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelHero() {}
// Cross Module References
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_APixelHero();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_APixelHero_NoRegister();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_APixelProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Act3_PixelArena();
// End Cross Module References
	DEFINE_FUNCTION(APixelHero::execMulticast_FireEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APixelHero::execServer_Fire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Fire_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
			return;
		}
		P_THIS->Server_Fire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APixelHero::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth();
		P_NATIVE_END;
	}
	static FName NAME_APixelHero_Multicast_FireEffects = FName(TEXT("Multicast_FireEffects"));
	void APixelHero::Multicast_FireEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_APixelHero_Multicast_FireEffects),NULL);
	}
	static FName NAME_APixelHero_Server_Fire = FName(TEXT("Server_Fire"));
	void APixelHero::Server_Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_APixelHero_Server_Fire),NULL);
	}
	void APixelHero::StaticRegisterNativesAPixelHero()
	{
		UClass* Class = APixelHero::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_FireEffects", &APixelHero::execMulticast_FireEffects },
			{ "OnRep_CurrentHealth", &APixelHero::execOnRep_CurrentHealth },
			{ "Server_Fire", &APixelHero::execServer_Fire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPC para replicar efectos visuales y de sonido en todos los clientes. */" },
#endif
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC para replicar efectos visuales y de sonido en todos los clientes." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APixelHero, nullptr, "Multicast_FireEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APixelHero_Multicast_FireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APixelHero_Multicast_FireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Funci\xef\xbf\xbdn de notificaci\xef\xbf\xbdn que se ejecuta en el cliente cuando cambia la salud. */" },
#endif
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn de notificaci\xef\xbf\xbdn que se ejecuta en el cliente cuando cambia la salud." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APixelHero, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APixelHero_Server_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelHero_Server_Fire_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPC para ejecutar el spawn del proyectil en el servidor. */" },
#endif
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC para ejecutar el spawn del proyectil en el servidor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APixelHero_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APixelHero, nullptr, "Server_Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelHero_Server_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APixelHero_Server_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APixelHero_Server_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APixelHero_Server_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APixelHero);
	UClass* Z_Construct_UClass_APixelHero_NoRegister()
	{
		return APixelHero::StaticClass();
	}
	struct Z_Construct_UClass_APixelHero_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APixelHero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Act3_PixelArena,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APixelHero_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APixelHero_Multicast_FireEffects, "Multicast_FireEffects" }, // 3413394574
		{ &Z_Construct_UFunction_APixelHero_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2615324577
		{ &Z_Construct_UFunction_APixelHero_Server_Fire, "Server_Fire" }, // 4031153958
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelHero_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Clase principal del h\xef\xbf\xbdroe para PixelArena.\n * Gestiona la c\xef\xbf\xbdmara top-down, la salud replicada y el sistema de combate por proyectiles.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PixelHero.h" },
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase principal del h\xef\xbf\xbdroe para PixelArena.\nGestiona la c\xef\xbf\xbdmara top-down, la salud replicada y el sistema de combate por proyectiles." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelHero_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brazo que sostiene la c\xef\xbf\xbdmara a una distancia fija. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brazo que sostiene la c\xef\xbf\xbdmara a una distancia fija." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APixelHero_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelHero, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_APixelHero_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelHero_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** C\xef\xbf\xbdmara que sigue al personaje desde una perspectiva top-down. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C\xef\xbf\xbdmara que sigue al personaje desde una perspectiva top-down." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APixelHero_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelHero, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_APixelHero_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelHero_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Salud actual del personaje, replicada desde el servidor. */" },
#endif
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Salud actual del personaje, replicada desde el servidor." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APixelHero_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelHero, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_APixelHero_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelHero_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clase del proyectil que se va a spawnear. Se debe asignar en el Blueprint. */" },
#endif
		{ "ModuleRelativePath", "Public/PixelHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase del proyectil que se va a spawnear. Se debe asignar en el Blueprint." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APixelHero_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelHero, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APixelProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_APixelHero_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APixelHero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelHero_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelHero_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelHero_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelHero_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APixelHero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APixelHero>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APixelHero_Statics::ClassParams = {
		&APixelHero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APixelHero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::Class_MetaDataParams), Z_Construct_UClass_APixelHero_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelHero_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APixelHero()
	{
		if (!Z_Registration_Info_UClass_APixelHero.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APixelHero.OuterSingleton, Z_Construct_UClass_APixelHero_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APixelHero.OuterSingleton;
	}
	template<> ACT3_PIXELARENA_API UClass* StaticClass<APixelHero>()
	{
		return APixelHero::StaticClass();
	}

	void APixelHero::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));

		const bool bIsValid = true
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APixelHero"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APixelHero);
	APixelHero::~APixelHero() {}
	struct Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APixelHero, APixelHero::StaticClass, TEXT("APixelHero"), &Z_Registration_Info_UClass_APixelHero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APixelHero), 137534522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_111299002(TEXT("/Script/Act3_PixelArena"),
		Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
