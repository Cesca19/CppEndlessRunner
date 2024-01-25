// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppEndlessRunner/CppEndlessRunnerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppEndlessRunnerGameMode() {}
// Cross Module References
	CPPENDLESSRUNNER_API UClass* Z_Construct_UClass_ACppEndlessRunnerGameMode();
	CPPENDLESSRUNNER_API UClass* Z_Construct_UClass_ACppEndlessRunnerGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CppEndlessRunner();
// End Cross Module References
	void ACppEndlessRunnerGameMode::StaticRegisterNativesACppEndlessRunnerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppEndlessRunnerGameMode);
	UClass* Z_Construct_UClass_ACppEndlessRunnerGameMode_NoRegister()
	{
		return ACppEndlessRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CppEndlessRunner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CppEndlessRunnerGameMode.h" },
		{ "ModuleRelativePath", "CppEndlessRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppEndlessRunnerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::ClassParams = {
		&ACppEndlessRunnerGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACppEndlessRunnerGameMode()
	{
		if (!Z_Registration_Info_UClass_ACppEndlessRunnerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppEndlessRunnerGameMode.OuterSingleton, Z_Construct_UClass_ACppEndlessRunnerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACppEndlessRunnerGameMode.OuterSingleton;
	}
	template<> CPPENDLESSRUNNER_API UClass* StaticClass<ACppEndlessRunnerGameMode>()
	{
		return ACppEndlessRunnerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppEndlessRunnerGameMode);
	ACppEndlessRunnerGameMode::~ACppEndlessRunnerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_CppEndlessRunnerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_CppEndlessRunnerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACppEndlessRunnerGameMode, ACppEndlessRunnerGameMode::StaticClass, TEXT("ACppEndlessRunnerGameMode"), &Z_Registration_Info_UClass_ACppEndlessRunnerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppEndlessRunnerGameMode), 4153110684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_CppEndlessRunnerGameMode_h_4030994378(TEXT("/Script/CppEndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_CppEndlessRunnerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_CppEndlessRunner_CppEndlessRunner_Source_CppEndlessRunner_CppEndlessRunnerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
