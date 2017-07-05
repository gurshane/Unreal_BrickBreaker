// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BrickBreaker.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BrickBreaker() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();

	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABlock_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABlock();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABlockAnchor_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABlockAnchor();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameModeBase_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameModeBase();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ACameraMan_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ACameraMan();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AGameManager_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AGameManager();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ALevelGenerator_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ALevelGenerator();
	BRICKBREAKER_API class UFunction* Z_Construct_UFunction_APaddle_Fire();
	BRICKBREAKER_API class UFunction* Z_Construct_UFunction_APaddle_MovePaddle();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddle_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddle();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APlayerHUD();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AProjectile();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ARocket_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ARocket();
	BRICKBREAKER_API class UPackage* Z_Construct_UPackage__Script_BrickBreaker();
	void ABlock::StaticRegisterNativesABlock()
	{
	}
	UClass* Z_Construct_UClass_ABlock_NoRegister()
	{
		return ABlock::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlock()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABlock::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABlock> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Block.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Block.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock, 2975344452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock(Z_Construct_UClass_ABlock, &ABlock::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock);
	void ABlockAnchor::StaticRegisterNativesABlockAnchor()
	{
	}
	UClass* Z_Construct_UClass_ABlockAnchor_NoRegister()
	{
		return ABlockAnchor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABlockAnchor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABlockAnchor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABlockAnchor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BlockAnchor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BlockAnchor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockAnchor, 2869961714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockAnchor(Z_Construct_UClass_ABlockAnchor, &ABlockAnchor::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABlockAnchor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockAnchor);
	void ABrickBreakerGameModeBase::StaticRegisterNativesABrickBreakerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABrickBreakerGameModeBase_NoRegister()
	{
		return ABrickBreakerGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABrickBreakerGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABrickBreakerGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABrickBreakerGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BrickBreakerGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BrickBreakerGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBreakerGameModeBase, 2605566768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBreakerGameModeBase(Z_Construct_UClass_ABrickBreakerGameModeBase, &ABrickBreakerGameModeBase::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABrickBreakerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBreakerGameModeBase);
	void ACameraMan::StaticRegisterNativesACameraMan()
	{
	}
	UClass* Z_Construct_UClass_ACameraMan_NoRegister()
	{
		return ACameraMan::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraMan()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ACameraMan::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraMan> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraMan.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CameraMan.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraMan, 4110091251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraMan(Z_Construct_UClass_ACameraMan, &ACameraMan::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ACameraMan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraMan);
	void AGameManager::StaticRegisterNativesAGameManager()
	{
	}
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = AGameManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AGameManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameManager, 760278019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameManager(Z_Construct_UClass_AGameManager, &AGameManager::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("AGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
	void ALevelGenerator::StaticRegisterNativesALevelGenerator()
	{
	}
	UClass* Z_Construct_UClass_ALevelGenerator_NoRegister()
	{
		return ALevelGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_ALevelGenerator()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ALevelGenerator::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ALevelGenerator> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LevelGenerator.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LevelGenerator.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelGenerator, 2123203057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelGenerator(Z_Construct_UClass_ALevelGenerator, &ALevelGenerator::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ALevelGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelGenerator);
	void APaddle::StaticRegisterNativesAPaddle()
	{
		UClass* Class = APaddle::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&APaddle::execFire },
			{ "MovePaddle", (Native)&APaddle::execMovePaddle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_APaddle_Fire()
	{
		UObject* Outer=Z_Construct_UClass_APaddle();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APaddle_MovePaddle()
	{
		struct Paddle_eventMovePaddle_Parms
		{
			float Value;
		};
		UObject* Outer=Z_Construct_UClass_APaddle();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovePaddle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Paddle_eventMovePaddle_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, Paddle_eventMovePaddle_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	UClass* Z_Construct_UClass_APaddle()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APaddle::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APaddle_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_APaddle_MovePaddle());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_paddleCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("paddleCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(paddleCollider, APaddle), 0x0010000000080008, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_paddleMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("paddleMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(paddleMesh, APaddle), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_paddleCam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("paddleCam"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(paddleCam, APaddle), 0x0010000000080009, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APaddle_Fire(), "Fire"); // 2934714315
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APaddle_MovePaddle(), "MovePaddle"); // 4292536108
				static TCppClassTypeInfo<TCppClassTypeTraits<APaddle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Paddle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_paddleCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_paddleCollider, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_paddleMesh, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_paddleMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_paddleMesh, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_paddleCam, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_paddleCam, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_paddleCam, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle, 2145132936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle(Z_Construct_UClass_APaddle, &APaddle::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APaddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
	}
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APlayerHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayerHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PlayerHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PlayerHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerHUD, 493410159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerHUD(Z_Construct_UClass_APlayerHUD, &APlayerHUD::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 2588342193);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	void ABall::StaticRegisterNativesABall()
	{
	}
	UClass* Z_Construct_UClass_ABall_NoRegister()
	{
		return ABall::StaticClass();
	}
	UClass* Z_Construct_UClass_ABall()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AProjectile();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABall::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABall> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Ball.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABall, 3162517645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABall(Z_Construct_UClass_ABall, &ABall::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
	void ARocket::StaticRegisterNativesARocket()
	{
	}
	UClass* Z_Construct_UClass_ARocket_NoRegister()
	{
		return ARocket::StaticClass();
	}
	UClass* Z_Construct_UClass_ARocket()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AProjectile();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ARocket::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ARocket> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Rocket.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Rocket.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARocket, 4107558396);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARocket(Z_Construct_UClass_ARocket, &ARocket::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ARocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARocket);
	UPackage* Z_Construct_UPackage__Script_BrickBreaker()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BrickBreaker")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x85C760D2;
			Guid.B = 0x38D6E89E;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
