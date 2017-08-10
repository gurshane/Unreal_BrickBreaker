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
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API class UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	BRICKBREAKER_API class UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_UHealthComponent();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddlePlayerState_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddlePlayerState();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrick_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrick();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_UBallMovement_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_UBallMovement();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_UPaddleMovementComponent_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_UPaddleMovementComponent();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddle_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddle();
	BRICKBREAKER_API class UFunction* Z_Construct_UFunction_ABall_Respawn();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABall();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerBaseGameMode_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerBaseGameMode();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameModeBase_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameModeBase();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameState_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_ABrickBreakerGameState();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AMainMenu_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_AMainMenu();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddleController_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APaddleController();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APawnSet_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APawnSet();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APawnSpawn_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APawnSpawn();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	BRICKBREAKER_API class UClass* Z_Construct_UClass_APlayerHUD();
	BRICKBREAKER_API class UPackage* Z_Construct_UPackage__Script_BrickBreaker();
	void UHealthComponent::StaticRegisterNativesUHealthComponent()
	{
	}
	UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
	{
		return UHealthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHealthComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = UHealthComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_maxHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(maxHealth, UHealthComponent), 0x0010000000000001);
				UProperty* NewProp_currentHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("currentHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(currentHealth, UHealthComponent), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UHealthComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HealthComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HealthComponent.h"));
				MetaData->SetValue(NewProp_maxHealth, TEXT("Category"), TEXT("Health Properties"));
				MetaData->SetValue(NewProp_maxHealth, TEXT("ModuleRelativePath"), TEXT("HealthComponent.h"));
				MetaData->SetValue(NewProp_currentHealth, TEXT("Category"), TEXT("Health Properties"));
				MetaData->SetValue(NewProp_currentHealth, TEXT("ModuleRelativePath"), TEXT("HealthComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthComponent, 181936920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthComponent(Z_Construct_UClass_UHealthComponent, &UHealthComponent::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("UHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
	void APaddlePlayerState::StaticRegisterNativesAPaddlePlayerState()
	{
	}
	UClass* Z_Construct_UClass_APaddlePlayerState_NoRegister()
	{
		return APaddlePlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_APaddlePlayerState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerState();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APaddlePlayerState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PlayerScore = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayerScore"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlayerScore, APaddlePlayerState), 0x0010000000000015);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<APaddlePlayerState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaddlePlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaddlePlayerState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_PlayerScore, TEXT("Category"), TEXT("Player state"));
				MetaData->SetValue(NewProp_PlayerScore, TEXT("ModuleRelativePath"), TEXT("PaddlePlayerState.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddlePlayerState, 3453999592);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddlePlayerState(Z_Construct_UClass_APaddlePlayerState, &APaddlePlayerState::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APaddlePlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddlePlayerState);
	void ABrick::StaticRegisterNativesABrick()
	{
	}
	UClass* Z_Construct_UClass_ABrick_NoRegister()
	{
		return ABrick::StaticClass();
	}
	UClass* Z_Construct_UClass_ABrick()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABrick::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BlockHealth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlockHealth"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlockHealth, ABrick), 0x0010000000080009, Z_Construct_UClass_UHealthComponent_NoRegister());
				UProperty* NewProp_BlockCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlockCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlockCollider, ABrick), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_BlockMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlockMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlockMesh, ABrick), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ABrick> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Brick.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Brick.h"));
				MetaData->SetValue(NewProp_BlockHealth, TEXT("Category"), TEXT("Block Properties"));
				MetaData->SetValue(NewProp_BlockHealth, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlockHealth, TEXT("ModuleRelativePath"), TEXT("Brick.h"));
				MetaData->SetValue(NewProp_BlockCollider, TEXT("Category"), TEXT("Block Properties"));
				MetaData->SetValue(NewProp_BlockCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlockCollider, TEXT("ModuleRelativePath"), TEXT("Brick.h"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("Category"), TEXT("Block Properties"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("ModuleRelativePath"), TEXT("Brick.h"));
				MetaData->SetValue(NewProp_BlockMesh, TEXT("ToolTip"), TEXT("mesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrick, 1449559722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrick(Z_Construct_UClass_ABrick, &ABrick::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrick);
	void UBallMovement::StaticRegisterNativesUBallMovement()
	{
	}
	UClass* Z_Construct_UClass_UBallMovement_NoRegister()
	{
		return UBallMovement::StaticClass();
	}
	UClass* Z_Construct_UClass_UBallMovement()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = UBallMovement::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_timeUntilNextBounce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("timeUntilNextBounce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(timeUntilNextBounce, UBallMovement), 0x0010000000000001);
				UProperty* NewProp_timeSinceLastBounce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("timeSinceLastBounce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(timeSinceLastBounce, UBallMovement), 0x0010000000000001);
				UProperty* NewProp_bounceModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bounceModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(bounceModifier, UBallMovement), 0x0010000000000001);
				UProperty* NewProp_ballDeceleration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ballDeceleration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ballDeceleration, UBallMovement), 0x0010000000000001);
				UProperty* NewProp_ballAcceleration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ballAcceleration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ballAcceleration, UBallMovement), 0x0010000000000001);
				UProperty* NewProp_ballSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ballSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ballSpeed, UBallMovement), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UBallMovement> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_timeUntilNextBounce, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_timeUntilNextBounce, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_timeSinceLastBounce, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_timeSinceLastBounce, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_bounceModifier, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_bounceModifier, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_ballDeceleration, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_ballDeceleration, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_ballAcceleration, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_ballAcceleration, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
				MetaData->SetValue(NewProp_ballSpeed, TEXT("Category"), TEXT("Movement Properties"));
				MetaData->SetValue(NewProp_ballSpeed, TEXT("ModuleRelativePath"), TEXT("BallMovement.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBallMovement, 2810115904);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallMovement(Z_Construct_UClass_UBallMovement, &UBallMovement::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("UBallMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallMovement);
	void UPaddleMovementComponent::StaticRegisterNativesUPaddleMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UPaddleMovementComponent_NoRegister()
	{
		return UPaddleMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPaddleMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPawnMovementComponent();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = UPaddleMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_paddleSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("paddleSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(paddleSpeed, UPaddleMovementComponent), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UPaddleMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaddleMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaddleMovementComponent.h"));
				MetaData->SetValue(NewProp_paddleSpeed, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_paddleSpeed, TEXT("ModuleRelativePath"), TEXT("PaddleMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaddleMovementComponent, 2406780147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaddleMovementComponent(Z_Construct_UClass_UPaddleMovementComponent, &UPaddleMovementComponent::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("UPaddleMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaddleMovementComponent);
	void APaddle::StaticRegisterNativesAPaddle()
	{
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


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_cameraLagSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraLagSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(cameraLagSpeed, APaddle), 0x0010000000000001);
				UProperty* NewProp_PaddleCam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PaddleCam"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PaddleCam, APaddle), 0x0010000000080009, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_PaddleCameraArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PaddleCameraArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PaddleCameraArm, APaddle), 0x0010000000080009, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_PaddleMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PaddleMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PaddleMesh, APaddle), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_PaddleCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PaddleCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PaddleCollider, APaddle), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_PaddleMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PaddleMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PaddleMovementComponent, APaddle), 0x0010000000080009, Z_Construct_UClass_UPaddleMovementComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<APaddle> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Paddle.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_cameraLagSpeed, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_cameraLagSpeed, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_PaddleCam, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_PaddleCam, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PaddleCam, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_PaddleCameraArm, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_PaddleCameraArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PaddleCameraArm, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_PaddleMesh, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_PaddleMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PaddleMesh, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_PaddleCollider, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_PaddleCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PaddleCollider, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
				MetaData->SetValue(NewProp_PaddleMovementComponent, TEXT("Category"), TEXT("Paddle"));
				MetaData->SetValue(NewProp_PaddleMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PaddleMovementComponent, TEXT("ModuleRelativePath"), TEXT("Paddle.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle, 1257672857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle(Z_Construct_UClass_APaddle, &APaddle::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APaddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
	void ABall::StaticRegisterNativesABall()
	{
		UClass* Class = ABall::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Respawn", (Native)&ABall::execRespawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ABall_Respawn()
	{
		UObject* Outer=Z_Construct_UClass_ABall();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Respawn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
#endif
		}
		return ReturnFunction;
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
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABall::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ABall_Respawn());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_InitialPosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InitialPosition, ABall), 0x0010000000000000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_InitialRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InitialRotation, ABall), 0x0010000000000000, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_Arrow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Arrow"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Arrow, ABall), 0x0010000000080009, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_SphereCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SphereCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SphereCollider, ABall), 0x0010000000080009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_BallMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BallMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BallMesh, ABall), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABall_Respawn(), "Respawn"); // 1689684507
				static TCppClassTypeInfo<TCppClassTypeTraits<ABall> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Ball.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
				MetaData->SetValue(NewProp_InitialPosition, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
				MetaData->SetValue(NewProp_InitialRotation, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
				MetaData->SetValue(NewProp_Arrow, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_Arrow, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Arrow, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
				MetaData->SetValue(NewProp_SphereCollider, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_SphereCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SphereCollider, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
				MetaData->SetValue(NewProp_BallMesh, TEXT("Category"), TEXT("Ball"));
				MetaData->SetValue(NewProp_BallMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BallMesh, TEXT("ModuleRelativePath"), TEXT("Ball.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABall, 493883572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABall(Z_Construct_UClass_ABall, &ABall::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
	void ABrickBreakerBaseGameMode::StaticRegisterNativesABrickBreakerBaseGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABrickBreakerBaseGameMode_NoRegister()
	{
		return ABrickBreakerBaseGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABrickBreakerBaseGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABrickBreakerBaseGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_StartingWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartingWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(StartingWidget, ABrickBreakerBaseGameMode), 0x0024080000000001, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ABrickBreakerBaseGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BrickBreakerBaseGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BrickBreakerBaseGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_StartingWidget, TEXT("Category"), TEXT("UI"));
				MetaData->SetValue(NewProp_StartingWidget, TEXT("ModuleRelativePath"), TEXT("BrickBreakerBaseGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBreakerBaseGameMode, 1647415676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBreakerBaseGameMode(Z_Construct_UClass_ABrickBreakerBaseGameMode, &ABrickBreakerBaseGameMode::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABrickBreakerBaseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBreakerBaseGameMode);
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
	void ABrickBreakerGameState::StaticRegisterNativesABrickBreakerGameState()
	{
	}
	UClass* Z_Construct_UClass_ABrickBreakerGameState_NoRegister()
	{
		return ABrickBreakerGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ABrickBreakerGameState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameStateBase();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = ABrickBreakerGameState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABrickBreakerGameState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BrickBreakerGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BrickBreakerGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBreakerGameState, 4014349042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBreakerGameState(Z_Construct_UClass_ABrickBreakerGameState, &ABrickBreakerGameState::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("ABrickBreakerGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBreakerGameState);
	void AMainMenu::StaticRegisterNativesAMainMenu()
	{
	}
	UClass* Z_Construct_UClass_AMainMenu_NoRegister()
	{
		return AMainMenu::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainMenu()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = AMainMenu::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMainMenu> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainMenu.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MainMenu.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenu, 2727725712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenu(Z_Construct_UClass_AMainMenu, &AMainMenu::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("AMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenu);
	void APaddleController::StaticRegisterNativesAPaddleController()
	{
	}
	UClass* Z_Construct_UClass_APaddleController_NoRegister()
	{
		return APaddleController::StaticClass();
	}
	UClass* Z_Construct_UClass_APaddleController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APaddleController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MyPlayerState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyPlayerState"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyPlayerState, APaddleController), 0x0010000000000015, Z_Construct_UClass_APaddlePlayerState_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<APaddleController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PaddleController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PaddleController.h"));
				MetaData->SetValue(NewProp_MyPlayerState, TEXT("Category"), TEXT("Paddle Stuff"));
				MetaData->SetValue(NewProp_MyPlayerState, TEXT("ModuleRelativePath"), TEXT("PaddleController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddleController, 1515945872);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddleController(Z_Construct_UClass_APaddleController, &APaddleController::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APaddleController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddleController);
	void APawnSet::StaticRegisterNativesAPawnSet()
	{
	}
	UClass* Z_Construct_UClass_APawnSet_NoRegister()
	{
		return APawnSet::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnSet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APawnSet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Bricks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Bricks"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bricks, APawnSet), 0x0010000000000001);
				UProperty* NewProp_Bricks_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bricks, TEXT("Bricks"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ABrick_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<APawnSet> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PawnSet.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PawnSet.h"));
				MetaData->SetValue(NewProp_Bricks, TEXT("Category"), TEXT("Pawn Set"));
				MetaData->SetValue(NewProp_Bricks, TEXT("ModuleRelativePath"), TEXT("PawnSet.h"));
				MetaData->SetValue(NewProp_Bricks, TEXT("ToolTip"), TEXT("Sets default values for this actor's properties"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnSet, 413962018);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnSet(Z_Construct_UClass_APawnSet, &APawnSet::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APawnSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnSet);
	void APawnSpawn::StaticRegisterNativesAPawnSpawn()
	{
	}
	UClass* Z_Construct_UClass_APawnSpawn_NoRegister()
	{
		return APawnSpawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnSpawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BrickBreaker();
			OuterClass = APawnSpawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<APawnSpawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PawnSpawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PawnSpawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnSpawn, 1433794766);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnSpawn(Z_Construct_UClass_APawnSpawn, &APawnSpawn::StaticClass, TEXT("/Script/BrickBreaker"), TEXT("APawnSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnSpawn);
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
	UPackage* Z_Construct_UPackage__Script_BrickBreaker()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BrickBreaker")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xDDE011AD;
			Guid.B = 0x437F2C4C;
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
