// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GravBall/GravBallPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravBallPlayerController() {}
// Cross Module References
	GRAVBALL_API UClass* Z_Construct_UClass_AGravBallPlayerController_NoRegister();
	GRAVBALL_API UClass* Z_Construct_UClass_AGravBallPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GravBall();
// End Cross Module References
	void AGravBallPlayerController::StaticRegisterNativesAGravBallPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGravBallPlayerController_NoRegister()
	{
		return AGravBallPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGravBallPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravBallPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GravBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravBallPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GravBallPlayerController.h" },
		{ "ModuleRelativePath", "GravBallPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravBallPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravBallPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGravBallPlayerController_Statics::ClassParams = {
		&AGravBallPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGravBallPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGravBallPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravBallPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGravBallPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGravBallPlayerController, 644185115);
	template<> GRAVBALL_API UClass* StaticClass<AGravBallPlayerController>()
	{
		return AGravBallPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGravBallPlayerController(Z_Construct_UClass_AGravBallPlayerController, &AGravBallPlayerController::StaticClass, TEXT("/Script/GravBall"), TEXT("AGravBallPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravBallPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
