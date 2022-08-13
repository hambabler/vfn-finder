#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class UpGun.HorrorMultiplayerSyncComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UHorrorMultiplayerSyncComponent : public UActorComponent
	{
	public:
		TArray<class FName>                                        ComponentName;                                           // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      UpdateFrequency;                                         // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateTransformTolerence;                                // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorrorSyncMode                                            SyncMode;                                                // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLP8[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class USceneComponent>>              SceneComponents;                                         // 0x00D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FTransform>                                  SceneComponentsTransforms;                               // 0x00E0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate

	public:
		void OnRep_Transforms();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilitySystemComponent
	 * Size -> 0x0060 (FullSize[0x1368] - InheritedSize[0x1308])
	 */
	class UUpGunAbilitySystemComponent : public UAbilitySystemComponent
	{
	public:
		TArray<struct FUpGunGameplayAbilityLocalAnimMontageMesh>   LocalAbilitiesMontages;                                  // 0x1308(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FUpGunGameplayAbilityReplicatedMontageMesh>  ReplicatedAbilitiesMontages;                             // 0x1318(0x0010) Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               CurrentReliableGameplayCues;                             // 0x1328(0x0020) Net, RepNotify, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAbilitiesUpdated;                                      // 0x1348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAbilityCommitted;                                      // 0x1358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ResetCooldowns();
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void OnRep_ReplicatedAbilitiesMontages();
		void OnRep_CurrentReliableGameplayCues();
		void MulticastExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag);
		void MulticastAddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void ExecuteReliableGameplayCue(const struct FGameplayTag& GameplayCueTag);
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void BP_CancelAbility(class UClass* Ability);
		void AddReliableGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void AddAttributeSet(class UAttributeSet* Set);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilitySystemWidget
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UUpGunAbilitySystemWidget : public UUserWidget
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5RL4[0x10];                                  // 0x0268(0x0010) MISSED OFFSET (PADDING)

	public:
		bool ListenForGameplayTag(EGameplayTagEventType Type, const struct FGameplayTag& Tag, const class FScriptDelegate& InEvent);
		bool ListenForAttributes(TArray<struct FGameplayAttribute> Attributes, const class FScriptDelegate& InEvent, bool bInitialCall);
		bool ListenForAttribute(const struct FGameplayAttribute& Attribute, const class FScriptDelegate& InEvent, bool bInitialCall);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_ApplyComponentConstantRootMotion
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UUpGunAbilityTask_ApplyComponentConstantRootMotion : public UAbilityTask_ApplyRootMotion_Base
	{
	public:
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class USceneComponent*                                     Component;                                               // 0x00C8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Strength;                                                // 0x00D0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Duration;                                                // 0x00D4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsAdditive;                                             // 0x00D8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableGravity;                                          // 0x00D9(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F3EL[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (PADDING)

	public:
		class UUpGunAbilityTask_ApplyComponentConstantRootMotion* ApplyComponentConstantRootMotion(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USceneComponent* Component, float Strength, float Duration, bool bIsAdditive, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_JackRepeatAction
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_JackRepeatAction : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPerformAction;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHXC[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UUpGunAbilityTask_JackRepeatAction* ContinuouslyRepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_PlayMontageForMeshAndWaitForEvent
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent : public UAbilityTask
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x0090(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x00B4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReplicateMontage;                                       // 0x00C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YFKP[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideBlendOutTimeForCancelAbility;                    // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OverrideBlendOutTimeForStopWhenEndAbility;               // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OM6X[0x34];                                  // 0x00CC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent* PlayMontageForMeshAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_PlayWeaponMontage
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_PlayWeaponMontage : public UAbilityTask
	{
	public:
		class UAnimMontage*                                        MontageWeaponFPS;                                        // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageWeaponTPS;                                        // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageHandsFPS;                                         // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageHandsTPS;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00A0(0x0020) NativeAccessSpecifierPrivate
		float                                                      FPSPlayRate;                                             // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TPSPlayRate;                                             // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunAbilitySystemComponent*                        UpGunAbilitySystem;                                      // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunBaseCharacter*                                 Character;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunWeapon*                                        Weapon;                                                  // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MontagesToNotStopWhenAbilityEnds;                        // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W9N6[0x34];                                  // 0x00E4(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FinishedMontages;                                        // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FTI6[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpGunAbilityTask_PlayWeaponMontage* PlayWeaponMontage(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FGameplayTagContainer& EventTags, class UAnimMontage* MontageWeaponFPS, class UAnimMontage* MontageWeaponTPS, class UAnimMontage* MontageHandsFPS, class UAnimMontage* MontageHandsTPS, int32_t MontagesToNotStopWhenAbilityEnds, float FPSPlayRate, float TPSPlayRate);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_SpawnProjectileClientSimulated : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5QRO[0x40];                                  // 0x00A0(0x0040) MISSED OFFSET (PADDING)

	public:
		class UUpGunAbilityTask_SpawnProjectileClientSimulated* SpawnPredictedProjectile(class UGameplayAbility* OwningAbility, const struct FTransform& Transform, const struct FVector& Velocity, class UClass* Class);
		void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AUpGunProjectileClientSimulated* SpawnedActor);
		bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AUpGunProjectileClientSimulated** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_Tick
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_Tick : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTick;                                                  // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpGunAbilityTask_Tick* Tick(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UUpGunAbilityTask_WaitTargetDataNoDestroy : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             Cancelled;                                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class UClass*                                              TargetClass;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KY7Z[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UUpGunAbilityTask_WaitTargetDataNoDestroy* WaitTargetDataNoDestroyUsingActor(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
		class UUpGunAbilityTask_WaitTargetDataNoDestroy* WaitTargetDataNoDestroy(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class UClass* Class);
		void OnTargetDataReplicatedCancelledCallback();
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
		bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunArena
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UUpGunArena : public UDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          Thumbnail;                                               // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level[0x28];                                             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTagContainer                               GameModes;                                               // 0x0078(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bIsAvailableInFreeVersion;                               // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRPW[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBaseCharacter
	 * Size -> 0x00C8 (FullSize[0x0580] - InheritedSize[0x04B8])
	 */
	class AUpGunBaseCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_GFJ9[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_M7CL[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    Camera;                                                  // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpringArmComponent*                                 HandsSpringArm;                                          // 0x04D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              HandsFPS;                                                // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunWeaponManagerComponent*                        WeaponManager;                                           // 0x04E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunCosmeticManager*                               CosmeticManager;                                         // 0x04F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     HatRootComponent;                                        // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticScreen;                                            // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDead;                                                 // 0x0508(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UO1F[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBasePlayerState*                               UpGunPlayerState;                                        // 0x0510(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUpGunTeamId                                        Team;                                                    // 0x0518(0x0001) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PUPA[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandingCapsuleRadiusScaled;                             // 0x051C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StandingCapsuleHalfHeightScaled;                         // 0x0520(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasBindAbilitiesInput;                                  // 0x0524(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UGAE[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantizeNormal                           HitDirectionBeforeDeath;                                 // 0x0528(0x000C) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMovementsEnabled;                                       // 0x0534(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WLJ2[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBasePlayerController*                          CurrentOrLastController;                                 // 0x0538(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnCharacterKilled;                                       // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateReplicated;                                 // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterLanded;                                       // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDamaged;                                               // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		float PlayAnimMontageOnMesh(class UAnimMontage* Montage, float InPlayRate, const class FName& StartSectionName, bool bStopAllMontages);
		void OnTeamUpdated(const struct FUpGunTeamId& Team);
		void OnRep_bMovementsEnabled();
		void OnCosmeticSettingsUpdated(const struct FUpGunCosmeticSettings& Settings);
		void MulticastKill(const struct FVector_NetQuantizeNormal& InLastHitDirection);
		void Kill(class AController* Killer, class AActor* DamageCauser);
		void EnableMovements();
		void DisableMovements();
		void ClientDamage(const struct FGameplayEffectSpecForRPC& Spec, float Amount);
		bool CanDamage(class AUpGunBaseCharacter* Other);
		void BP_OnSpawnDefaultPlayerWeapons();
		void BP_Kill(class AController* Killer, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDamageAttributeSet
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UUpGunDamageAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              Damage;                                                  // 0x0030(0x0010) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H94M[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBaseCharacterAttributeSet
	 * Size -> 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
	 */
	class UUpGunBaseCharacterAttributeSet : public UUpGunDamageAttributeSet
	{
	public:
		struct FGameplayAttributeData                              Health;                                                  // 0x0048(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              OverHealth;                                              // 0x0058(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealth;                                               // 0x0068(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WalkSpeed;                                               // 0x0078(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              CrouchSpeed;                                             // 0x0088(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              JumpVelocity;                                            // 0x0098(0x0010) Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              HeadArmor;                                               // 0x00A8(0x0010) NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Armor;                                                   // 0x00B8(0x0010) NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FireResistance;                                          // 0x00C8(0x0010) NativeAccessSpecifierPublic

	public:
		void OnRep_WalkSpeed(const struct FGameplayAttributeData& OldWalkSpeed);
		void OnRep_OverHealth(const struct FGameplayAttributeData& OldOverHealth);
		void OnRep_MaxHealth(const struct FGameplayAttributeData& OldMaxHealth);
		void OnRep_JumpVelocity(const struct FGameplayAttributeData& OldJumpVelocity);
		void OnRep_Health(const struct FGameplayAttributeData& OldHealth);
		void OnRep_CrouchSpeed(const struct FGameplayAttributeData& OldCrouchSpeed);
		float GetMaxOverHealth();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBaseGameSession
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class AUpGunBaseGameSession : public AGameSession
	{
	public:
		TArray<struct FUniqueNetIdRepl>                            BannedPlayers;                                           // 0x0238(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBaseHUD
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class AUpGunBaseHUD : public AHUD
	{
	public:
		TArray<struct FUpGunHUDWidgetContext>                      Widgets;                                                 // 0x0310(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    WidgetsNeedingMouse;                                     // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasCreatedWidgets;                                      // 0x0324(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7706[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (PADDING)

	public:
		void SwitchToUIInputs();
		void SwitchToGameOnlyInputs();
		void SwitchToGameAndUIInputs();
		void ShowWidget(class UUserWidget* Widget, bool bNeedMouse, bool bChangeVisibility, bool bInputUIOnly, bool bNonHitTestable);
		void HideWidget(class UUserWidget* Widget, bool bForceHide, bool bChangeVisibility, bool bFromInputUIOnly);
		void ForceFocusToViewport();
		void BP_CreateWidgets();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBasePlayerController
	 * Size -> 0x00A0 (FullSize[0x0610] - InheritedSize[0x0570])
	 */
	class AUpGunBasePlayerController : public APlayerController
	{
	public:
		class UClass*                                              DeathCameraActorClass;                                   // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              DeathCameraActor;                                        // 0x0578(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUpGunSynchronizedTimer                             RespawnTimer;                                            // 0x0580(0x0018) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FUpGunPlayerControllerDamageEvent>           DamageEvents;                                            // 0x0598(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class AUpGunBasePlayerState*                               PS;                                                      // 0x05A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MTLX[0x20];                                  // 0x05B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAcknowledgedPossession;                                // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDamagedPlayer;                                         // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGivedScore;                                            // 0x05F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMessageReceived;                                       // 0x0600(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetTeam(const struct FUpGunTeamId& ID);
		void SetMouseSensitivity(float Sensitivity);
		void ServerSetTeam(const struct FUpGunTeamId& ID);
		void ServerSendMessage(const struct FUpGunChatMessage& Message);
		void ServerSendCosmeticSettings(const struct FUpGunCosmeticSettings& CosmeticSettings);
		void SendMessage(const struct FUpGunChatMessage& Message);
		void SendCosmeticSettings(const struct FUpGunCosmeticSettings& CosmeticSettings);
		void ClientSendMessage(const struct FUpGunChatMessage& Message);
		void ClientOnStartedPlaying();
		void ClientOnPlayerDamagedMe(const struct FGameplayEffectSpecForRPC& EffectSpec, float Amount, class AUpGunBasePlayerState* Killer);
		void ClientOnDamagedOtherPlayer(const struct FGameplayEffectSpecForRPC& EffectSpec, float Amount, class AUpGunBasePlayerState* Victim);
		void ClientGivedScore(const struct FGameplayTag& ScoreTag, float Score, class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBasePlayerState
	 * Size -> 0x0140 (FullSize[0x0460] - InheritedSize[0x0320])
	 */
	class AUpGunBasePlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_7909[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunSkillManagerComponent*                         SkillManager;                                            // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunStatManager*                                   StatManager;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunBaseCharacterAttributeSet*                     BaseCharacterAttributeSet;                               // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunWeaponAttributeSet*                            WeaponAttributeSet;                                      // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          DefaultDataTable;                                        // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      DefaultAbilities;                                        // 0x0360(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
		struct FUpGunTeamId                                        Team;                                                    // 0x0370(0x0001) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4RV[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        State;                                                   // 0x0374(0x0008) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsHost;                                                 // 0x037C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5T1E[0x3];                                   // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUpGunCosmeticSettings                              CosmeticSettings;                                        // 0x0380(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		int32_t                                                    Kills;                                                   // 0x03E0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Deaths;                                                  // 0x03E4(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Assists;                                                 // 0x03E8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U66Q[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAbilitesUpdated;                                       // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAttributesInitialized;                                 // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerRespawned;                                       // 0x0410(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateUpdated;                                    // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamUpdated;                                           // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnScoreUpdated;                                          // 0x0440(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCosmeticSettingsUpdated;                               // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetState(const struct FGameplayTag& InState);
		void OnRep_Team();
		void OnRep_State(const struct FGameplayTag& InOldTag);
		void OnRep_CosmeticSettings();
		bool IsSpectator();
		bool IsInTheSameTeam(class AUpGunBasePlayerState* PS);
		float GetWalkSpeed();
		float GetTrueHealth();
		float GetMaxHealth();
		float GetJumpVelocity();
		float GetHealth();
		float GetCrouchSpeed();
		int32_t GetCorrectPing();
		bool GetCooldownInfosForTag(const struct FGameplayTagContainer& CooldownTags, float* TimeRemaining, float* Duration);
		class UUpGunGameplayAbility* GetAbilityByUpGunHandle(const struct FUpGunAbilitySpecHandle& Handle);
		class UUpGunGameplayAbility* GetAbilityByHandle(const struct FGameplayAbilitySpecHandle& Handle);
		void BP_SetPlayerName(const class FString& Name);
		void AddKill();
		void AddDeath();
		void AddAssist();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBasicDamageableActor
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class AUpGunBasicDamageableActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_65IW[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunDamageAttributeSet*                            DamageAttributeSet;                                      // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunBasicDamageableCharacter
	 * Size -> 0x0028 (FullSize[0x04E0] - InheritedSize[0x04B8])
	 */
	class AUpGunBasicDamageableCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_7PCH[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_GC52[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunDamageAttributeSet*                            DamageAttributeSet;                                      // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6Q4D[0x8];                                   // 0x04D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunCharacterMovementComponent
	 * Size -> 0x0010 (FullSize[0x0B10] - InheritedSize[0x0B00])
	 */
	class UUpGunCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		class AUpGunBaseCharacter*                                 UpGunOwner;                                              // 0x0B00(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXVS[0x8];                                   // 0x0B08(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunChatManagerComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UUpGunChatManagerComponent : public UActorComponent
	{
	public:
		TArray<struct FUpGunChatMessage>                           AwaitingMessages;                                        // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FUpGunChatRoom>                              Rooms;                                                   // 0x00C0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnRoomsUpdated;                                          // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRep_Rooms();
		struct FUpGunChatRoom GetRoomByName(const class FString& Name);
		struct FUpGunChatRoom GetRoomById(const struct FUpGunChatRoomId& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunChatStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunChatStatics : public UObject
	{
	public:
		bool NotEqual_UpGunChatRoomId(const struct FUpGunChatRoomId& A, const struct FUpGunChatRoomId& B);
		bool IsValid(const struct FUpGunChatRoomId& ID);
		int32_t GetChatMessageMaxLength();
		bool EqualEqual_UpGunChatRoomId(const struct FUpGunChatRoomId& A, const struct FUpGunChatRoomId& B);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunCosmeticManager
	 * Size -> 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
	 */
	class UUpGunCosmeticManager : public UActorComponent
	{
	public:
		class USceneComponent*                                     HatRootComponent;                                        // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              HatActor;                                                // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ArmorMat;                                                // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ScreenMat;                                               // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            RifleMat;                                                // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              HandsMesh;                                               // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMeshComponent*                                      ScreenMesh;                                              // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              RifleMesh;                                               // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       DefaultRifleMesh;                                        // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            KnifeMat;                                                // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              KnifeMesh;                                               // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMesh*                                       DefaultKnifeMesh;                                        // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArmorMatIndex;                                           // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ScreenMatIndex;                                          // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        ArmorColor;                                              // 0x0120(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldUseArmorColor;                                    // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8M1Q[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateCosmeticSettings(const struct FUpGunCosmeticSettings& Settings);
		void SetRifleMesh(class USkeletalMeshComponent* InMesh);
		void SetMesh(class USkeletalMeshComponent* InMesh, int32_t ArmorMaterialIndex, class UMeshComponent* InScreenMesh, int32_t ScreenMaterialIndex);
		void SetKnifeMesh(class USkeletalMeshComponent* InMesh);
		void SetHatRootComponent(class USceneComponent* InHatRootComponent);
		void SetHandsMesh(class USkeletalMeshComponent* InHandsMesh);
		void SetArmorColor(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunCosmeticDeveloperSettings
	 * Size -> 0x0100 (FullSize[0x0138] - InheritedSize[0x0038])
	 */
	class UUpGunCosmeticDeveloperSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              EquipmentDT[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ArmorsDT[0x28];                                          // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ScreensDT[0x28];                                         // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WeaponSkinsDT[0x28];                                     // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FDataTableRowHandle>                         DefaultCosmetics;                                        // 0x00D8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EUpGunCosmeticType, struct FDataTableRowHandle>       DefaultItems;                                            // 0x00E8(0x0050) Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunCosmeticSubsystem
	 * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
	 */
	class UUpGunCosmeticSubsystem : public UGameInstanceSubsystem
	{
	public:
		class UDataTable*                                          EquipmentsDT;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          ArmorsDT;                                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          ScreensDT;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          WeaponSkinsDT;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FString, class FName>                           EquipmentMap;                                            // 0x0050(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class FName>                           ArmorMap;                                                // 0x00A0(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class FName>                           ScreensMap;                                              // 0x00F0(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class FName>                           WeaponSkinsMap;                                          // 0x0140(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, EUpGunCosmeticType>                    CosmeticTypeMap;                                         // 0x0190(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              DefaultSkins[0x50];                                      // 0x01E0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		bool IsDefaultCosmetic(const struct FUpGunOSSItemId& ID);
		struct FUpGunWeaponSkin GetWeaponSkinById(const struct FUpGunOSSItemId& Repl, bool* Success);
		struct FUpGunScreen GetScreenById(const struct FUpGunOSSItemId& Repl, bool* Success);
		struct FUpGunEquipment GetEquipmentById(const struct FUpGunOSSItemId& Repl, bool* Success);
		TArray<struct FDataTableRowHandle> GetDefaultCosmetics();
		EUpGunCosmeticType GetCosmeticTypeById(const struct FUpGunOSSItemId& ID);
		struct FUpGunArmor GetArmorById(const struct FUpGunOSSItemId& Repl, bool* Success);
		struct FUpGunCosmeticSettings CreateDefaultCosmeticSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDamageableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunDamageableInterface : public UInterface
	{
	public:
		void Damage(const struct FGameplayEffectSpec& Spec, float Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunProjectileClientSimulated
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AUpGunProjectileClientSimulated : public AActor
	{
	public:
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector_NetQuantize                                 Velocity;                                                // 0x0228(0x000C) Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZNG[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_Velocity();
		void InitProjectile(const struct FVector& InVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDamageableProjectileClientSimulated
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class AUpGunDamageableProjectileClientSimulated : public AUpGunProjectileClientSimulated
	{
	public:
		unsigned char                                              UnknownData_2ZZK[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunDamageAttributeSet*                            DamageAttributeSet;                                      // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDamageExecutionCalculation
	 * Size -> 0x0140 (FullSize[0x0180] - InheritedSize[0x0040])
	 */
	class UUpGunDamageExecutionCalculation : public UGameplayEffectExecutionCalculation
	{
	public:
		unsigned char                                              UnknownData_DJNL[0x140];                                 // 0x0040(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDamageStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunDamageStatics : public UBlueprintFunctionLibrary
	{
	public:
		struct FGameplayEffectSpecHandle MakePointDamageSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel, const struct FHitResult& InHitResult);
		struct FGameplayTag GetDamageTypeFromGameplayEffectSpec(const struct FGameplayEffectSpec& Spec);
		struct FGameplayTag GetDamageTypeFromGameplayEffect(class UGameplayEffect* Effect);
		void ApplyRadialDamage(class UObject* WorldContextObject, class UClass* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel, float InMinDamage, float InDamage, float InInnerRadius, float InOuterRadius, float InFalloff, TArray<class AActor*> IgnoreActors);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchCharacter
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class AUpGunDeathmatchCharacter : public AUpGunBaseCharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UUpGunDeathmatchCheatManager : public UCheatManager
	{
	public:
		void SetTeam(const class FString& InTeam, const class FString& PlayerName);
		void NextRound();
		void GiveSkill(const class FString& InSkill, const class FString& PlayerName);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameModeBase
	 * Size -> 0x0068 (FullSize[0x0328] - InheritedSize[0x02C0])
	 */
	class AUpGunGameModeBase : public AGameModeBase
	{
	public:
		struct FGameplayTag                                        GameModeID;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SettingsClass;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSpawnPlayersOnStartGame;                                // 0x02D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreSeamlessTravelGameModeSettingsActor;              // 0x02D1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UDBC[0x6];                                   // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AUpGunSpawnPoint*>                            PlayerStarts;                                            // 0x02D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class AUpGunSpawnPoint*>                            SpectatorsPlayerStarts;                                  // 0x02E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class APlayerController*>                           PlayerControllers;                                       // 0x02F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AUpGunGameStateBase*                                 BaseGS;                                                  // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AssistValidityTime;                                      // 0x0310(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PlayerCount;                                             // 0x0314(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TravellingPlayerCount;                                   // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XPHT[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunGameModeSettings*                              GameSettings;                                            // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void RestartGame();
		void KickPlayer(class AUpGunBasePlayerState* PlayerState, const class FText& Reason);
		void BanPlayer(class AUpGunBasePlayerState* PlayerState, const class FText& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchGameMode
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class AUpGunDeathmatchGameMode : public AUpGunGameModeBase
	{
	public:
		class UClass*                                              GhostClass;                                              // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    AlivePlayers;                                            // 0x0330(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X8SH[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunDeathmatchGameState*                           DeathmatchGS;                                            // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunDeathmatchSettings*                            DeathmatchSettings;                                      // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PlayerCountThatSelectedSkill;                            // 0x0348(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IU4O[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunPodium*                                        Podium;                                                  // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameStateBase
	 * Size -> 0x00C0 (FullSize[0x0330] - InheritedSize[0x0270])
	 */
	class AUpGunGameStateBase : public AGameStateBase
	{
	public:
		class UUpGunChatManagerComponent*                          ChatManager;                                             // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUpGunGameModeEntry*                                 GameMode;                                                // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AUpGunGameModeSettings*                              GameModeSettings;                                        // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        State;                                                   // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FUpGunTeam>                                  Teams;                                                   // 0x0290(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		struct FUpGunSynchronizedTimer                             SynchronizedTimer;                                       // 0x02A0(0x0018) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		class AUpGunBasePlayerState*                               LeadingPlayer;                                           // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGameStateChanged;                                      // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeamsUpdated;                                          // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeadingPlayerUpdated;                                  // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerKilled;                                          // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateAdded;                                      // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateRemoved;                                    // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameModeSettingsRefUpdated;                            // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRep_Teams();
		void OnRep_State(const struct FGameplayTag& OldState);
		void OnRep_LeadingPlayer();
		void MulticastPlayerKilled(const struct FGameplayEffectSpecForRPC& Spec, float Amount, class AUpGunBasePlayerState* Victim, class AUpGunBasePlayerState* Killer);
		float GetTeamScore(const struct FUpGunTeamId& InId);
		struct FUpGunTeam GetTeamById(const struct FUpGunTeamId& InId);
		TArray<class APlayerState*> GetSortedByScorePlayers();
		class AUpGunGameModeSettings* GetGameModeSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchGameState
	 * Size -> 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
	 */
	class AUpGunDeathmatchGameState : public AUpGunGameStateBase
	{
	public:
		unsigned char                                              Round;                                                   // 0x0330(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P8SL[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoundChanged;                                          // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRep_Round(unsigned char OldRound);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchGhost
	 * Size -> 0x0048 (FullSize[0x0500] - InheritedSize[0x04B8])
	 */
	class AUpGunDeathmatchGhost : public ACharacter
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     HatRootComponent;                                        // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              BouhAbilityClass;                                        // 0x04D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunAbilitySystemComponent*                        AbilitySystem;                                           // 0x04D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunBasePlayerState*                               UpGunPlayerState;                                        // 0x04E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasBindAbilitiesInput;                                  // 0x04E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VM93[0x3];                                   // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilitySpecHandle                          BouhAbilityHandle;                                       // 0x04EC(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              HatActor;                                                // 0x04F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_43SE[0x8];                                   // 0x04F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnCosmeticSettingsUpdated(const struct FUpGunCosmeticSettings& Settings);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchPlayerController
	 * Size -> 0x0048 (FullSize[0x0658] - InheritedSize[0x0610])
	 */
	class AUpGunDeathmatchPlayerController : public AUpGunBasePlayerController
	{
	public:
		struct FGameplayTagContainer                               PickableSkills;                                          // 0x0610(0x0020) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        PickedSkill;                                             // 0x0630(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunDeathmatchGameState*                           DMGameState;                                             // 0x0638(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunDeathmatchPlayerState*                         DMPlayerState;                                           // 0x0640(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnPickableSkillsReceived;                                // 0x0648(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ServerPickSkill(const struct FGameplayTag& InId);
		void OnRep_PickableSkills();
		void ClientPickSkill(const struct FGameplayTag& InId);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchPlayerState
	 * Size -> 0x0030 (FullSize[0x0490] - InheritedSize[0x0460])
	 */
	class AUpGunDeathmatchPlayerState : public AUpGunBasePlayerState
	{
	public:
		unsigned char                                              Lifes;                                                   // 0x0460(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDead;                                                 // 0x0461(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4A2E[0x6];                                   // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunDeathmatchGhost*                               Ghost;                                                   // 0x0468(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             KilledPosition;                                          // 0x0470(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BTEB[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLifesChanged;                                          // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRep_Lifes(unsigned char OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameModeSettings
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class AUpGunGameModeSettings : public AInfo
	{
	public:
		float                                                      Gravity;                                                 // 0x0220(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BannedSkills_Limit;                                      // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4L1[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               BannedSkills;                                            // 0x0230(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    DefaultSkills_Limit;                                     // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYD9[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUpGunGameModeSettingsDefaultSkill>          DefaultSkills;                                           // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Mutators;                                                // 0x0268(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, RepNotify, NativeAccessSpecifierPublic
		bool                                                       bUseTeamColorsForArmors;                                 // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG1Z[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMutatorsUpdated;                                       // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void RemoveMutator(const struct FGameplayTag& InMutator);
		void OnRep_Mutators();
		bool IsTeamBased();
		bool CanStartGame();
		void AddMutator(const struct FGameplayTag& InMutator);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunDeathmatchSettings
	 * Size -> 0x0038 (FullSize[0x02D8] - InheritedSize[0x02A0])
	 */
	class AUpGunDeathmatchSettings : public AUpGunGameModeSettings
	{
	public:
		float                                                      TeamSelectionTime;                                       // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkillPickingTime;                                        // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoundTime;                                               // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostRoundTime;                                           // 0x02AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndGameTime;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostWaitingPlayersToJoinTeamTime;                        // 0x02B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LifeCount;                                               // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12T0[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RoundCount;                                              // 0x02BC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreeForAll;                                             // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFriendlyFire;                                           // 0x02C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSelectTeam;                                         // 0x02C2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYM1[0x5];                                   // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUpGunTeam>                                  Teams;                                                   // 0x02C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunFriendsStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunFriendsStatics : public UBlueprintFunctionLibrary
	{
	public:
		bool IsFriendPlayingThisGame(const struct FUpGunFriend& InFriend);
		bool IsFriendOnline(const struct FUpGunFriend& InFriend);
		class FString GetFriendName(const struct FUpGunFriend& InFriend);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunFriendsSubsystem
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UUpGunFriendsSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_IC9Z[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUpGunFriend>                                Friends;                                                 // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             FriendsChangedDelegate;                                  // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameInstance
	 * Size -> 0x0028 (FullSize[0x01D0] - InheritedSize[0x01A8])
	 */
	class UUpGunGameInstance : public UGameInstance
	{
	public:
		TArray<class FString>                                      UnauthorizedChatWords;                                   // 0x01A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bHasFullVersion;                                         // 0x01B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLAE[0x17];                                  // 0x01B9(0x0017) MISSED OFFSET (PADDING)

	public:
		void BP_OnNetworkError(ENetworkFailure Type, const class FString& Msg);
		void BP_OnInitialInventoryReady();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameModeEntry
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UUpGunGameModeEntry : public UDataAsset
	{
	public:
		class UClass*                                              GameModeClass;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          BackgroundImage;                                         // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SettingsWidgetClass;                                     // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAvailableInFreeVersion;                               // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY1S[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameNetworkManager
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class AUpGunGameNetworkManager : public AGameNetworkManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameplayAbility
	 * Size -> 0x0090 (FullSize[0x0440] - InheritedSize[0x03B0])
	 */
	class UUpGunGameplayAbility : public UGameplayAbility
	{
	public:
		EUpGunInput                                                InputSlot;                                               // 0x03B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              InputPriority;                                           // 0x03B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A4JW[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      CooldownDuration;                                        // 0x03B8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               CooldownTags;                                            // 0x03D8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPrivate
		bool                                                       bActivateOnGived;                                        // 0x03F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowInHUD;                                              // 0x03F9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5ZR9[0x6];                                   // 0x03FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HUDIcon;                                                 // 0x0400(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               TempCooldownTags;                                        // 0x0408(0x0020) Transient, NativeAccessSpecifierPrivate
		TArray<struct FUpGunAbilityMontageMesh>                    MontageMeshes;                                           // 0x0428(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    RandomSeed;                                              // 0x0438(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A025[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FGameplayTagContainer GetActivationOwnedTags();
		struct FGameplayTagContainer GetAbilityTags();
		void CancelAndTryOtherAbilityInInputSlot();
		void BP_InputPressed(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		struct FGameplayTagContainer BP_GetCooldownTags();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunGameplayCueManager
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UUpGunGameplayCueManager : public UGameplayCueManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunInputLocalPlayerSubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UUpGunInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_WM8H[0x9];                                   // 0x0030(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsGamepad;                                              // 0x0039(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MGIA[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpdateInputMode;                                       // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunInventorySettings
	 * Size -> 0x0188 (FullSize[0x01C0] - InheritedSize[0x0038])
	 */
	class UUpGunInventorySettings : public UDeveloperSettings
	{
	public:
		TArray<struct FUpGunOSSItemGenerator>                      Generators;                                              // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Hat;                                                     // 0x0048(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Armor;                                                   // 0x0068(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Screen;                                                  // 0x0088(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Gun;                                                     // 0x00A8(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Knife;                                                   // 0x00C8(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemTypeSettings                           Emote;                                                   // 0x00E8(0x0020) Edit, Config, NativeAccessSpecifierPublic
		struct FUpGunOSSItemRaritySettings                         Common;                                                  // 0x0108(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FUpGunOSSItemRaritySettings                         Uncommon;                                                // 0x012C(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FUpGunOSSItemRaritySettings                         Rare;                                                    // 0x0150(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FUpGunOSSItemRaritySettings                         Epic;                                                    // 0x0174(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FUpGunOSSItemRaritySettings                         Elite;                                                   // 0x0198(0x0024) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53MX[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunInventorySubsystem
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UUpGunInventorySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_S1M2[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryUpdated;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		bool TriggerItemDrop(const class FString& GeneratorId);
		bool HasItem(const struct FUpGunOSSItemId& InId);
		bool GivePromoItem(const struct FUpGunOSSItemId& InId);
		bool GiveItem(const struct FUpGunOSSItemId& InId);
		TArray<struct FUpGunInventoryItem> GetItems();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyCharacter
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class AUpGunLobbyCharacter : public AUpGunBaseCharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyGameMode
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class AUpGunLobbyGameMode : public AUpGunGameModeBase
	{
	public:
		class AUpGunLobbyGameState*                                LobbyGS;                                                 // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UUpGunGameModeEntry*>                         PossibleGameModes;                                       // 0x0330(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void LaunchGame();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyGameState
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class AUpGunLobbyGameState : public AUpGunGameStateBase
	{
	public:
		class UUpGunGameModeEntry*                                 SelectedGameMode;                                        // 0x0330(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AUpGunGameModeSettings*                              SelectedGameModeSettings;                                // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunArena*                                         Arena;                                                   // 0x0340(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UUpGunArena*>                                 Arenas;                                                  // 0x0348(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnLobbyGameModeUpdated;                                  // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyArenaUpdated;                                     // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectedGameModeSettingsUpdated;                       // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UpdateArenas();
		void SetSelectedGameMode(class UUpGunGameModeEntry* InGameMode);
		void SetArena(class UUpGunArena* InArena);
		void OnRep_SelectedGameModeSettings();
		void OnRep_SelectedGameMode();
		void OnRep_Arena();
		bool CanLaunchGame();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyPlayerController
	 * Size -> 0x0000 (FullSize[0x0610] - InheritedSize[0x0610])
	 */
	class AUpGunLobbyPlayerController : public AUpGunBasePlayerController
	{
	public:
		void ServerSwitchReadyState();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyPlayerState
	 * Size -> 0x0018 (FullSize[0x0478] - InheritedSize[0x0460])
	 */
	class AUpGunLobbyPlayerState : public AUpGunBasePlayerState
	{
	public:
		bool                                                       bIsReady;                                                // 0x0460(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1R4J[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReadyStateUpdated;                                     // 0x0468(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRep_bIsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbyStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunLobbyStatics : public UBlueprintFunctionLibrary
	{
	public:
		int32_t GetLobbyPing(const struct FUpGunLobbyData& Lobby);
		int32_t GetLobbyMaxPlayers(const struct FUpGunLobbyData& Lobby);
		class FText GetLobbyGameModeName(const struct FUpGunLobbyData& Lobby);
		int32_t GetLobbyConnectedPlayers(const struct FUpGunLobbyData& Lobby);
		class FText GetLobbyArenaName(const struct FUpGunLobbyData& Lobby);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLobbySubsystem
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UUpGunLobbySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_2FNR[0x78];                                  // 0x0030(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class APlayerController>                    PlayerWeakPtr;                                           // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DUW[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateGameModeAndArena(const class FString& GameMode, const class FString& Arena);
		bool SupportsJoiningByCode();
		void OnFindJoinByCodeCompleted(bool bSucceeded, TArray<struct FUpGunLobbyData> Data);
		void JoinLobbyByCode(class APlayerController* Player, const class FString& InCode, const class FScriptDelegate& OnCompleted);
		void JoinLobby(class APlayerController* Player, const struct FUpGunLobbyData& InLobby, const class FScriptDelegate& OnCompleted);
		void InviteFriend(const struct FUpGunFriend& InFriend);
		class FString GetLobbyName();
		class FString GetLobbyCode();
		bool FindLobbies(class APlayerController* Player, bool bRequiresFullVersion, const class FScriptDelegate& OnCompleted);
		bool DoesCurrentLobbyRequiresFullVersion();
		bool CreateLobby(class APlayerController* Player, const class FString& Name, int32_t MaxPlayers, bool bIsLAN, bool bIsPublicServer, bool bIsFriendsOnly, bool bRequiresFullVersion, const class FScriptDelegate& OnCompleted);
		void CopyLobbyCodeToClipboard();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunLocalPlayer
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class UUpGunLocalPlayer : public ULocalPlayer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMMC_RifleDamage
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UUpGunMMC_RifleDamage : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_7ED7[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMMC_LevelExponential
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UUpGunMMC_LevelExponential : public UGameplayModMagnitudeCalculation
	{
	public:
		float                                                      Base;                                                    // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6GHI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMMC_LustForLife
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UUpGunMMC_LustForLife : public UGameplayModMagnitudeCalculation
	{
	public:
		unsigned char                                              UnknownData_1OPF[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMMC_Skill_Regeneration
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UUpGunMMC_Skill_Regeneration : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMMC_Skill_SpeedIsKey
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UUpGunMMC_Skill_SpeedIsKey : public UGameplayModMagnitudeCalculation
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunMutator
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UUpGunMutator : public UDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                Achievement;                                             // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Tag;                                                     // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               IncompatibleGameModes;                                   // 0x0078(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAvailableInFreeVersion;                               // 0x0099(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYGT[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunPodium
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AUpGunPodium : public AActor
	{
	public:
		unsigned char                                              UnknownData_GMT3[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (PADDING)

	public:
		void SwitchToPodium(TArray<struct FUpGunPodiumPlayerInfos> InPlayers);
		void MulticastSwitchToPodium(TArray<struct FUpGunPodiumPlayerInfos> InPlayers);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunScoreDatabaseSubsystem
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UUpGunScoreDatabaseSubsystem : public UGameInstanceSubsystem
	{
	public:
		TArray<class UUpGunScoreEntry*>                            Scores;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               ReferencedGameplayEvents;                                // 0x0040(0x0020) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunScoreEntry
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UUpGunScoreEntry : public UDataAsset
	{
	public:
		struct FGameplayTag                                        ScoreTag;                                                // 0x0030(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameModes;                                               // 0x0038(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Events;                                                  // 0x0058(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      ScoreToAdd;                                              // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMUB[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                LinkedDamageTypes;                                       // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LinkedStat;                                              // 0x0090(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StatDelta;                                               // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV3R[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkill
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UUpGunSkill : public UDataAsset
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Help;                                                    // 0x0068(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EUpGunSkillCategory                                        Category;                                                // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelCount;                                              // 0x0081(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVY5[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Image;                                                   // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27ZV[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               RequiredSkills;                                          // 0x0098(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               BlockedSkills;                                           // 0x00B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      GameplayEffects;                                         // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      GameplayAbilities;                                       // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ReliableGameplayCues;                                    // 0x00F8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      WeaponAttachments;                                       // 0x0118(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               RequiredGameModes;                                       // 0x0128(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bIsAvailableInFreeVersion;                               // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAZS[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkillDatabaseSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUpGunSkillDatabaseSubsystem : public UGameInstanceSubsystem
	{
	public:
		TArray<class UUpGunSkill*>                                 Skills;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		int32_t GetSkillCount();
		class UUpGunSkill* GetSkillById(const struct FGameplayTag& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkillManagerBPLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunSkillManagerBPLib : public UBlueprintFunctionLibrary
	{
	public:
		class UUpGunSkillManagerComponent* GetSkillManager(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkillManagerComponent
	 * Size -> 0x0130 (FullSize[0x01E0] - InheritedSize[0x00B0])
	 */
	class UUpGunSkillManagerComponent : public UActorComponent
	{
	public:
		TMap<EUpGunSkillCategory, int32_t>                         SkillLimitsPerCategory;                                  // 0x00B0(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FUpGunSkillInstance>                         Skills;                                                  // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               SkillsIds;                                               // 0x0110(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate
		class AUpGunBasePlayerState*                               OwnerPS;                                                 // 0x0130(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UClass*>                                      WeaponAttachments;                                       // 0x0138(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, float>                           SkillAddedWeightsMap;                                    // 0x0148(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEEY[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSkillsUpdated;                                         // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBTK[0x20];                                  // 0x01C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnRep_Skills();
		bool HasSkill(const struct FGameplayTag& SkillId);
		void GiveSkill(const struct FGameplayTag& SkillId, unsigned char Level);
		unsigned char GetSkillLevel(const struct FGameplayTag& SkillId);
		bool CanHaveSkill(const struct FGameplayTag& SkillId);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkillManagerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunSkillManagerInterface : public UInterface
	{
	public:
		class UUpGunSkillManagerComponent* GetSkillManager();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSkillTPDisk
	 * Size -> 0x0074 (FullSize[0x03B0] - InheritedSize[0x033C])
	 */
	class AUpGunSkillTPDisk : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_6IB6[0x4];                                   // 0x033C(0x0004) Fix Super Size
		unsigned char                                              UnknownData_WM35[0x8];                                   // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       Box;                                                     // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PlayerStartLocation;                                     // 0x0370(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FWMQ[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   ObstacleObjectTypes;                                     // 0x0380(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPrivate
		float                                                      CapsuleRadius;                                           // 0x0390(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CapsuleHalfHeight;                                       // 0x0394(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUpGunDamageAttributeSet*                            DamageAttributeSet;                                      // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             LastValidLocation;                                       // 0x03A0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanTeleportPlayer;                                      // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCalledCancelled;                                        // 0x03AD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDestroyed;                                              // 0x03AE(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IK18[0x1];                                   // 0x03AF(0x0001) MISSED OFFSET (PADDING)

	public:
		void OnRep_Destroyed();
		void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BP_Destroyed();
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSpawnPoint
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class AUpGunSpawnPoint : public APlayerStart
	{
	public:
		struct FGameplayTag                                        SpawnPointType;                                          // 0x0250(0x0008) Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSpectatorMovementComponent
	 * Size -> 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
	 */
	class UUpGunSpectatorMovementComponent : public USpectatorPawnMovement
	{
	public:
		unsigned char                                              UnknownData_T2O3[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)

	public:
		void ServerMove(const struct FUpGunSpectatorOwningClientMove& Move);
		void ClientMove(const struct FVector_NetQuantize100& CorrectedLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSpectatorPawn
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class AUpGunSpectatorPawn : public ASpectatorPawn
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TargetLocation;                                          // 0x02B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XZJY[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextRenderComponent*                                TextRenderComponent;                                     // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ServerUpdateRotation(const struct FRotator& InRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunStatManager
	 * Size -> 0x00B0 (FullSize[0x0160] - InheritedSize[0x00B0])
	 */
	class UUpGunStatManager : public UActorComponent
	{
	public:
		TArray<struct FUpGunStatManagerStat>                       Stats;                                                   // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FGameplayTag, int32_t>                         StatMap;                                                 // 0x00C0(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              DirtyStats[0x50];                                        // 0x0110(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		struct FUpGunStatManagerStat GetStat(const struct FGameplayTag& InId);
		void ClientUpdateStats(TArray<struct FGameplayTag> InIds, TArray<float> InNewValues);
		void AddIntStat(const struct FGameplayTag& InId, int32_t InDelta);
		void AddFloatStat(const struct FGameplayTag& InId, float InDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunStatSubsystem
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UUpGunStatSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_F0EZ[0xA8];                                  // 0x0030(0x00A8) MISSED OFFSET (PADDING)

	public:
		bool UnlockAchievement(const class FString& ID);
		bool SetIntStat(const struct FGameplayTag& Stat, int32_t Data);
		bool SetFloatStat(const struct FGameplayTag& Stat, float Data);
		bool GetStatType(const struct FGameplayTag& Stat, EUpGunStatType* Type);
		bool GetStatOSSUpdateMode(const struct FGameplayTag& Stat, EUpGunStatOSSUpdateMode* Mode);
		bool GetStatName(const struct FGameplayTag& Stat, class FText* Name);
		bool GetIntStat(const struct FGameplayTag& Stat, int32_t* Data);
		bool GetFloatStat(const struct FGameplayTag& Stat, float* Data);
		bool GetAchievementProgress(const class FString& ID, float* Percentage);
		class FString GetAchievementName(const class FString& ID);
		class FString GetAchievementDescription(const class FString& ID);
		bool GetAchievement(const class FString& ID, bool* bIsAchieved);
		void FlushStats();
		bool AddIntStat(const struct FGameplayTag& Stat, int32_t Data);
		bool AddFloatStat(const struct FGameplayTag& Stat, float Data);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunStatDeveloperSettings
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UUpGunStatDeveloperSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              StatsDT[0x28];                                           // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunSynchronizedTimerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsFinished(const struct FUpGunSynchronizedTimer& InTimer);
		float GetRemainingTime(const struct FUpGunSynchronizedTimer& InTimer);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunUtilsBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunUtilsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString ToString(const struct FUniqueNetIdRepl& ID);
		TArray<class AUpGunBasePlayerState*> SortPlayerStateArray(TArray<class AUpGunBasePlayerState*> inArray);
		bool IsWorldTearingDown(class UObject* WorldContextObject);
		bool IsBuildShipping();
		class FString GetVersion();
		struct FUniqueNetIdRepl GetUniqueNetIdFromPlayerState(class APlayerState* PS);
		struct FUpGunTargetData_SkillTPDisk GetSkillTPDisk_TargetData(const struct FGameplayAbilityTargetDataHandle& Handle);
		int32_t GetMaxPlayers();
		struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpec& InSpec);
		class UUpGunArena* GetArena(class UObject* WorldContextObject);
		TArray<struct FGameplayTag> GetAllSubTags(const class FName& TagName);
		void AntiSpam(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunUtilsBPLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunUtilsBPLib : public UBlueprintFunctionLibrary
	{
	public:
		class UObject* GetDefaultObject(class UClass* Class);
		TArray<struct FGameplayAbilitySpec> GetAbilitySpecsFromContainer(const struct FGameplayAbilitySpecContainer& Container);
		EUpGunInput GetAbilityInputSlotFromAbilitySpec(const struct FGameplayAbilitySpec& InSpec);
		class UGameplayAbility* GetAbilityCDOFromAbilitySpec(const struct FGameplayAbilitySpec& InSpec);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWeapon
	 * Size -> 0x0098 (FullSize[0x02B8] - InheritedSize[0x0220])
	 */
	class AUpGunWeapon : public AActor
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              FPSSkeletalMesh;                                         // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              TPSSkeletalMesh;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        Type;                                                    // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Magazine;                                                // 0x0240(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Ammo;                                                    // 0x0241(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y8IN[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunBaseCharacter*                                 CharacterOwner;                                          // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ProjectileClass;                                         // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                FireOriginSocket;                                        // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AUpGunWeaponAttachment*>                      Attachments;                                             // 0x0260(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NativeAccessSpecifierPrivate
		TArray<class FName>                                        AttachmentsSockets;                                      // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<struct FUpGunWeaponProjectileFireRPC>               CurrentFrameFireRPCs;                                    // 0x0280(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H2O8[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWeaponAmmoChanged;                                     // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWeaponMagazineChanged;                                 // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SpawnProjectile(const struct FVector& Direction, float SyncChance);
		void ShowWeaponLocal(bool bAffectFPS, bool bAffectTPS);
		void Reload();
		void OnRep_Magazine(unsigned char OldMagazine);
		void OnRep_CharacterOwner();
		void OnRep_Attachments();
		void OnRep_Ammo(unsigned char OldAmmo);
		void OnFired();
		void MulticastSpawnProjectile(TArray<struct FUpGunWeaponProjectileFireRPC> RPCs);
		bool IsFull();
		bool IsEmpty();
		void HideWeaponLocal(bool bAffectFPS, bool bAffectTPS);
		class USkeletalMeshComponent* GetUsableMesh(bool bIsLocallyControlled);
		void Fire(float SyncChance);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWeaponAttachment
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AUpGunWeaponAttachment : public AActor
	{
	public:
		struct FGameplayTag                                        WeaponTag;                                               // 0x0220(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              ParentWeaponMesh;                                        // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWeaponAttributeSet
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UUpGunWeaponAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              RifleFireRate;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RifleDamage;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RifleBulletSpeed;                                        // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RifleMagazine;                                           // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RifleDispersion;                                         // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RifleCriticalHitChance;                                  // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              KnifeDamage;                                             // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              DamageBaseMultiplier;                                    // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              HeadshotMultiplier;                                      // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void OnRep_RifleFireRate(const struct FGameplayAttributeData& OldRifleFireRate);
		void OnRep_RifleDispersion(const struct FGameplayAttributeData& OldRifleDispersion);
		void OnRep_RifleDamage(const struct FGameplayAttributeData& OldRifleDamage);
		void OnRep_RifleCriticalHitChance(const struct FGameplayAttributeData& OldRifleCriticalHitChance);
		void OnRep_RifleBulletSpeed(const struct FGameplayAttributeData& OldRifleBulletSpeed);
		void OnRep_DamageBaseMultiplier(const struct FGameplayAttributeData& OldDamageBaseMultiplier);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWeaponManagerComponent
	 * Size -> 0x0190 (FullSize[0x0240] - InheritedSize[0x00B0])
	 */
	class UUpGunWeaponManagerComponent : public UActorComponent
	{
	public:
		class AUpGunWeapon*                                        CurrentWeapon;                                           // 0x00B0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUpGunWeaponManagerWeaponInfoContainer              Weapons;                                                 // 0x00B8(0x0120) Net, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              FPSRig;                                                  // 0x01D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              TPSRig;                                                  // 0x01E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                FPSRigSocketName;                                        // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                TPSRigSocketName;                                        // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               WeaponsPendingGameplayTag;                               // 0x01F8(0x0020) NativeAccessSpecifierPrivate
		class AUpGunBaseCharacter*                                 CharacterOwner;                                          // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWeaponEquipped;                                        // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCurrentWeaponChanged;                                  // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UnequipWeapon(class AUpGunWeapon* Weapon);
		void SwitchWeapon(const struct FGameplayTag& InTag);
		void ShowWeaponsLocal(bool bOnlyCurrentWeapon, bool bAffectFPS, bool bAffectTPS);
		void OnRep_CurrentWeapon(class AUpGunWeapon* OldWeapon);
		void HideWeaponsLocal(bool bOnlyCurrentWeapon, bool bAffectFPS, bool bAffectTPS);
		class AUpGunWeapon* GetWeaponByGameplayTag(const struct FGameplayTag& Tag);
		class AUpGunWeapon* GetCurrentWeapon();
		int32_t Fire(float SyncChance);
		void EquipWeapon(class AUpGunWeapon* Weapon);
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWeaponProjectile
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class AUpGunWeaponProjectile : public AActor
	{
	public:
		class USphereComponent*                                    CollisionSphere;                                         // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class USceneComponent>                      VisualComponent;                                         // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SyncChance;                                              // 0x0238(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R30A[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWidgetBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUpGunWidgetBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWorldSettingsDeveloperSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UUpGunWorldSettingsDeveloperSettings : public UDeveloperSettings
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0038(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UpGun.UpGunWorldSettings
	 * Size -> 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
	 */
	class AUpGunWorldSettings : public AWorldSettings
	{
	public:
		class UClass*                                              KillZGameplayEffect;                                     // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
