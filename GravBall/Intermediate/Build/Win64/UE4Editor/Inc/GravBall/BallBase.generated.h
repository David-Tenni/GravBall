// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVBALL_BallBase_generated_h
#error "BallBase.generated.h already included, missing '#pragma once' in BallBase.h"
#endif
#define GRAVBALL_BallBase_generated_h

#define GravBall_Source_GravBall_BallBase_h_12_SPARSE_DATA
#define GravBall_Source_GravBall_BallBase_h_12_RPC_WRAPPERS
#define GravBall_Source_GravBall_BallBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GravBall_Source_GravBall_BallBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallBase(); \
	friend struct Z_Construct_UClass_ABallBase_Statics; \
public: \
	DECLARE_CLASS(ABallBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GravBall"), NO_API) \
	DECLARE_SERIALIZER(ABallBase)


#define GravBall_Source_GravBall_BallBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABallBase(); \
	friend struct Z_Construct_UClass_ABallBase_Statics; \
public: \
	DECLARE_CLASS(ABallBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GravBall"), NO_API) \
	DECLARE_SERIALIZER(ABallBase)


#define GravBall_Source_GravBall_BallBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBase(ABallBase&&); \
	NO_API ABallBase(const ABallBase&); \
public:


#define GravBall_Source_GravBall_BallBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBase(ABallBase&&); \
	NO_API ABallBase(const ABallBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallBase)


#define GravBall_Source_GravBall_BallBase_h_12_PRIVATE_PROPERTY_OFFSET
#define GravBall_Source_GravBall_BallBase_h_9_PROLOG
#define GravBall_Source_GravBall_BallBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravBall_Source_GravBall_BallBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GravBall_Source_GravBall_BallBase_h_12_SPARSE_DATA \
	GravBall_Source_GravBall_BallBase_h_12_RPC_WRAPPERS \
	GravBall_Source_GravBall_BallBase_h_12_INCLASS \
	GravBall_Source_GravBall_BallBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravBall_Source_GravBall_BallBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravBall_Source_GravBall_BallBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GravBall_Source_GravBall_BallBase_h_12_SPARSE_DATA \
	GravBall_Source_GravBall_BallBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GravBall_Source_GravBall_BallBase_h_12_INCLASS_NO_PURE_DECLS \
	GravBall_Source_GravBall_BallBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVBALL_API UClass* StaticClass<class ABallBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravBall_Source_GravBall_BallBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
