// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Act3_PixelArena/Public/PixelProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelProjectile() {}
// Cross Module References
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_APixelProjectile();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_APixelProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Act3_PixelArena();
// End Cross Module References
	DEFINE_FUNCTION(APixelProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APixelProjectile::StaticRegisterNativesAPixelProjectile()
	{
		UClass* Class = APixelProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &APixelProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APixelProjectile_OnHit_Statics
	{
		struct PixelProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APixelProjectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APixelProjectile_OnHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * Funci\xef\xbf\xbdn llamada autom\xef\xbf\xbdticamente por el motor cuando el proyectil choca con algo.\n     * Debe estar marcada como UFUNCTION para que el sistema de delegados la reconozca.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn llamada autom\xef\xbf\xbdticamente por el motor cuando el proyectil choca con algo.\nDebe estar marcada como UFUNCTION para que el sistema de delegados la reconozca." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APixelProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APixelProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PixelProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APixelProjectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APixelProjectile_OnHit_Statics::PixelProjectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APixelProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APixelProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APixelProjectile);
	UClass* Z_Construct_UClass_APixelProjectile_NoRegister()
	{
		return APixelProjectile::StaticClass();
	}
	struct Z_Construct_UClass_APixelProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APixelProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Act3_PixelArena,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APixelProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APixelProjectile_OnHit, "OnHit" }, // 3624314515
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelProjectile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Clase que define la l\xef\xbf\xbdgica f\xef\xbf\xbdsica y visual de los proyectiles en PixelArena.\n * Implementa colisiones, movimiento f\xef\xbf\xbdsico y aplicaci\xef\xbf\xbdn de da\xef\xbf\xbdo en red.\n */" },
#endif
		{ "IncludePath", "PixelProjectile.h" },
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase que define la l\xef\xbf\xbdgica f\xef\xbf\xbdsica y visual de los proyectiles en PixelArena.\nImplementa colisiones, movimiento f\xef\xbf\xbdsico y aplicaci\xef\xbf\xbdn de da\xef\xbf\xbdo en red." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Componente de colisi\xef\xbf\xbdn principal (Ra\xef\xbf\xbdz del objeto) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente de colisi\xef\xbf\xbdn principal (Ra\xef\xbf\xbdz del objeto)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APixelProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::NewProp_CollisionComp_MetaData), Z_Construct_UClass_APixelProjectile_Statics::NewProp_CollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Componente que gestiona la f\xef\xbf\xbdsica del proyectil (velocidad, rebote, gravedad) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente que gestiona la f\xef\xbf\xbdsica del proyectil (velocidad, rebote, gravedad)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APixelProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_APixelProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelProjectile_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Representaci\xef\xbf\xbdn visual del proyectil */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Representaci\xef\xbf\xbdn visual del proyectil" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APixelProjectile_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelProjectile, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_APixelProjectile_Statics::NewProp_MeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APixelProjectile_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cantidad de da\xef\xbf\xbdo que se restar\xef\xbf\xbd de la salud del objetivo al impactar */" },
#endif
		{ "ModuleRelativePath", "Public/PixelProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cantidad de da\xef\xbf\xbdo que se restar\xef\xbf\xbd de la salud del objetivo al impactar" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APixelProjectile_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APixelProjectile, DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::NewProp_DamageValue_MetaData), Z_Construct_UClass_APixelProjectile_Statics::NewProp_DamageValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APixelProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelProjectile_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelProjectile_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelProjectile_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APixelProjectile_Statics::NewProp_DamageValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APixelProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APixelProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APixelProjectile_Statics::ClassParams = {
		&APixelProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APixelProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_APixelProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APixelProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APixelProjectile()
	{
		if (!Z_Registration_Info_UClass_APixelProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APixelProjectile.OuterSingleton, Z_Construct_UClass_APixelProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APixelProjectile.OuterSingleton;
	}
	template<> ACT3_PIXELARENA_API UClass* StaticClass<APixelProjectile>()
	{
		return APixelProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APixelProjectile);
	APixelProjectile::~APixelProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APixelProjectile, APixelProjectile::StaticClass, TEXT("APixelProjectile"), &Z_Registration_Info_UClass_APixelProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APixelProjectile), 2031184483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelProjectile_h_1445869443(TEXT("/Script/Act3_PixelArena"),
		Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
