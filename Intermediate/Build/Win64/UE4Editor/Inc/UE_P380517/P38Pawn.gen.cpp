// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "P38Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP38Pawn() {}
// Cross Module References
	UE_P380517_API UClass* Z_Construct_UClass_AP38Pawn_NoRegister();
	UE_P380517_API UClass* Z_Construct_UClass_AP38Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UE_P380517();
	UE_P380517_API UFunction* Z_Construct_UFunction_AP38Pawn_ActorRotate();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UE_P380517_API UFunction* Z_Construct_UFunction_AP38Pawn_Fire();
	UE_P380517_API UFunction* Z_Construct_UFunction_AP38Pawn_MoveForward();
	UE_P380517_API UFunction* Z_Construct_UFunction_AP38Pawn_Turn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UE_P380517_API UClass* Z_Construct_UClass_AP38Rocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AP38Pawn::StaticRegisterNativesAP38Pawn()
	{
		UClass* Class = AP38Pawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorRotate", &AP38Pawn::execActorRotate },
			{ "Fire", &AP38Pawn::execFire },
			{ "MoveForward", &AP38Pawn::execMoveForward },
			{ "Turn", &AP38Pawn::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AP38Pawn_ActorRotate()
	{
		struct P38Pawn_eventActorRotate_Parms
		{
			UStaticMeshComponent* Mesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(P38Pawn_eventActorRotate_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AP38Pawn, "ActorRotate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(P38Pawn_eventActorRotate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AP38Pawn_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AP38Pawn, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AP38Pawn_MoveForward()
	{
		struct P38Pawn_eventMoveForward_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(P38Pawn_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AP38Pawn, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(P38Pawn_eventMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AP38Pawn_Turn()
	{
		struct P38Pawn_eventTurn_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(P38Pawn_eventTurn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AP38Pawn, "Turn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(P38Pawn_eventTurn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AP38Pawn_NoRegister()
	{
		return AP38Pawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AP38Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_UE_P380517,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AP38Pawn_ActorRotate, "ActorRotate" }, // 3292609627
				{ &Z_Construct_UFunction_AP38Pawn_Fire, "Fire" }, // 1044785359
				{ &Z_Construct_UFunction_AP38Pawn_MoveForward, "MoveForward" }, // 421539488
				{ &Z_Construct_UFunction_AP38Pawn_Turn, "Turn" }, // 2851990671
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "P38Pawn.h" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketBlueprint_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "ModuleRelativePath", "P38Pawn.h" },
				{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xec\x82\xac\xec\x9a\xa9 \xed\x95\x98\xeb\x8a\x94 \xeb\x91\x90\xeb\xb2\x88\xec\xa7\xb8 \xeb\xb0\xa9\xeb\xb2\x95" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_RocketBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "RocketBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(AP38Pawn, RocketBlueprint), Z_Construct_UClass_AP38Rocket_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_RocketBlueprint_MetaData, ARRAY_COUNT(NewProp_RocketBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow = { UE4CodeGen_Private::EPropertyClass::Object, "Arrow", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_Arrow_MetaData, ARRAY_COUNT(NewProp_Arrow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Object, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(NewProp_Movement_MetaData, ARRAY_COUNT(NewProp_Movement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Object, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Right), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Right_MetaData, ARRAY_COUNT(NewProp_Right_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Object, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Left), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Left_MetaData, ARRAY_COUNT(NewProp_Left_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Object, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
				{ "Category", "P38Pawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "P38Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Object, "Box", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AP38Pawn, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_Box_MetaData, ARRAY_COUNT(NewProp_Box_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RocketBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Arrow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Box,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AP38Pawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AP38Pawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP38Pawn, 571789198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP38Pawn(Z_Construct_UClass_AP38Pawn, &AP38Pawn::StaticClass, TEXT("/Script/UE_P380517"), TEXT("AP38Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP38Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
