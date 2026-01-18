// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Act3_PixelArena/Act3_PixelArenaPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAct3_PixelArenaPlayerController() {}
// Cross Module References
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_AAct3_PixelArenaPlayerController();
	ACT3_PIXELARENA_API UClass* Z_Construct_UClass_AAct3_PixelArenaPlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Act3_PixelArena();
// End Cross Module References
	DEFINE_FUNCTION(AAct3_PixelArenaPlayerController::execServer_UpdateRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_UpdateRotation_Validate(Z_Param_NewRotation))
		{
			RPC_ValidateFailed(TEXT("Server_UpdateRotation_Validate"));
			return;
		}
		P_THIS->Server_UpdateRotation_Implementation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAct3_PixelArenaPlayerController::execServer_StopMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StopMovement_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StopMovement_Validate"));
			return;
		}
		P_THIS->Server_StopMovement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAct3_PixelArenaPlayerController::execServer_SetDestination)
	{
		P_GET_STRUCT(FVector,Z_Param_DestLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetDestination_Validate(Z_Param_DestLocation))
		{
			RPC_ValidateFailed(TEXT("Server_SetDestination_Validate"));
			return;
		}
		P_THIS->Server_SetDestination_Implementation(Z_Param_DestLocation);
		P_NATIVE_END;
	}
	struct Act3_PixelArenaPlayerController_eventServer_SetDestination_Parms
	{
		FVector DestLocation;
	};
	struct Act3_PixelArenaPlayerController_eventServer_UpdateRotation_Parms
	{
		FRotator NewRotation;
	};
	static FName NAME_AAct3_PixelArenaPlayerController_Server_SetDestination = FName(TEXT("Server_SetDestination"));
	void AAct3_PixelArenaPlayerController::Server_SetDestination(FVector DestLocation)
	{
		Act3_PixelArenaPlayerController_eventServer_SetDestination_Parms Parms;
		Parms.DestLocation=DestLocation;
		ProcessEvent(FindFunctionChecked(NAME_AAct3_PixelArenaPlayerController_Server_SetDestination),&Parms);
	}
	static FName NAME_AAct3_PixelArenaPlayerController_Server_StopMovement = FName(TEXT("Server_StopMovement"));
	void AAct3_PixelArenaPlayerController::Server_StopMovement()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAct3_PixelArenaPlayerController_Server_StopMovement),NULL);
	}
	static FName NAME_AAct3_PixelArenaPlayerController_Server_UpdateRotation = FName(TEXT("Server_UpdateRotation"));
	void AAct3_PixelArenaPlayerController::Server_UpdateRotation(FRotator NewRotation)
	{
		Act3_PixelArenaPlayerController_eventServer_UpdateRotation_Parms Parms;
		Parms.NewRotation=NewRotation;
		ProcessEvent(FindFunctionChecked(NAME_AAct3_PixelArenaPlayerController_Server_UpdateRotation),&Parms);
	}
	void AAct3_PixelArenaPlayerController::StaticRegisterNativesAAct3_PixelArenaPlayerController()
	{
		UClass* Class = AAct3_PixelArenaPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_SetDestination", &AAct3_PixelArenaPlayerController::execServer_SetDestination },
			{ "Server_StopMovement", &AAct3_PixelArenaPlayerController::execServer_StopMovement },
			{ "Server_UpdateRotation", &AAct3_PixelArenaPlayerController::execServer_UpdateRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::NewProp_DestLocation = { "DestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Act3_PixelArenaPlayerController_eventServer_SetDestination_Parms, DestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::NewProp_DestLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPC para procesar el movimiento de navegaci\xef\xbf\xbdn en el servidor. */" },
#endif
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC para procesar el movimiento de navegaci\xef\xbf\xbdn en el servidor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAct3_PixelArenaPlayerController, nullptr, "Server_SetDestination", nullptr, nullptr, Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::PropPointers), sizeof(Act3_PixelArenaPlayerController_eventServer_SetDestination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::PropPointers) < 2048);
	static_assert(sizeof(Act3_PixelArenaPlayerController_eventServer_SetDestination_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPC para detener el movimiento del personaje en el servidor inmediatamente. */" },
#endif
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC para detener el movimiento del personaje en el servidor inmediatamente." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAct3_PixelArenaPlayerController, nullptr, "Server_StopMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Act3_PixelArenaPlayerController_eventServer_UpdateRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPC para replicar la rotaci\xef\xbf\xbdn del cliente a todos los dem\xef\xbf\xbds jugadores a trav\xef\xbf\xbds del servidor. */" },
#endif
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC para replicar la rotaci\xef\xbf\xbdn del cliente a todos los dem\xef\xbf\xbds jugadores a trav\xef\xbf\xbds del servidor." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAct3_PixelArenaPlayerController, nullptr, "Server_UpdateRotation", nullptr, nullptr, Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::PropPointers), sizeof(Act3_PixelArenaPlayerController_eventServer_UpdateRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Act3_PixelArenaPlayerController_eventServer_UpdateRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAct3_PixelArenaPlayerController);
	UClass* Z_Construct_UClass_AAct3_PixelArenaPlayerController_NoRegister()
	{
		return AAct3_PixelArenaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Act3_PixelArena,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_SetDestination, "Server_SetDestination" }, // 1778681796
		{ &Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_StopMovement, "Server_StopMovement" }, // 3130771975
		{ &Z_Construct_UFunction_AAct3_PixelArenaPlayerController_Server_UpdateRotation, "Server_UpdateRotation" }, // 2361620159
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Clase encargada de gestionar la entrada del jugador, el movimiento Top-Down\n * y la sincronizaci\xef\xbf\xbdn de la rotaci\xef\xbf\xbdn en red para el proyecto PixelArena.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Act3_PixelArenaPlayerController.h" },
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase encargada de gestionar la entrada del jugador, el movimiento Top-Down\ny la sincronizaci\xef\xbf\xbdn de la rotaci\xef\xbf\xbdn en red para el proyecto PixelArena." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** --- CONFIGURACI\xef\xbf\xbdN DE ENTRADA (ENHANCED INPUT) --- */" },
#endif
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIGURACI\xef\xbf\xbdN DE ENTRADA (ENHANCED INPUT) ---" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAct3_PixelArenaPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Act3_PixelArenaPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAct3_PixelArenaPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::NewProp_SetDestinationClickAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAct3_PixelArenaPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::ClassParams = {
		&AAct3_PixelArenaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAct3_PixelArenaPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAct3_PixelArenaPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAct3_PixelArenaPlayerController.OuterSingleton, Z_Construct_UClass_AAct3_PixelArenaPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAct3_PixelArenaPlayerController.OuterSingleton;
	}
	template<> ACT3_PIXELARENA_API UClass* StaticClass<AAct3_PixelArenaPlayerController>()
	{
		return AAct3_PixelArenaPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAct3_PixelArenaPlayerController);
	AAct3_PixelArenaPlayerController::~AAct3_PixelArenaPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAct3_PixelArenaPlayerController, AAct3_PixelArenaPlayerController::StaticClass, TEXT("AAct3_PixelArenaPlayerController"), &Z_Registration_Info_UClass_AAct3_PixelArenaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAct3_PixelArenaPlayerController), 1093014210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaPlayerController_h_2957169145(TEXT("/Script/Act3_PixelArena"),
		Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Act3_PixelArenaPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
