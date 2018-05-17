// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef UE_P380517_P38Pawn_generated_h
#error "P38Pawn.generated.h already included, missing '#pragma once' in P38Pawn.h"
#endif
#define UE_P380517_P38Pawn_generated_h

#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorRotate) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorRotate(Z_Param_Mesh); \
		P_NATIVE_END; \
	}


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActorRotate) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActorRotate(Z_Param_Mesh); \
		P_NATIVE_END; \
	}


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAP38Pawn(); \
	friend UE_P380517_API class UClass* Z_Construct_UClass_AP38Pawn(); \
public: \
	DECLARE_CLASS(AP38Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE_P380517"), NO_API) \
	DECLARE_SERIALIZER(AP38Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAP38Pawn(); \
	friend UE_P380517_API class UClass* Z_Construct_UClass_AP38Pawn(); \
public: \
	DECLARE_CLASS(AP38Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE_P380517"), NO_API) \
	DECLARE_SERIALIZER(AP38Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AP38Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AP38Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP38Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP38Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP38Pawn(AP38Pawn&&); \
	NO_API AP38Pawn(const AP38Pawn&); \
public:


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP38Pawn(AP38Pawn&&); \
	NO_API AP38Pawn(const AP38Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP38Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP38Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AP38Pawn)


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_PRIVATE_PROPERTY_OFFSET
#define UE_P380517_Source_UE_P380517_P38Pawn_h_9_PROLOG
#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_RPC_WRAPPERS \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_INCLASS \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_P380517_Source_UE_P380517_P38Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_INCLASS_NO_PURE_DECLS \
	UE_P380517_Source_UE_P380517_P38Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_P380517_Source_UE_P380517_P38Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
