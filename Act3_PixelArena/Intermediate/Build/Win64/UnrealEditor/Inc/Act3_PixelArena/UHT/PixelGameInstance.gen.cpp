// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Act3_PixelArena/Public/PixelGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelGameInstance() {}
// Cross Module References
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_UPixelGameInstance();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_UPixelGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Act3_PixelArena();
// End Cross Module References
	DEFINE_FUNCTION(UPixelGameInstance::execJoinGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinGame(Z_Param_IPAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelGameInstance::execHostGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostGame();
		P_NATIVE_END;
	}
	void UPixelGameInstance::StaticRegisterNativesUPixelGameInstance()
	{
		UClass* Class = UPixelGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostGame", &UPixelGameInstance::execHostGame },
			{ "JoinGame", &UPixelGameInstance::execJoinGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Funci\xef\xbf\xbdn para crear una partida (Host) */" },
#endif
		{ "ModuleRelativePath", "Public/PixelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para crear una partida (Host)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelGameInstance, nullptr, "HostGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPixelGameInstance_HostGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelGameInstance_HostGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics
	{
		struct PixelGameInstance_eventJoinGame_Parms
		{
			FString IPAddress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PixelGameInstance_eventJoinGame_Parms, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::NewProp_IPAddress_MetaData), Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::NewProp_IPAddress_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::NewProp_IPAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Funci\xef\xbf\xbdn para unirse a una partida (Join) */" },
#endif
		{ "ModuleRelativePath", "Public/PixelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para unirse a una partida (Join)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelGameInstance, nullptr, "JoinGame", nullptr, nullptr, Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PixelGameInstance_eventJoinGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::PixelGameInstance_eventJoinGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPixelGameInstance_JoinGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelGameInstance_JoinGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelGameInstance);
	UClass* Z_Construct_UClass_UPixelGameInstance_NoRegister()
	{
		return UPixelGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPixelGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Act3_PixelArena,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelGameInstance_HostGame, "HostGame" }, // 1122341683
		{ &Z_Construct_UFunction_UPixelGameInstance_JoinGame, "JoinGame" }, // 4038133882
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PixelGameInstance.h" },
		{ "ModuleRelativePath", "Public/PixelGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelGameInstance_Statics::ClassParams = {
		&UPixelGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPixelGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPixelGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPixelGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPixelGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelGameInstance.OuterSingleton, Z_Construct_UClass_UPixelGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelGameInstance.OuterSingleton;
	}
	template<> ACT3_PIXELARENA_API UClass* StaticClass<UPixelGameInstance>()
	{
		return UPixelGameInstance::StaticClass();
	}
	UPixelGameInstance::UPixelGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelGameInstance);
	UPixelGameInstance::~UPixelGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelGameInstance, UPixelGameInstance::StaticClass, TEXT("UPixelGameInstance"), &Z_Registration_Info_UClass_UPixelGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelGameInstance), 2627776408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelGameInstance_h_4153379301(TEXT("/Script/Act3_PixelArena"),
		Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
