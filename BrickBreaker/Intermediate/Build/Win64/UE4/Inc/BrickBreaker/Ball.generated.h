// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRICKBREAKER_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define BRICKBREAKER_Ball_generated_h

#define BrickBreaker_Source_BrickBreaker_Ball_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Respawn(); \
		P_NATIVE_END; \
	}


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall(); \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall(); \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(ABall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_PRIVATE_PROPERTY_OFFSET
#define BrickBreaker_Source_BrickBreaker_Ball_h_21_PROLOG
#define BrickBreaker_Source_BrickBreaker_Ball_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_RPC_WRAPPERS \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_INCLASS \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BrickBreaker_Source_BrickBreaker_Ball_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_INCLASS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Ball_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BrickBreaker_Source_BrickBreaker_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
