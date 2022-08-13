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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UpGun.HorrorMultiplayerSyncComponent.OnRep_Transforms
	 */
	struct UHorrorMultiplayerSyncComponent_OnRep_Transforms_Params
	{	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.ResetCooldowns
	 */
	struct UUpGunAbilitySystemComponent_ResetCooldowns_Params
	{	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.RemoveGameplayCueLocal
	 */
	struct UUpGunAbilitySystemComponent_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.OnRep_ReplicatedAbilitiesMontages
	 */
	struct UUpGunAbilitySystemComponent_OnRep_ReplicatedAbilitiesMontages_Params
	{	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.OnRep_CurrentReliableGameplayCues
	 */
	struct UUpGunAbilitySystemComponent_OnRep_CurrentReliableGameplayCues_Params
	{	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.MulticastExecuteGameplayCue
	 */
	struct UUpGunAbilitySystemComponent_MulticastExecuteGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.MulticastAddGameplayCue
	 */
	struct UUpGunAbilitySystemComponent_MulticastAddGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.ExecuteReliableGameplayCue
	 */
	struct UUpGunAbilitySystemComponent_ExecuteReliableGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.ExecuteGameplayCueLocal
	 */
	struct UUpGunAbilitySystemComponent_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.BP_CancelAbility
	 */
	struct UUpGunAbilitySystemComponent_BP_CancelAbility_Params
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.AddReliableGameplayCue
	 */
	struct UUpGunAbilitySystemComponent_AddReliableGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.AddGameplayCueLocal
	 */
	struct UUpGunAbilitySystemComponent_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemComponent.AddAttributeSet
	 */
	struct UUpGunAbilitySystemComponent_AddAttributeSet_Params
	{
	public:
		class UAttributeSet*                                       Set;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemWidget.ListenForGameplayTag
	 */
	struct UUpGunAbilitySystemWidget_ListenForGameplayTag_Params
	{
	public:
		EGameplayTagEventType                                      Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XVW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InEvent;                                                 // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemWidget.ListenForAttributes
	 */
	struct UUpGunAbilitySystemWidget_ListenForAttributes_Params
	{
	public:
		TArray<struct FGameplayAttribute>                          Attributes;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InEvent;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitialCall;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilitySystemWidget.ListenForAttribute
	 */
	struct UUpGunAbilitySystemWidget_ListenForAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InEvent;                                                 // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitialCall;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0049(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_ApplyComponentConstantRootMotion.ApplyComponentConstantRootMotion
	 */
	struct UUpGunAbilityTask_ApplyComponentConstantRootMotion_ApplyComponentConstantRootMotion_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Component;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAdditive;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L6IW[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampVelocityOnFinish;                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnableGravity;                                          // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VVK0[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpGunAbilityTask_ApplyComponentConstantRootMotion*  ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_JackRepeatAction.ContinuouslyRepeatAction
	 */
	struct UUpGunAbilityTask_JackRepeatAction_ContinuouslyRepeatAction_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeBetweenActions;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S0J9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpGunAbilityTask_JackRepeatAction*                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent
	 */
	struct UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent_PlayMontageForMeshAndWaitForEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0020(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WN0H[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplicateMontage;                                       // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OH7I[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideBlendOutTimeForCancelAbility;                    // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OverrideBlendOutTimeForStopWhenEndAbility;               // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent* ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_PlayWeaponMontage.PlayWeaponMontage
	 */
	struct UUpGunAbilityTask_PlayWeaponMontage_PlayWeaponMontage_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageWeaponFPS;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageWeaponTPS;                                        // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageHandsFPS;                                         // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageHandsTPS;                                         // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MontagesToNotStopWhenAbilityEnds;                        // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FPSPlayRate;                                             // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TPSPlayRate;                                             // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3PTX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpGunAbilityTask_PlayWeaponMontage*                 ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.SpawnPredictedProjectile
	 */
	struct UUpGunAbilityTask_SpawnProjectileClientSimulated_SpawnPredictedProjectile_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MF2S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0040(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8OWV[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Class;                                                   // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunAbilityTask_SpawnProjectileClientSimulated*    ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.FinishSpawningActor
	 */
	struct UUpGunAbilityTask_SpawnProjectileClientSimulated_FinishSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class AUpGunProjectileClientSimulated*                     SpawnedActor;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.BeginSpawningActor
	 */
	struct UUpGunAbilityTask_SpawnProjectileClientSimulated_BeginSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AUpGunProjectileClientSimulated*                     SpawnedActor;                                            // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_Tick.Tick
	 */
	struct UUpGunAbilityTask_Tick_Tick_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunAbilityTask_Tick*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroyUsingActor
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_WaitTargetDataNoDestroyUsingActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y0Y4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunAbilityTask_WaitTargetDataNoDestroy*           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroy
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_WaitTargetDataNoDestroy_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CWC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Class;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunAbilityTask_WaitTargetDataNoDestroy*           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCancelledCallback
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReplicatedCancelledCallback_Params
	{	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCallback
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReadyCallback
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReadyCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataCancelledCallback
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataCancelledCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.FinishSpawningActor
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_FinishSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.BeginSpawningActor
	 */
	struct UUpGunAbilityTask_WaitTargetDataNoDestroy_BeginSpawningActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.PlayAnimMontageOnMesh
	 */
	struct AUpGunBaseCharacter_PlayAnimMontageOnMesh_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopAllMontages;                                        // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O4D3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.OnTeamUpdated
	 */
	struct AUpGunBaseCharacter_OnTeamUpdated_Params
	{
	public:
		struct FUpGunTeamId                                        Team;                                                    // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.OnRep_bMovementsEnabled
	 */
	struct AUpGunBaseCharacter_OnRep_bMovementsEnabled_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseCharacter.OnCosmeticSettingsUpdated
	 */
	struct AUpGunBaseCharacter_OnCosmeticSettingsUpdated_Params
	{
	public:
		struct FUpGunCosmeticSettings                              Settings;                                                // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.MulticastKill
	 */
	struct AUpGunBaseCharacter_MulticastKill_Params
	{
	public:
		struct FVector_NetQuantizeNormal                           InLastHitDirection;                                      // 0x0000(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.Kill
	 */
	struct AUpGunBaseCharacter_Kill_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.EnableMovements
	 */
	struct AUpGunBaseCharacter_EnableMovements_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseCharacter.DisableMovements
	 */
	struct AUpGunBaseCharacter_DisableMovements_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseCharacter.ClientDamage
	 */
	struct AUpGunBaseCharacter_ClientDamage_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.CanDamage
	 */
	struct AUpGunBaseCharacter_CanDamage_Params
	{
	public:
		class AUpGunBaseCharacter*                                 Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacter.BP_OnSpawnDefaultPlayerWeapons
	 */
	struct AUpGunBaseCharacter_BP_OnSpawnDefaultPlayerWeapons_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseCharacter.BP_Kill
	 */
	struct AUpGunBaseCharacter_BP_Kill_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_WalkSpeed
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_WalkSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldWalkSpeed;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_OverHealth
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_OverHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldOverHealth;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_MaxHealth
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_MaxHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldMaxHealth;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_JumpVelocity
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_JumpVelocity_Params
	{
	public:
		struct FGameplayAttributeData                              OldJumpVelocity;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_Health
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_Health_Params
	{
	public:
		struct FGameplayAttributeData                              OldHealth;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_CrouchSpeed
	 */
	struct UUpGunBaseCharacterAttributeSet_OnRep_CrouchSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldCrouchSpeed;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseCharacterAttributeSet.GetMaxOverHealth
	 */
	struct UUpGunBaseCharacterAttributeSet_GetMaxOverHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseHUD.SwitchToUIInputs
	 */
	struct AUpGunBaseHUD_SwitchToUIInputs_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseHUD.SwitchToGameOnlyInputs
	 */
	struct AUpGunBaseHUD_SwitchToGameOnlyInputs_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseHUD.SwitchToGameAndUIInputs
	 */
	struct AUpGunBaseHUD_SwitchToGameAndUIInputs_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseHUD.ShowWidget
	 */
	struct AUpGunBaseHUD_ShowWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNeedMouse;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChangeVisibility;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInputUIOnly;                                            // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNonHitTestable;                                         // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseHUD.HideWidget
	 */
	struct AUpGunBaseHUD_HideWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceHide;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChangeVisibility;                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromInputUIOnly;                                        // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBaseHUD.ForceFocusToViewport
	 */
	struct AUpGunBaseHUD_ForceFocusToViewport_Params
	{	};

	/**
	 * Function UpGun.UpGunBaseHUD.BP_CreateWidgets
	 */
	struct AUpGunBaseHUD_BP_CreateWidgets_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerController.SetTeam
	 */
	struct AUpGunBasePlayerController_SetTeam_Params
	{
	public:
		struct FUpGunTeamId                                        ID;                                                      // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.SetMouseSensitivity
	 */
	struct AUpGunBasePlayerController_SetMouseSensitivity_Params
	{
	public:
		float                                                      Sensitivity;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ServerSetTeam
	 */
	struct AUpGunBasePlayerController_ServerSetTeam_Params
	{
	public:
		struct FUpGunTeamId                                        ID;                                                      // 0x0000(0x0001)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ServerSendMessage
	 */
	struct AUpGunBasePlayerController_ServerSendMessage_Params
	{
	public:
		struct FUpGunChatMessage                                   Message;                                                 // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ServerSendCosmeticSettings
	 */
	struct AUpGunBasePlayerController_ServerSendCosmeticSettings_Params
	{
	public:
		struct FUpGunCosmeticSettings                              CosmeticSettings;                                        // 0x0000(0x0060)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.SendMessage
	 */
	struct AUpGunBasePlayerController_SendMessage_Params
	{
	public:
		struct FUpGunChatMessage                                   Message;                                                 // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.SendCosmeticSettings
	 */
	struct AUpGunBasePlayerController_SendCosmeticSettings_Params
	{
	public:
		struct FUpGunCosmeticSettings                              CosmeticSettings;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ClientSendMessage
	 */
	struct AUpGunBasePlayerController_ClientSendMessage_Params
	{
	public:
		struct FUpGunChatMessage                                   Message;                                                 // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ClientOnStartedPlaying
	 */
	struct AUpGunBasePlayerController_ClientOnStartedPlaying_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ClientOnPlayerDamagedMe
	 */
	struct AUpGunBasePlayerController_ClientOnPlayerDamagedMe_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           EffectSpec;                                              // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W5E4[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AUpGunBasePlayerState*                               Killer;                                                  // 0x0080(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ClientOnDamagedOtherPlayer
	 */
	struct AUpGunBasePlayerController_ClientOnDamagedOtherPlayer_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           EffectSpec;                                              // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8PVH[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AUpGunBasePlayerState*                               Victim;                                                  // 0x0080(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerController.ClientGivedScore
	 */
	struct AUpGunBasePlayerController_ClientGivedScore_Params
	{
	public:
		struct FGameplayTag                                        ScoreTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Score;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WRIW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.SetState
	 */
	struct AUpGunBasePlayerState_SetState_Params
	{
	public:
		struct FGameplayTag                                        InState;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.OnRep_Team
	 */
	struct AUpGunBasePlayerState_OnRep_Team_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerState.OnRep_State
	 */
	struct AUpGunBasePlayerState_OnRep_State_Params
	{
	public:
		struct FGameplayTag                                        InOldTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.OnRep_CosmeticSettings
	 */
	struct AUpGunBasePlayerState_OnRep_CosmeticSettings_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerState.IsSpectator
	 */
	struct AUpGunBasePlayerState_IsSpectator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.IsInTheSameTeam
	 */
	struct AUpGunBasePlayerState_IsInTheSameTeam_Params
	{
	public:
		class AUpGunBasePlayerState*                               PS;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetWalkSpeed
	 */
	struct AUpGunBasePlayerState_GetWalkSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetTrueHealth
	 */
	struct AUpGunBasePlayerState_GetTrueHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetMaxHealth
	 */
	struct AUpGunBasePlayerState_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetJumpVelocity
	 */
	struct AUpGunBasePlayerState_GetJumpVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetHealth
	 */
	struct AUpGunBasePlayerState_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetCrouchSpeed
	 */
	struct AUpGunBasePlayerState_GetCrouchSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetCorrectPing
	 */
	struct AUpGunBasePlayerState_GetCorrectPing_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetCooldownInfosForTag
	 */
	struct AUpGunBasePlayerState_GetCooldownInfosForTag_Params
	{
	public:
		struct FGameplayTagContainer                               CooldownTags;                                            // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      TimeRemaining;                                           // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetAbilityByUpGunHandle
	 */
	struct AUpGunBasePlayerState_GetAbilityByUpGunHandle_Params
	{
	public:
		struct FUpGunAbilitySpecHandle                             Handle;                                                  // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UUpGunGameplayAbility*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.GetAbilityByHandle
	 */
	struct AUpGunBasePlayerState_GetAbilityByHandle_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YDGK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpGunGameplayAbility*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.BP_SetPlayerName
	 */
	struct AUpGunBasePlayerState_BP_SetPlayerName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunBasePlayerState.AddKill
	 */
	struct AUpGunBasePlayerState_AddKill_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerState.AddDeath
	 */
	struct AUpGunBasePlayerState_AddDeath_Params
	{	};

	/**
	 * Function UpGun.UpGunBasePlayerState.AddAssist
	 */
	struct AUpGunBasePlayerState_AddAssist_Params
	{	};

	/**
	 * Function UpGun.UpGunChatManagerComponent.OnRep_Rooms
	 */
	struct UUpGunChatManagerComponent_OnRep_Rooms_Params
	{	};

	/**
	 * Function UpGun.UpGunChatManagerComponent.GetRoomByName
	 */
	struct UUpGunChatManagerComponent_GetRoomByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUpGunChatRoom                                      ReturnValue;                                             // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunChatManagerComponent.GetRoomById
	 */
	struct UUpGunChatManagerComponent_GetRoomById_Params
	{
	public:
		struct FUpGunChatRoomId                                    ID;                                                      // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A00W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunChatRoom                                      ReturnValue;                                             // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunChatStatics.NotEqual_UpGunChatRoomId
	 */
	struct UUpGunChatStatics_NotEqual_UpGunChatRoomId_Params
	{
	public:
		struct FUpGunChatRoomId                                    A;                                                       // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FUpGunChatRoomId                                    B;                                                       // 0x0001(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunChatStatics.IsValid
	 */
	struct UUpGunChatStatics_IsValid_Params
	{
	public:
		struct FUpGunChatRoomId                                    ID;                                                      // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunChatStatics.GetChatMessageMaxLength
	 */
	struct UUpGunChatStatics_GetChatMessageMaxLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunChatStatics.EqualEqual_UpGunChatRoomId
	 */
	struct UUpGunChatStatics_EqualEqual_UpGunChatRoomId_Params
	{
	public:
		struct FUpGunChatRoomId                                    A;                                                       // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FUpGunChatRoomId                                    B;                                                       // 0x0001(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.UpdateCosmeticSettings
	 */
	struct UUpGunCosmeticManager_UpdateCosmeticSettings_Params
	{
	public:
		struct FUpGunCosmeticSettings                              Settings;                                                // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetRifleMesh
	 */
	struct UUpGunCosmeticManager_SetRifleMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetMesh
	 */
	struct UUpGunCosmeticManager_SetMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArmorMaterialIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1EXS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMeshComponent*                                      InScreenMesh;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ScreenMaterialIndex;                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetKnifeMesh
	 */
	struct UUpGunCosmeticManager_SetKnifeMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetHatRootComponent
	 */
	struct UUpGunCosmeticManager_SetHatRootComponent_Params
	{
	public:
		class USceneComponent*                                     InHatRootComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetHandsMesh
	 */
	struct UUpGunCosmeticManager_SetHandsMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InHandsMesh;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticManager.SetArmorColor
	 */
	struct UUpGunCosmeticManager_SetArmorColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.IsDefaultCosmetic
	 */
	struct UUpGunCosmeticSubsystem_IsDefaultCosmetic_Params
	{
	public:
		struct FUpGunOSSItemId                                     ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetWeaponSkinById
	 */
	struct UUpGunCosmeticSubsystem_GetWeaponSkinById_Params
	{
	public:
		struct FUpGunOSSItemId                                     Repl;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KTJM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunWeaponSkin                                    ReturnValue;                                             // 0x0018(0x0198)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetScreenById
	 */
	struct UUpGunCosmeticSubsystem_GetScreenById_Params
	{
	public:
		struct FUpGunOSSItemId                                     Repl;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G6CZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunScreen                                        ReturnValue;                                             // 0x0018(0x00D8)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetEquipmentById
	 */
	struct UUpGunCosmeticSubsystem_GetEquipmentById_Params
	{
	public:
		struct FUpGunOSSItemId                                     Repl;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X4YP[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunEquipment                                     ReturnValue;                                             // 0x0020(0x0190)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetDefaultCosmetics
	 */
	struct UUpGunCosmeticSubsystem_GetDefaultCosmetics_Params
	{
	public:
		TArray<struct FDataTableRowHandle>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetCosmeticTypeById
	 */
	struct UUpGunCosmeticSubsystem_GetCosmeticTypeById_Params
	{
	public:
		struct FUpGunOSSItemId                                     ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpGunCosmeticType                                         ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.GetArmorById
	 */
	struct UUpGunCosmeticSubsystem_GetArmorById_Params
	{
	public:
		struct FUpGunOSSItemId                                     Repl;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_50J3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunArmor                                         ReturnValue;                                             // 0x0018(0x0140)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunCosmeticSubsystem.CreateDefaultCosmeticSettings
	 */
	struct UUpGunCosmeticSubsystem_CreateDefaultCosmeticSettings_Params
	{
	public:
		struct FUpGunCosmeticSettings                              ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDamageableInterface.Damage
	 */
	struct UUpGunDamageableInterface_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunProjectileClientSimulated.OnRep_Velocity
	 */
	struct AUpGunProjectileClientSimulated_OnRep_Velocity_Params
	{	};

	/**
	 * Function UpGun.UpGunProjectileClientSimulated.InitProjectile
	 */
	struct AUpGunProjectileClientSimulated_InitProjectile_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDamageStatics.MakePointDamageSpecHandle
	 */
	struct UUpGunDamageStatics_MakePointDamageSpecHandle_Params
	{
	public:
		class UGameplayEffect*                                     InGameplayEffect;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InInstigator;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLevel;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          InHitResult;                                             // 0x001C(0x008C)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x00A8(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffectSpec
	 */
	struct UUpGunDamageStatics_GetDamageTypeFromGameplayEffectSpec_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0298(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffect
	 */
	struct UUpGunDamageStatics_GetDamageTypeFromGameplayEffect_Params
	{
	public:
		class UGameplayEffect*                                     Effect;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDamageStatics.ApplyRadialDamage
	 */
	struct UUpGunDamageStatics_ApplyRadialDamage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InGameplayEffect;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InInstigator;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLevel;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMinDamage;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDamage;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InInnerRadius;                                           // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InOuterRadius;                                           // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InFalloff;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchCheatManager.SetTeam
	 */
	struct UUpGunDeathmatchCheatManager_SetTeam_Params
	{
	public:
		class FString                                              InTeam;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchCheatManager.NextRound
	 */
	struct UUpGunDeathmatchCheatManager_NextRound_Params
	{	};

	/**
	 * Function UpGun.UpGunDeathmatchCheatManager.GiveSkill
	 */
	struct UUpGunDeathmatchCheatManager_GiveSkill_Params
	{
	public:
		class FString                                              InSkill;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeBase.RestartGame
	 */
	struct AUpGunGameModeBase_RestartGame_Params
	{	};

	/**
	 * Function UpGun.UpGunGameModeBase.KickPlayer
	 */
	struct AUpGunGameModeBase_KickPlayer_Params
	{
	public:
		class AUpGunBasePlayerState*                               PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Reason;                                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeBase.BanPlayer
	 */
	struct AUpGunGameModeBase_BanPlayer_Params
	{
	public:
		class AUpGunBasePlayerState*                               PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Reason;                                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.OnRep_Teams
	 */
	struct AUpGunGameStateBase_OnRep_Teams_Params
	{	};

	/**
	 * Function UpGun.UpGunGameStateBase.OnRep_State
	 */
	struct AUpGunGameStateBase_OnRep_State_Params
	{
	public:
		struct FGameplayTag                                        OldState;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.OnRep_LeadingPlayer
	 */
	struct AUpGunGameStateBase_OnRep_LeadingPlayer_Params
	{	};

	/**
	 * Function UpGun.UpGunGameStateBase.MulticastPlayerKilled
	 */
	struct AUpGunGameStateBase_MulticastPlayerKilled_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MERN[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AUpGunBasePlayerState*                               Victim;                                                  // 0x0080(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AUpGunBasePlayerState*                               Killer;                                                  // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.GetTeamScore
	 */
	struct AUpGunGameStateBase_GetTeamScore_Params
	{
	public:
		struct FUpGunTeamId                                        InId;                                                    // 0x0000(0x0001)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_82V2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.GetTeamById
	 */
	struct AUpGunGameStateBase_GetTeamById_Params
	{
	public:
		struct FUpGunTeamId                                        InId;                                                    // 0x0000(0x0001)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SK2J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpGunTeam                                          ReturnValue;                                             // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.GetSortedByScorePlayers
	 */
	struct AUpGunGameStateBase_GetSortedByScorePlayers_Params
	{
	public:
		TArray<class APlayerState*>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameStateBase.GetGameModeSettings
	 */
	struct AUpGunGameStateBase_GetGameModeSettings_Params
	{
	public:
		class AUpGunGameModeSettings*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchGameState.OnRep_Round
	 */
	struct AUpGunDeathmatchGameState_OnRep_Round_Params
	{
	public:
		unsigned char                                              OldRound;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchGhost.OnCosmeticSettingsUpdated
	 */
	struct AUpGunDeathmatchGhost_OnCosmeticSettingsUpdated_Params
	{
	public:
		struct FUpGunCosmeticSettings                              Settings;                                                // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchPlayerController.ServerPickSkill
	 */
	struct AUpGunDeathmatchPlayerController_ServerPickSkill_Params
	{
	public:
		struct FGameplayTag                                        InId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchPlayerController.OnRep_PickableSkills
	 */
	struct AUpGunDeathmatchPlayerController_OnRep_PickableSkills_Params
	{	};

	/**
	 * Function UpGun.UpGunDeathmatchPlayerController.ClientPickSkill
	 */
	struct AUpGunDeathmatchPlayerController_ClientPickSkill_Params
	{
	public:
		struct FGameplayTag                                        InId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunDeathmatchPlayerState.OnRep_Lifes
	 */
	struct AUpGunDeathmatchPlayerState_OnRep_Lifes_Params
	{
	public:
		unsigned char                                              OldValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeSettings.RemoveMutator
	 */
	struct AUpGunGameModeSettings_RemoveMutator_Params
	{
	public:
		struct FGameplayTag                                        InMutator;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeSettings.OnRep_Mutators
	 */
	struct AUpGunGameModeSettings_OnRep_Mutators_Params
	{	};

	/**
	 * Function UpGun.UpGunGameModeSettings.IsTeamBased
	 */
	struct AUpGunGameModeSettings_IsTeamBased_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeSettings.CanStartGame
	 */
	struct AUpGunGameModeSettings_CanStartGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameModeSettings.AddMutator
	 */
	struct AUpGunGameModeSettings_AddMutator_Params
	{
	public:
		struct FGameplayTag                                        InMutator;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunFriendsStatics.IsFriendPlayingThisGame
	 */
	struct UUpGunFriendsStatics_IsFriendPlayingThisGame_Params
	{
	public:
		struct FUpGunFriend                                        InFriend;                                                // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunFriendsStatics.IsFriendOnline
	 */
	struct UUpGunFriendsStatics_IsFriendOnline_Params
	{
	public:
		struct FUpGunFriend                                        InFriend;                                                // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunFriendsStatics.GetFriendName
	 */
	struct UUpGunFriendsStatics_GetFriendName_Params
	{
	public:
		struct FUpGunFriend                                        InFriend;                                                // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0098(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameInstance.BP_OnNetworkError
	 */
	struct UUpGunGameInstance_BP_OnNetworkError_Params
	{
	public:
		ENetworkFailure                                            Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4Q8H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Msg;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameInstance.BP_OnInitialInventoryReady
	 */
	struct UUpGunGameInstance_BP_OnInitialInventoryReady_Params
	{	};

	/**
	 * Function UpGun.UpGunGameplayAbility.GetActivationOwnedTags
	 */
	struct UUpGunGameplayAbility_GetActivationOwnedTags_Params
	{
	public:
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameplayAbility.GetAbilityTags
	 */
	struct UUpGunGameplayAbility_GetAbilityTags_Params
	{
	public:
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameplayAbility.CancelAndTryOtherAbilityInInputSlot
	 */
	struct UUpGunGameplayAbility_CancelAndTryOtherAbilityInInputSlot_Params
	{	};

	/**
	 * Function UpGun.UpGunGameplayAbility.BP_InputPressed
	 */
	struct UUpGunGameplayAbility_BP_InputPressed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PHHW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunGameplayAbility.BP_GetCooldownTags
	 */
	struct UUpGunGameplayAbility_BP_GetCooldownTags_Params
	{
	public:
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunInventorySubsystem.TriggerItemDrop
	 */
	struct UUpGunInventorySubsystem_TriggerItemDrop_Params
	{
	public:
		class FString                                              GeneratorId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunInventorySubsystem.HasItem
	 */
	struct UUpGunInventorySubsystem_HasItem_Params
	{
	public:
		struct FUpGunOSSItemId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunInventorySubsystem.GivePromoItem
	 */
	struct UUpGunInventorySubsystem_GivePromoItem_Params
	{
	public:
		struct FUpGunOSSItemId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunInventorySubsystem.GiveItem
	 */
	struct UUpGunInventorySubsystem_GiveItem_Params
	{
	public:
		struct FUpGunOSSItemId                                     InId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunInventorySubsystem.GetItems
	 */
	struct UUpGunInventorySubsystem_GetItems_Params
	{
	public:
		TArray<struct FUpGunInventoryItem>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyGameMode.LaunchGame
	 */
	struct AUpGunLobbyGameMode_LaunchGame_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyGameState.UpdateArenas
	 */
	struct AUpGunLobbyGameState_UpdateArenas_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyGameState.SetSelectedGameMode
	 */
	struct AUpGunLobbyGameState_SetSelectedGameMode_Params
	{
	public:
		class UUpGunGameModeEntry*                                 InGameMode;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyGameState.SetArena
	 */
	struct AUpGunLobbyGameState_SetArena_Params
	{
	public:
		class UUpGunArena*                                         InArena;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameModeSettings
	 */
	struct AUpGunLobbyGameState_OnRep_SelectedGameModeSettings_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameMode
	 */
	struct AUpGunLobbyGameState_OnRep_SelectedGameMode_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyGameState.OnRep_Arena
	 */
	struct AUpGunLobbyGameState_OnRep_Arena_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyGameState.CanLaunchGame
	 */
	struct AUpGunLobbyGameState_CanLaunchGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyPlayerController.ServerSwitchReadyState
	 */
	struct AUpGunLobbyPlayerController_ServerSwitchReadyState_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyPlayerState.OnRep_bIsReady
	 */
	struct AUpGunLobbyPlayerState_OnRep_bIsReady_Params
	{	};

	/**
	 * Function UpGun.UpGunLobbyStatics.GetLobbyPing
	 */
	struct UUpGunLobbyStatics_GetLobbyPing_Params
	{
	public:
		struct FUpGunLobbyData                                     Lobby;                                                   // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0118(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyStatics.GetLobbyMaxPlayers
	 */
	struct UUpGunLobbyStatics_GetLobbyMaxPlayers_Params
	{
	public:
		struct FUpGunLobbyData                                     Lobby;                                                   // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0118(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyStatics.GetLobbyGameModeName
	 */
	struct UUpGunLobbyStatics_GetLobbyGameModeName_Params
	{
	public:
		struct FUpGunLobbyData                                     Lobby;                                                   // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0118(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyStatics.GetLobbyConnectedPlayers
	 */
	struct UUpGunLobbyStatics_GetLobbyConnectedPlayers_Params
	{
	public:
		struct FUpGunLobbyData                                     Lobby;                                                   // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0118(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbyStatics.GetLobbyArenaName
	 */
	struct UUpGunLobbyStatics_GetLobbyArenaName_Params
	{
	public:
		struct FUpGunLobbyData                                     Lobby;                                                   // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0118(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.UpdateGameModeAndArena
	 */
	struct UUpGunLobbySubsystem_UpdateGameModeAndArena_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Arena;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.SupportsJoiningByCode
	 */
	struct UUpGunLobbySubsystem_SupportsJoiningByCode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.OnFindJoinByCodeCompleted
	 */
	struct UUpGunLobbySubsystem_OnFindJoinByCodeCompleted_Params
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HKNU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FUpGunLobbyData>                             Data;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.JoinLobbyByCode
	 */
	struct UUpGunLobbySubsystem_JoinLobbyByCode_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InCode;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleted;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.JoinLobby
	 */
	struct UUpGunLobbySubsystem_JoinLobby_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUpGunLobbyData                                     InLobby;                                                 // 0x0008(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleted;                                             // 0x0120(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.InviteFriend
	 */
	struct UUpGunLobbySubsystem_InviteFriend_Params
	{
	public:
		struct FUpGunFriend                                        InFriend;                                                // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.GetLobbyName
	 */
	struct UUpGunLobbySubsystem_GetLobbyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.GetLobbyCode
	 */
	struct UUpGunLobbySubsystem_GetLobbyCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.FindLobbies
	 */
	struct UUpGunLobbySubsystem_FindLobbies_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRequiresFullVersion;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T082[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnCompleted;                                             // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.DoesCurrentLobbyRequiresFullVersion
	 */
	struct UUpGunLobbySubsystem_DoesCurrentLobbyRequiresFullVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.CreateLobby
	 */
	struct UUpGunLobbySubsystem_CreateLobby_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPlayers;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLAN;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPublicServer;                                         // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFriendsOnly;                                          // 0x001E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRequiresFullVersion;                                    // 0x001F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleted;                                             // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunLobbySubsystem.CopyLobbyCodeToClipboard
	 */
	struct UUpGunLobbySubsystem_CopyLobbyCodeToClipboard_Params
	{	};

	/**
	 * Function UpGun.UpGunPodium.SwitchToPodium
	 */
	struct AUpGunPodium_SwitchToPodium_Params
	{
	public:
		TArray<struct FUpGunPodiumPlayerInfos>                     InPlayers;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunPodium.MulticastSwitchToPodium
	 */
	struct AUpGunPodium_MulticastSwitchToPodium_Params
	{
	public:
		TArray<struct FUpGunPodiumPlayerInfos>                     InPlayers;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillCount
	 */
	struct UUpGunSkillDatabaseSubsystem_GetSkillCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillById
	 */
	struct UUpGunSkillDatabaseSubsystem_GetSkillById_Params
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunSkill*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerBPLib.GetSkillManager
	 */
	struct UUpGunSkillManagerBPLib_GetSkillManager_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunSkillManagerComponent*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerComponent.OnRep_Skills
	 */
	struct UUpGunSkillManagerComponent_OnRep_Skills_Params
	{	};

	/**
	 * Function UpGun.UpGunSkillManagerComponent.HasSkill
	 */
	struct UUpGunSkillManagerComponent_HasSkill_Params
	{
	public:
		struct FGameplayTag                                        SkillId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerComponent.GiveSkill
	 */
	struct UUpGunSkillManagerComponent_GiveSkill_Params
	{
	public:
		struct FGameplayTag                                        SkillId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Level;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerComponent.GetSkillLevel
	 */
	struct UUpGunSkillManagerComponent_GetSkillLevel_Params
	{
	public:
		struct FGameplayTag                                        SkillId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerComponent.CanHaveSkill
	 */
	struct UUpGunSkillManagerComponent_CanHaveSkill_Params
	{
	public:
		struct FGameplayTag                                        SkillId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillManagerInterface.GetSkillManager
	 */
	struct UUpGunSkillManagerInterface_GetSkillManager_Params
	{
	public:
		class UUpGunSkillManagerComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillTPDisk.OnRep_Destroyed
	 */
	struct AUpGunSkillTPDisk_OnRep_Destroyed_Params
	{	};

	/**
	 * Function UpGun.UpGunSkillTPDisk.OnHit
	 */
	struct AUpGunSkillTPDisk_OnHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSkillTPDisk.BP_Destroyed
	 */
	struct AUpGunSkillTPDisk_BP_Destroyed_Params
	{	};

	/**
	 * Function UpGun.UpGunSpectatorMovementComponent.ServerMove
	 */
	struct UUpGunSpectatorMovementComponent_ServerMove_Params
	{
	public:
		struct FUpGunSpectatorOwningClientMove                     Move;                                                    // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSpectatorMovementComponent.ClientMove
	 */
	struct UUpGunSpectatorMovementComponent_ClientMove_Params
	{
	public:
		struct FVector_NetQuantize100                              CorrectedLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSpectatorPawn.ServerUpdateRotation
	 */
	struct AUpGunSpectatorPawn_ServerUpdateRotation_Params
	{
	public:
		struct FRotator                                            InRotation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatManager.GetStat
	 */
	struct UUpGunStatManager_GetStat_Params
	{
	public:
		struct FGameplayTag                                        InId;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUpGunStatManagerStat                               ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatManager.ClientUpdateStats
	 */
	struct UUpGunStatManager_ClientUpdateStats_Params
	{
	public:
		TArray<struct FGameplayTag>                                InIds;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              InNewValues;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatManager.AddIntStat
	 */
	struct UUpGunStatManager_AddIntStat_Params
	{
	public:
		struct FGameplayTag                                        InId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InDelta;                                                 // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatManager.AddFloatStat
	 */
	struct UUpGunStatManager_AddFloatStat_Params
	{
	public:
		struct FGameplayTag                                        InId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDelta;                                                 // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.UnlockAchievement
	 */
	struct UUpGunStatSubsystem_UnlockAchievement_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.SetIntStat
	 */
	struct UUpGunStatSubsystem_SetIntStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Data;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.SetFloatStat
	 */
	struct UUpGunStatSubsystem_SetFloatStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Data;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetStatType
	 */
	struct UUpGunStatSubsystem_GetStatType_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpGunStatType                                             Type;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetStatOSSUpdateMode
	 */
	struct UUpGunStatSubsystem_GetStatOSSUpdateMode_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpGunStatOSSUpdateMode                                    Mode;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetStatName
	 */
	struct UUpGunStatSubsystem_GetStatName_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetIntStat
	 */
	struct UUpGunStatSubsystem_GetIntStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Data;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetFloatStat
	 */
	struct UUpGunStatSubsystem_GetFloatStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Data;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetAchievementProgress
	 */
	struct UUpGunStatSubsystem_GetAchievementProgress_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Percentage;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetAchievementName
	 */
	struct UUpGunStatSubsystem_GetAchievementName_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetAchievementDescription
	 */
	struct UUpGunStatSubsystem_GetAchievementDescription_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.GetAchievement
	 */
	struct UUpGunStatSubsystem_GetAchievement_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAchieved;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.FlushStats
	 */
	struct UUpGunStatSubsystem_FlushStats_Params
	{	};

	/**
	 * Function UpGun.UpGunStatSubsystem.AddIntStat
	 */
	struct UUpGunStatSubsystem_AddIntStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Data;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunStatSubsystem.AddFloatStat
	 */
	struct UUpGunStatSubsystem_AddFloatStat_Params
	{
	public:
		struct FGameplayTag                                        Stat;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Data;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.IsFinished
	 */
	struct UUpGunSynchronizedTimerBlueprintFunctionLibrary_IsFinished_Params
	{
	public:
		struct FUpGunSynchronizedTimer                             InTimer;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.GetRemainingTime
	 */
	struct UUpGunSynchronizedTimerBlueprintFunctionLibrary_GetRemainingTime_Params
	{
	public:
		struct FUpGunSynchronizedTimer                             InTimer;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.ToString
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_ToString_Params
	{
	public:
		struct FUniqueNetIdRepl                                    ID;                                                      // 0x0000(0x0028)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.SortPlayerStateArray
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_SortPlayerStateArray_Params
	{
	public:
		TArray<class AUpGunBasePlayerState*>                       inArray;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class AUpGunBasePlayerState*>                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsWorldTearingDown
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_IsWorldTearingDown_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsBuildShipping
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_IsBuildShipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetVersion
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetUniqueNetIdFromPlayerState
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetUniqueNetIdFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PS;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetSkillTPDisk_TargetData
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetSkillTPDisk_TargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Handle;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FUpGunTargetData_SkillTPDisk                        ReturnValue;                                             // 0x0028(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetMaxPlayers
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetMaxPlayers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetEffectContext
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetEffectContext_Params
	{
	public:
		struct FGameplayEffectSpec                                 InSpec;                                                  // 0x0000(0x0298)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0298(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetArena
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetArena_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUpGunArena*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetAllSubTags
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_GetAllSubTags_Params
	{
	public:
		class FName                                                TagName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBlueprintFunctionLibrary.AntiSpam
	 */
	struct UUpGunUtilsBlueprintFunctionLibrary_AntiSpam_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LKYQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBPLib.GetDefaultObject
	 */
	struct UUpGunUtilsBPLib_GetDefaultObject_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBPLib.GetAbilitySpecsFromContainer
	 */
	struct UUpGunUtilsBPLib_GetAbilitySpecsFromContainer_Params
	{
	public:
		struct FGameplayAbilitySpecContainer                       Container;                                               // 0x0000(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<struct FGameplayAbilitySpec>                        ReturnValue;                                             // 0x0120(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBPLib.GetAbilityInputSlotFromAbilitySpec
	 */
	struct UUpGunUtilsBPLib_GetAbilityInputSlotFromAbilitySpec_Params
	{
	public:
		struct FGameplayAbilitySpec                                InSpec;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EUpGunInput                                                ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunUtilsBPLib.GetAbilityCDOFromAbilitySpec
	 */
	struct UUpGunUtilsBPLib_GetAbilityCDOFromAbilitySpec_Params
	{
	public:
		struct FGameplayAbilitySpec                                InSpec;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGameplayAbility*                                    ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.SpawnProjectile
	 */
	struct AUpGunWeapon_SpawnProjectile_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SyncChance;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.ShowWeaponLocal
	 */
	struct AUpGunWeapon_ShowWeaponLocal_Params
	{
	public:
		bool                                                       bAffectFPS;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectTPS;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.Reload
	 */
	struct AUpGunWeapon_Reload_Params
	{	};

	/**
	 * Function UpGun.UpGunWeapon.OnRep_Magazine
	 */
	struct AUpGunWeapon_OnRep_Magazine_Params
	{
	public:
		unsigned char                                              OldMagazine;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.OnRep_CharacterOwner
	 */
	struct AUpGunWeapon_OnRep_CharacterOwner_Params
	{	};

	/**
	 * Function UpGun.UpGunWeapon.OnRep_Attachments
	 */
	struct AUpGunWeapon_OnRep_Attachments_Params
	{	};

	/**
	 * Function UpGun.UpGunWeapon.OnRep_Ammo
	 */
	struct AUpGunWeapon_OnRep_Ammo_Params
	{
	public:
		unsigned char                                              OldAmmo;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.OnFired
	 */
	struct AUpGunWeapon_OnFired_Params
	{	};

	/**
	 * Function UpGun.UpGunWeapon.MulticastSpawnProjectile
	 */
	struct AUpGunWeapon_MulticastSpawnProjectile_Params
	{
	public:
		TArray<struct FUpGunWeaponProjectileFireRPC>               RPCs;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.IsFull
	 */
	struct AUpGunWeapon_IsFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.IsEmpty
	 */
	struct AUpGunWeapon_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.HideWeaponLocal
	 */
	struct AUpGunWeapon_HideWeaponLocal_Params
	{
	public:
		bool                                                       bAffectFPS;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectTPS;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.GetUsableMesh
	 */
	struct AUpGunWeapon_GetUsableMesh_Params
	{
	public:
		bool                                                       bIsLocallyControlled;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UKF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeapon.Fire
	 */
	struct AUpGunWeapon_Fire_Params
	{
	public:
		float                                                      SyncChance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleFireRate
	 */
	struct UUpGunWeaponAttributeSet_OnRep_RifleFireRate_Params
	{
	public:
		struct FGameplayAttributeData                              OldRifleFireRate;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDispersion
	 */
	struct UUpGunWeaponAttributeSet_OnRep_RifleDispersion_Params
	{
	public:
		struct FGameplayAttributeData                              OldRifleDispersion;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDamage
	 */
	struct UUpGunWeaponAttributeSet_OnRep_RifleDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldRifleDamage;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleCriticalHitChance
	 */
	struct UUpGunWeaponAttributeSet_OnRep_RifleCriticalHitChance_Params
	{
	public:
		struct FGameplayAttributeData                              OldRifleCriticalHitChance;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleBulletSpeed
	 */
	struct UUpGunWeaponAttributeSet_OnRep_RifleBulletSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldRifleBulletSpeed;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponAttributeSet.OnRep_DamageBaseMultiplier
	 */
	struct UUpGunWeaponAttributeSet_OnRep_DamageBaseMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldDamageBaseMultiplier;                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.UnequipWeapon
	 */
	struct UUpGunWeaponManagerComponent_UnequipWeapon_Params
	{
	public:
		class AUpGunWeapon*                                        Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.SwitchWeapon
	 */
	struct UUpGunWeaponManagerComponent_SwitchWeapon_Params
	{
	public:
		struct FGameplayTag                                        InTag;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.ShowWeaponsLocal
	 */
	struct UUpGunWeaponManagerComponent_ShowWeaponsLocal_Params
	{
	public:
		bool                                                       bOnlyCurrentWeapon;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectFPS;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectTPS;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.OnRep_CurrentWeapon
	 */
	struct UUpGunWeaponManagerComponent_OnRep_CurrentWeapon_Params
	{
	public:
		class AUpGunWeapon*                                        OldWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.HideWeaponsLocal
	 */
	struct UUpGunWeaponManagerComponent_HideWeaponsLocal_Params
	{
	public:
		bool                                                       bOnlyCurrentWeapon;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectFPS;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectTPS;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.GetWeaponByGameplayTag
	 */
	struct UUpGunWeaponManagerComponent_GetWeaponByGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AUpGunWeapon*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.GetCurrentWeapon
	 */
	struct UUpGunWeaponManagerComponent_GetCurrentWeapon_Params
	{
	public:
		class AUpGunWeapon*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.Fire
	 */
	struct UUpGunWeaponManagerComponent_Fire_Params
	{
	public:
		float                                                      SyncChance;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UpGun.UpGunWeaponManagerComponent.EquipWeapon
	 */
	struct UUpGunWeaponManagerComponent_EquipWeapon_Params
	{
	public:
		class AUpGunWeapon*                                        Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
