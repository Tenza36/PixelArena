// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelHero.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACT3_PIXELARENA_PixelHero_generated_h
#error "PixelHero.generated.h already included, missing '#pragma once' in PixelHero.h"
#endif
#define ACT3_PIXELARENA_PixelHero_generated_h

#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_SPARSE_DATA
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_FireEffects_Implementation(); \
	virtual bool Server_Fire_Validate(); \
	virtual void Server_Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_FireEffects); \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_ACCESSORS
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_CALLBACK_WRAPPERS
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPixelHero(); \
	friend struct Z_Construct_UClass_APixelHero_Statics; \
public: \
	DECLARE_CLASS(APixelHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Act3_PixelArena"), NO_API) \
	DECLARE_SERIALIZER(APixelHero) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APixelHero(APixelHero&&); \
	NO_API APixelHero(const APixelHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APixelHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APixelHero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APixelHero) \
	NO_API virtual ~APixelHero();


#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_11_PROLOG
#define FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_SPARSE_DATA \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_ACCESSORS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_CALLBACK_WRAPPERS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACT3_PIXELARENA_API UClass* StaticClass<class APixelHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_usuario_Documents_GitHub_PixelArena_Act3_PixelArena_Source_Act3_PixelArena_Public_PixelHero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
