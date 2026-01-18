// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Act3_PixelArena/Act3_PixelArenaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAct3_PixelArenaGameMode() {}
// Cross Module References
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_AAct3_PixelArenaGameMode();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_AAct3_PixelArenaGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Act3_PixelArena();
// End Cross Module References
	void AAct3_PixelArenaGameMode::StaticRegisterNativesAAct3_PixelArenaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAct3_PixelArenaGameMode);
	UClass* Z_Construct_UClass_AAct3_PixelArenaGameMode_NoRegister()
	{
		return AAct3_PixelArenaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Act3_PixelArena,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Act3_PixelArenaGameMode.h" },
		{ "ModuleRelativePath", "Act3_PixelArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAct3_PixelArenaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::ClassParams = {
		&AAct3_PixelArenaGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAct3_PixelArenaGameMode()
	{
		if (!Z_Registration_Info_UClass_AAct3_PixelArenaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAct3_PixelArenaGameMode.OuterSingleton, Z_Construct_UClass_AAct3_PixelArenaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAct3_PixelArenaGameMode.OuterSingleton;
	}
	template<> ACT3_PIXELARENA_API UClass* StaticClass<AAct3_PixelArenaGameMode>()
	{
		return AAct3_PixelArenaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAct3_PixelArenaGameMode);
	AAct3_PixelArenaGameMode::~AAct3_PixelArenaGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAct3_PixelArenaGameMode, AAct3_PixelArenaGameMode::StaticClass, TEXT("AAct3_PixelArenaGameMode"), &Z_Registration_Info_UClass_AAct3_PixelArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAct3_PixelArenaGameMode), 1116872784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaGameMode_h_1676161171(TEXT("/Script/Act3_PixelArena"),
		Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
