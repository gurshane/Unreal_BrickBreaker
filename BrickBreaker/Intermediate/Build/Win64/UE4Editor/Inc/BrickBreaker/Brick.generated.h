// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BRICKBREAKER_Brick_generated_h
#error "Brick.generated.h already included, missing '#pragma once' in Brick.h"
#endif
#define BRICKBREAKER_Brick_generated_h

#define BrickBreaker_Source_BrickBreaker_Brick_h_23_RPC_WRAPPERS
#define BrickBreaker_Source_BrickBreaker_Brick_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define BrickBreaker_Source_BrickBreaker_Brick_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrick(); \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(ABrick) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrickBreaker_Source_BrickBreaker_Brick_h_23_INCLASS \
private: \
	static void StaticRegisterNativesABrick(); \
	friend BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrick(); \
public: \
	DECLARE_CLASS(ABrick, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BrickBreaker"), NO_API) \
	DECLARE_SERIALIZER(ABrick) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BrickBreaker_Source_BrickBreaker_Brick_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABrick(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABrick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public:


#define BrickBreaker_Source_BrickBreaker_Brick_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABrick(ABrick&&); \
	NO_API ABrick(const ABrick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABrick); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABrick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABrick)


#define BrickBreaker_Source_BrickBreaker_Brick_h_23_PRIVATE_PROPERTY_OFFSET
#define BrickBreaker_Source_BrickBreaker_Brick_h_20_PROLOG
#define BrickBreaker_Source_BrickBreaker_Brick_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_RPC_WRAPPERS \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_INCLASS \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BrickBreaker_Source_BrickBreaker_Brick_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_PRIVATE_PROPERTY_OFFSET \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_INCLASS_NO_PURE_DECLS \
	BrickBreaker_Source_BrickBreaker_Brick_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BrickBreaker_Source_BrickBreaker_Brick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
