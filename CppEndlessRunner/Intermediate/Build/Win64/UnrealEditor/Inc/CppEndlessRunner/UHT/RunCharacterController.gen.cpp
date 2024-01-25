// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppEndlessRunner/Public/RunCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunCharacterController() {}
// Cross Module References
	CPPENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunCharacterController();
	CPPENDLESSRUNNER_API UClass* Z_Construct_UClass_ARunCharacterController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CppEndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(ARunCharacterController::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_offset);
		P_NATIVE_END;
	}
	void ARunCharacterController::StaticRegisterNativesARunCharacterController()
	{
		UClass* Class = ARunCharacterController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveRight", &ARunCharacterController::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics
	{
		struct RunCharacterController_eventMoveRight_Parms
		{
			float offset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RunCharacterController_eventMoveRight_Parms, offset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::NewProp_offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RunCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacterController, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::RunCharacterController_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::RunCharacterController_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARunCharacterController_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacterController_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunCharacterController);
	UClass* Z_Construct_UClass_ARunCharacterController_NoRegister()
	{
		return ARunCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CppEndlessRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacterController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacterController_MoveRight, "MoveRight" }, // 2085977816
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacterController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RunCharacterController.h" },
		{ "ModuleRelativePath", "Public/RunCharacterController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacterController_Statics::ClassParams = {
		&ARunCharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunCharacterController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARunCharacterController()
	{
		if (!Z_Registration_Info_UClass_ARunCharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunCharacterController.OuterSingleton, Z_Construct_UClass_ARunCharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunCharacterController.OuterSingleton;
	}
	template<> CPPENDLESSRUNNER_API UClass* StaticClass<ARunCharacterController>()
	{
		return ARunCharacterController::StaticClass();
	}
	ARunCharacterController::ARunCharacterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacterController);
	ARunCharacterController::~ARunCharacterController() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_Public_RunCharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_Public_RunCharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunCharacterController, ARunCharacterController::StaticClass, TEXT("ARunCharacterController"), &Z_Registration_Info_UClass_ARunCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacterController), 135449989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_Public_RunCharacterController_h_3124702141(TEXT("/Script/CppEndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_Public_RunCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_Public_RunCharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
