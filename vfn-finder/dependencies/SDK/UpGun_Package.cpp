/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.HorrorMultiplayerSyncComponent.OnRep_Transforms
	 * 		Flags  -> ()
	 */
	void UHorrorMultiplayerSyncComponent::OnRep_Transforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.HorrorMultiplayerSyncComponent.OnRep_Transforms");
		
		UHorrorMultiplayerSyncComponent_OnRep_Transforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHorrorMultiplayerSyncComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorrorMultiplayerSyncComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.HorrorMultiplayerSyncComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.ResetCooldowns
	 * 		Flags  -> ()
	 */
	void UUpGunAbilitySystemComponent::ResetCooldowns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.ResetCooldowns");
		
		UUpGunAbilitySystemComponent_ResetCooldowns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.RemoveGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.RemoveGameplayCueLocal");
		
		UUpGunAbilitySystemComponent_RemoveGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.OnRep_ReplicatedAbilitiesMontages
	 * 		Flags  -> ()
	 */
	void UUpGunAbilitySystemComponent::OnRep_ReplicatedAbilitiesMontages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.OnRep_ReplicatedAbilitiesMontages");
		
		UUpGunAbilitySystemComponent_OnRep_ReplicatedAbilitiesMontages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.OnRep_CurrentReliableGameplayCues
	 * 		Flags  -> ()
	 */
	void UUpGunAbilitySystemComponent::OnRep_CurrentReliableGameplayCues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.OnRep_CurrentReliableGameplayCues");
		
		UUpGunAbilitySystemComponent_OnRep_CurrentReliableGameplayCues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.MulticastExecuteGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::MulticastExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.MulticastExecuteGameplayCue");
		
		UUpGunAbilitySystemComponent_MulticastExecuteGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.MulticastAddGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::MulticastAddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.MulticastAddGameplayCue");
		
		UUpGunAbilitySystemComponent_MulticastAddGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.ExecuteReliableGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::ExecuteReliableGameplayCue(const struct FGameplayTag& GameplayCueTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.ExecuteReliableGameplayCue");
		
		UUpGunAbilitySystemComponent_ExecuteReliableGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.ExecuteGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.ExecuteGameplayCueLocal");
		
		UUpGunAbilitySystemComponent_ExecuteGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.BP_CancelAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::BP_CancelAbility(class UClass* Ability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.BP_CancelAbility");
		
		UUpGunAbilitySystemComponent_BP_CancelAbility_Params params {};
		params.Ability = Ability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.AddReliableGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::AddReliableGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.AddReliableGameplayCue");
		
		UUpGunAbilitySystemComponent_AddReliableGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.AddGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.AddGameplayCueLocal");
		
		UUpGunAbilitySystemComponent_AddGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemComponent.AddAttributeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttributeSet*                               Set                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilitySystemComponent::AddAttributeSet(class UAttributeSet* Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemComponent.AddAttributeSet");
		
		UUpGunAbilitySystemComponent_AddAttributeSet_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilitySystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilitySystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilitySystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemWidget.ListenForGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameplayTagEventType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunAbilitySystemWidget::ListenForGameplayTag(EGameplayTagEventType Type, const struct FGameplayTag& Tag, const class FScriptDelegate& InEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemWidget.ListenForGameplayTag");
		
		UUpGunAbilitySystemWidget_ListenForGameplayTag_Params params {};
		params.Type = Type;
		params.Tag = Tag;
		params.InEvent = InEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemWidget.ListenForAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayAttribute>                  Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitialCall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunAbilitySystemWidget::ListenForAttributes(TArray<struct FGameplayAttribute> Attributes, const class FScriptDelegate& InEvent, bool bInitialCall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemWidget.ListenForAttributes");
		
		UUpGunAbilitySystemWidget_ListenForAttributes_Params params {};
		params.Attributes = Attributes;
		params.InEvent = InEvent;
		params.bInitialCall = bInitialCall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilitySystemWidget.ListenForAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitialCall                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunAbilitySystemWidget::ListenForAttribute(const struct FGameplayAttribute& Attribute, const class FScriptDelegate& InEvent, bool bInitialCall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilitySystemWidget.ListenForAttribute");
		
		UUpGunAbilitySystemWidget_ListenForAttribute_Params params {};
		params.Attribute = Attribute;
		params.InEvent = InEvent;
		params.bInitialCall = bInitialCall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilitySystemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilitySystemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilitySystemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_ApplyComponentConstantRootMotion.ApplyComponentConstantRootMotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAdditive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERootMotionFinishVelocityMode                      VelocityOnFinishMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SetVelocityOnFinish                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClampVelocityOnFinish                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableGravity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_ApplyComponentConstantRootMotion* UUpGunAbilityTask_ApplyComponentConstantRootMotion::ApplyComponentConstantRootMotion(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USceneComponent* Component, float Strength, float Duration, bool bIsAdditive, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_ApplyComponentConstantRootMotion.ApplyComponentConstantRootMotion");
		
		UUpGunAbilityTask_ApplyComponentConstantRootMotion_ApplyComponentConstantRootMotion_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.Component = Component;
		params.Strength = Strength;
		params.Duration = Duration;
		params.bIsAdditive = bIsAdditive;
		params.VelocityOnFinishMode = VelocityOnFinishMode;
		params.SetVelocityOnFinish = SetVelocityOnFinish;
		params.ClampVelocityOnFinish = ClampVelocityOnFinish;
		params.bEnableGravity = bEnableGravity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_ApplyComponentConstantRootMotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_ApplyComponentConstantRootMotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_ApplyComponentConstantRootMotion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_JackRepeatAction.ContinuouslyRepeatAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeBetweenActions                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_JackRepeatAction* UUpGunAbilityTask_JackRepeatAction::ContinuouslyRepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_JackRepeatAction.ContinuouslyRepeatAction");
		
		UUpGunAbilityTask_JackRepeatAction_ContinuouslyRepeatAction_Params params {};
		params.OwningAbility = OwningAbility;
		params.TimeBetweenActions = TimeBetweenActions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_JackRepeatAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_JackRepeatAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_JackRepeatAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplicateMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideBlendOutTimeForCancelAbility                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideBlendOutTimeForStopWhenEndAbility                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent* UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent::PlayMontageForMeshAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent");
		
		UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent_PlayMontageForMeshAndWaitForEvent_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.Mesh = Mesh;
		params.MontageToPlay = MontageToPlay;
		params.EventTags = EventTags;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		params.bReplicateMontage = bReplicateMontage;
		params.OverrideBlendOutTimeForCancelAbility = OverrideBlendOutTimeForCancelAbility;
		params.OverrideBlendOutTimeForStopWhenEndAbility = OverrideBlendOutTimeForStopWhenEndAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_PlayMontageForMeshAndWaitForEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_PlayMontageForMeshAndWaitForEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_PlayWeaponMontage.PlayWeaponMontage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageWeaponFPS                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageWeaponTPS                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageHandsFPS                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageHandsTPS                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MontagesToNotStopWhenAbilityEnds                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FPSPlayRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TPSPlayRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_PlayWeaponMontage* UUpGunAbilityTask_PlayWeaponMontage::PlayWeaponMontage(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FGameplayTagContainer& EventTags, class UAnimMontage* MontageWeaponFPS, class UAnimMontage* MontageWeaponTPS, class UAnimMontage* MontageHandsFPS, class UAnimMontage* MontageHandsTPS, int32_t MontagesToNotStopWhenAbilityEnds, float FPSPlayRate, float TPSPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_PlayWeaponMontage.PlayWeaponMontage");
		
		UUpGunAbilityTask_PlayWeaponMontage_PlayWeaponMontage_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.EventTags = EventTags;
		params.MontageWeaponFPS = MontageWeaponFPS;
		params.MontageWeaponTPS = MontageWeaponTPS;
		params.MontageHandsFPS = MontageHandsFPS;
		params.MontageHandsTPS = MontageHandsTPS;
		params.MontagesToNotStopWhenAbilityEnds = MontagesToNotStopWhenAbilityEnds;
		params.FPSPlayRate = FPSPlayRate;
		params.TPSPlayRate = TPSPlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_PlayWeaponMontage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_PlayWeaponMontage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_PlayWeaponMontage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.SpawnPredictedProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_SpawnProjectileClientSimulated* UUpGunAbilityTask_SpawnProjectileClientSimulated::SpawnPredictedProjectile(class UGameplayAbility* OwningAbility, const struct FTransform& Transform, const struct FVector& Velocity, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.SpawnPredictedProjectile");
		
		UUpGunAbilityTask_SpawnProjectileClientSimulated_SpawnPredictedProjectile_Params params {};
		params.OwningAbility = OwningAbility;
		params.Transform = Transform;
		params.Velocity = Velocity;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.FinishSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class AUpGunProjectileClientSimulated*             SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilityTask_SpawnProjectileClientSimulated::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AUpGunProjectileClientSimulated* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.FinishSpawningActor");
		
		UUpGunAbilityTask_SpawnProjectileClientSimulated_FinishSpawningActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.TargetData = TargetData;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.BeginSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AUpGunProjectileClientSimulated*             SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunAbilityTask_SpawnProjectileClientSimulated::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AUpGunProjectileClientSimulated** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated.BeginSpawningActor");
		
		UUpGunAbilityTask_SpawnProjectileClientSimulated_BeginSpawningActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.TargetData = TargetData;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_SpawnProjectileClientSimulated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_SpawnProjectileClientSimulated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_SpawnProjectileClientSimulated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_Tick.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_Tick* UUpGunAbilityTask_Tick::Tick(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_Tick.Tick");
		
		UUpGunAbilityTask_Tick_Tick_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_Tick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_Tick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_Tick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroyUsingActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTargetingConfirmation                     ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_WaitTargetDataNoDestroy* UUpGunAbilityTask_WaitTargetDataNoDestroy::WaitTargetDataNoDestroyUsingActor(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroyUsingActor");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_WaitTargetDataNoDestroyUsingActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.ConfirmationType = ConfirmationType;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTargetingConfirmation                     ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunAbilityTask_WaitTargetDataNoDestroy* UUpGunAbilityTask_WaitTargetDataNoDestroy::WaitTargetDataNoDestroy(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.WaitTargetDataNoDestroy");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_WaitTargetDataNoDestroy_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.ConfirmationType = ConfirmationType;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCancelledCallback
	 * 		Flags  -> ()
	 */
	void UUpGunAbilityTask_WaitTargetDataNoDestroy::OnTargetDataReplicatedCancelledCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCancelledCallback");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReplicatedCancelledCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActivationTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilityTask_WaitTargetDataNoDestroy::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReplicatedCallback");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReplicatedCallback_Params params {};
		params.Data = Data;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReadyCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilityTask_WaitTargetDataNoDestroy::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataReadyCallback");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataReadyCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataCancelledCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilityTask_WaitTargetDataNoDestroy::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.OnTargetDataCancelledCallback");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_OnTargetDataCancelledCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.FinishSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunAbilityTask_WaitTargetDataNoDestroy::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.FinishSpawningActor");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_FinishSpawningActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.BeginSpawningActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunAbilityTask_WaitTargetDataNoDestroy::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy.BeginSpawningActor");
		
		UUpGunAbilityTask_WaitTargetDataNoDestroy_BeginSpawningActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunAbilityTask_WaitTargetDataNoDestroy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunAbilityTask_WaitTargetDataNoDestroy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunAbilityTask_WaitTargetDataNoDestroy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunArena.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunArena::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunArena");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.PlayAnimMontageOnMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopAllMontages                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AUpGunBaseCharacter::PlayAnimMontageOnMesh(class UAnimMontage* Montage, float InPlayRate, const class FName& StartSectionName, bool bStopAllMontages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.PlayAnimMontageOnMesh");
		
		AUpGunBaseCharacter_PlayAnimMontageOnMesh_Params params {};
		params.Montage = Montage;
		params.InPlayRate = InPlayRate;
		params.StartSectionName = StartSectionName;
		params.bStopAllMontages = bStopAllMontages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.OnTeamUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                Team                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::OnTeamUpdated(const struct FUpGunTeamId& Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.OnTeamUpdated");
		
		AUpGunBaseCharacter_OnTeamUpdated_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.OnRep_bMovementsEnabled
	 * 		Flags  -> ()
	 */
	void AUpGunBaseCharacter::OnRep_bMovementsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.OnRep_bMovementsEnabled");
		
		AUpGunBaseCharacter_OnRep_bMovementsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.OnCosmeticSettingsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunCosmeticSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::OnCosmeticSettingsUpdated(const struct FUpGunCosmeticSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.OnCosmeticSettingsUpdated");
		
		AUpGunBaseCharacter_OnCosmeticSettingsUpdated_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.MulticastKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantizeNormal                   InLastHitDirection                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::MulticastKill(const struct FVector_NetQuantizeNormal& InLastHitDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.MulticastKill");
		
		AUpGunBaseCharacter_MulticastKill_Params params {};
		params.InLastHitDirection = InLastHitDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.Kill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::Kill(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.Kill");
		
		AUpGunBaseCharacter_Kill_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.EnableMovements
	 * 		Flags  -> ()
	 */
	void AUpGunBaseCharacter::EnableMovements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.EnableMovements");
		
		AUpGunBaseCharacter_EnableMovements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.DisableMovements
	 * 		Flags  -> ()
	 */
	void AUpGunBaseCharacter::DisableMovements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.DisableMovements");
		
		AUpGunBaseCharacter_DisableMovements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.ClientDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::ClientDamage(const struct FGameplayEffectSpecForRPC& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.ClientDamage");
		
		AUpGunBaseCharacter_ClientDamage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.CanDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBaseCharacter*                         Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AUpGunBaseCharacter::CanDamage(class AUpGunBaseCharacter* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.CanDamage");
		
		AUpGunBaseCharacter_CanDamage_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.BP_OnSpawnDefaultPlayerWeapons
	 * 		Flags  -> ()
	 */
	void AUpGunBaseCharacter::BP_OnSpawnDefaultPlayerWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.BP_OnSpawnDefaultPlayerWeapons");
		
		AUpGunBaseCharacter_BP_OnSpawnDefaultPlayerWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacter.BP_Kill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseCharacter::BP_Kill(class AController* Killer, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacter.BP_Kill");
		
		AUpGunBaseCharacter_BP_Kill_Params params {};
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBaseCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBaseCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBaseCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunDamageAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunDamageAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDamageAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_WalkSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldWalkSpeed                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_WalkSpeed(const struct FGameplayAttributeData& OldWalkSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_WalkSpeed");
		
		UUpGunBaseCharacterAttributeSet_OnRep_WalkSpeed_Params params {};
		params.OldWalkSpeed = OldWalkSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_OverHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldOverHealth                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_OverHealth(const struct FGameplayAttributeData& OldOverHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_OverHealth");
		
		UUpGunBaseCharacterAttributeSet_OnRep_OverHealth_Params params {};
		params.OldOverHealth = OldOverHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_MaxHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldMaxHealth                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_MaxHealth(const struct FGameplayAttributeData& OldMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_MaxHealth");
		
		UUpGunBaseCharacterAttributeSet_OnRep_MaxHealth_Params params {};
		params.OldMaxHealth = OldMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_JumpVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldJumpVelocity                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_JumpVelocity(const struct FGameplayAttributeData& OldJumpVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_JumpVelocity");
		
		UUpGunBaseCharacterAttributeSet_OnRep_JumpVelocity_Params params {};
		params.OldJumpVelocity = OldJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldHealth                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_Health(const struct FGameplayAttributeData& OldHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_Health");
		
		UUpGunBaseCharacterAttributeSet_OnRep_Health_Params params {};
		params.OldHealth = OldHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_CrouchSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldCrouchSpeed                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunBaseCharacterAttributeSet::OnRep_CrouchSpeed(const struct FGameplayAttributeData& OldCrouchSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.OnRep_CrouchSpeed");
		
		UUpGunBaseCharacterAttributeSet_OnRep_CrouchSpeed_Params params {};
		params.OldCrouchSpeed = OldCrouchSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseCharacterAttributeSet.GetMaxOverHealth
	 * 		Flags  -> ()
	 */
	float UUpGunBaseCharacterAttributeSet::GetMaxOverHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseCharacterAttributeSet.GetMaxOverHealth");
		
		UUpGunBaseCharacterAttributeSet_GetMaxOverHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunBaseCharacterAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunBaseCharacterAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBaseCharacterAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBaseGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBaseGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBaseGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.SwitchToUIInputs
	 * 		Flags  -> ()
	 */
	void AUpGunBaseHUD::SwitchToUIInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.SwitchToUIInputs");
		
		AUpGunBaseHUD_SwitchToUIInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.SwitchToGameOnlyInputs
	 * 		Flags  -> ()
	 */
	void AUpGunBaseHUD::SwitchToGameOnlyInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.SwitchToGameOnlyInputs");
		
		AUpGunBaseHUD_SwitchToGameOnlyInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.SwitchToGameAndUIInputs
	 * 		Flags  -> ()
	 */
	void AUpGunBaseHUD::SwitchToGameAndUIInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.SwitchToGameAndUIInputs");
		
		AUpGunBaseHUD_SwitchToGameAndUIInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.ShowWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNeedMouse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChangeVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInputUIOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNonHitTestable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseHUD::ShowWidget(class UUserWidget* Widget, bool bNeedMouse, bool bChangeVisibility, bool bInputUIOnly, bool bNonHitTestable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.ShowWidget");
		
		AUpGunBaseHUD_ShowWidget_Params params {};
		params.Widget = Widget;
		params.bNeedMouse = bNeedMouse;
		params.bChangeVisibility = bChangeVisibility;
		params.bInputUIOnly = bInputUIOnly;
		params.bNonHitTestable = bNonHitTestable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.HideWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceHide                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChangeVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromInputUIOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBaseHUD::HideWidget(class UUserWidget* Widget, bool bForceHide, bool bChangeVisibility, bool bFromInputUIOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.HideWidget");
		
		AUpGunBaseHUD_HideWidget_Params params {};
		params.Widget = Widget;
		params.bForceHide = bForceHide;
		params.bChangeVisibility = bChangeVisibility;
		params.bFromInputUIOnly = bFromInputUIOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.ForceFocusToViewport
	 * 		Flags  -> ()
	 */
	void AUpGunBaseHUD::ForceFocusToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.ForceFocusToViewport");
		
		AUpGunBaseHUD_ForceFocusToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBaseHUD.BP_CreateWidgets
	 * 		Flags  -> ()
	 */
	void AUpGunBaseHUD::BP_CreateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBaseHUD.BP_CreateWidgets");
		
		AUpGunBaseHUD_BP_CreateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBaseHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBaseHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBaseHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.SetTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::SetTeam(const struct FUpGunTeamId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.SetTeam");
		
		AUpGunBasePlayerController_SetTeam_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.SetMouseSensitivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sensitivity                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::SetMouseSensitivity(float Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.SetMouseSensitivity");
		
		AUpGunBasePlayerController_SetMouseSensitivity_Params params {};
		params.Sensitivity = Sensitivity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ServerSetTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                ID                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ServerSetTeam(const struct FUpGunTeamId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ServerSetTeam");
		
		AUpGunBasePlayerController_ServerSetTeam_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ServerSendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatMessage                           Message                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ServerSendMessage(const struct FUpGunChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ServerSendMessage");
		
		AUpGunBasePlayerController_ServerSendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ServerSendCosmeticSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunCosmeticSettings                      CosmeticSettings                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ServerSendCosmeticSettings(const struct FUpGunCosmeticSettings& CosmeticSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ServerSendCosmeticSettings");
		
		AUpGunBasePlayerController_ServerSendCosmeticSettings_Params params {};
		params.CosmeticSettings = CosmeticSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatMessage                           Message                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::SendMessage(const struct FUpGunChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.SendMessage");
		
		AUpGunBasePlayerController_SendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.SendCosmeticSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunCosmeticSettings                      CosmeticSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::SendCosmeticSettings(const struct FUpGunCosmeticSettings& CosmeticSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.SendCosmeticSettings");
		
		AUpGunBasePlayerController_SendCosmeticSettings_Params params {};
		params.CosmeticSettings = CosmeticSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ClientSendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatMessage                           Message                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ClientSendMessage(const struct FUpGunChatMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ClientSendMessage");
		
		AUpGunBasePlayerController_ClientSendMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ClientOnStartedPlaying
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerController::ClientOnStartedPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ClientOnStartedPlaying");
		
		AUpGunBasePlayerController_ClientOnStartedPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ClientOnPlayerDamagedMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   EffectSpec                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AUpGunBasePlayerState*                       Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ClientOnPlayerDamagedMe(const struct FGameplayEffectSpecForRPC& EffectSpec, float Amount, class AUpGunBasePlayerState* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ClientOnPlayerDamagedMe");
		
		AUpGunBasePlayerController_ClientOnPlayerDamagedMe_Params params {};
		params.EffectSpec = EffectSpec;
		params.Amount = Amount;
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ClientOnDamagedOtherPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   EffectSpec                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AUpGunBasePlayerState*                       Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ClientOnDamagedOtherPlayer(const struct FGameplayEffectSpecForRPC& EffectSpec, float Amount, class AUpGunBasePlayerState* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ClientOnDamagedOtherPlayer");
		
		AUpGunBasePlayerController_ClientOnDamagedOtherPlayer_Params params {};
		params.EffectSpec = EffectSpec;
		params.Amount = Amount;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerController.ClientGivedScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ScoreTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Score                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerController::ClientGivedScore(const struct FGameplayTag& ScoreTag, float Score, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerController.ClientGivedScore");
		
		AUpGunBasePlayerController_ClientGivedScore_Params params {};
		params.ScoreTag = ScoreTag;
		params.Score = Score;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBasePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBasePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBasePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InState                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerState::SetState(const struct FGameplayTag& InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.SetState");
		
		AUpGunBasePlayerState_SetState_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.OnRep_Team
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerState::OnRep_Team()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.OnRep_Team");
		
		AUpGunBasePlayerState_OnRep_Team_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.OnRep_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InOldTag                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerState::OnRep_State(const struct FGameplayTag& InOldTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.OnRep_State");
		
		AUpGunBasePlayerState_OnRep_State_Params params {};
		params.InOldTag = InOldTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.OnRep_CosmeticSettings
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerState::OnRep_CosmeticSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.OnRep_CosmeticSettings");
		
		AUpGunBasePlayerState_OnRep_CosmeticSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.IsSpectator
	 * 		Flags  -> ()
	 */
	bool AUpGunBasePlayerState::IsSpectator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.IsSpectator");
		
		AUpGunBasePlayerState_IsSpectator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.IsInTheSameTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PS                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AUpGunBasePlayerState::IsInTheSameTeam(class AUpGunBasePlayerState* PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.IsInTheSameTeam");
		
		AUpGunBasePlayerState_IsInTheSameTeam_Params params {};
		params.PS = PS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetWalkSpeed
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetWalkSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetWalkSpeed");
		
		AUpGunBasePlayerState_GetWalkSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetTrueHealth
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetTrueHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetTrueHealth");
		
		AUpGunBasePlayerState_GetTrueHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetMaxHealth
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetMaxHealth");
		
		AUpGunBasePlayerState_GetMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetJumpVelocity
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetJumpVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetJumpVelocity");
		
		AUpGunBasePlayerState_GetJumpVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetHealth
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetHealth");
		
		AUpGunBasePlayerState_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetCrouchSpeed
	 * 		Flags  -> ()
	 */
	float AUpGunBasePlayerState::GetCrouchSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetCrouchSpeed");
		
		AUpGunBasePlayerState_GetCrouchSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetCorrectPing
	 * 		Flags  -> ()
	 */
	int32_t AUpGunBasePlayerState::GetCorrectPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetCorrectPing");
		
		AUpGunBasePlayerState_GetCorrectPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetCooldownInfosForTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       CooldownTags                                               (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              TimeRemaining                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AUpGunBasePlayerState::GetCooldownInfosForTag(const struct FGameplayTagContainer& CooldownTags, float* TimeRemaining, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetCooldownInfosForTag");
		
		AUpGunBasePlayerState_GetCooldownInfosForTag_Params params {};
		params.CooldownTags = CooldownTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
		if (Duration != nullptr)
			*Duration = params.Duration;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetAbilityByUpGunHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunAbilitySpecHandle                     Handle                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UUpGunGameplayAbility* AUpGunBasePlayerState::GetAbilityByUpGunHandle(const struct FUpGunAbilitySpecHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetAbilityByUpGunHandle");
		
		AUpGunBasePlayerState_GetAbilityByUpGunHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.GetAbilityByHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunGameplayAbility* AUpGunBasePlayerState::GetAbilityByHandle(const struct FGameplayAbilitySpecHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.GetAbilityByHandle");
		
		AUpGunBasePlayerState_GetAbilityByHandle_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.BP_SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunBasePlayerState::BP_SetPlayerName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.BP_SetPlayerName");
		
		AUpGunBasePlayerState_BP_SetPlayerName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.AddKill
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerState::AddKill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.AddKill");
		
		AUpGunBasePlayerState_AddKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.AddDeath
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerState::AddDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.AddDeath");
		
		AUpGunBasePlayerState_AddDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunBasePlayerState.AddAssist
	 * 		Flags  -> ()
	 */
	void AUpGunBasePlayerState::AddAssist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunBasePlayerState.AddAssist");
		
		AUpGunBasePlayerState_AddAssist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBasePlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBasePlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBasePlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBasicDamageableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBasicDamageableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBasicDamageableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunBasicDamageableCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunBasicDamageableCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunBasicDamageableCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatManagerComponent.OnRep_Rooms
	 * 		Flags  -> ()
	 */
	void UUpGunChatManagerComponent::OnRep_Rooms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatManagerComponent.OnRep_Rooms");
		
		UUpGunChatManagerComponent_OnRep_Rooms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatManagerComponent.GetRoomByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunChatRoom UUpGunChatManagerComponent::GetRoomByName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatManagerComponent.GetRoomByName");
		
		UUpGunChatManagerComponent_GetRoomByName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatManagerComponent.GetRoomById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatRoomId                            ID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FUpGunChatRoom UUpGunChatManagerComponent::GetRoomById(const struct FUpGunChatRoomId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatManagerComponent.GetRoomById");
		
		UUpGunChatManagerComponent_GetRoomById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunChatManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunChatManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunChatManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatStatics.NotEqual_UpGunChatRoomId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatRoomId                            A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUpGunChatRoomId                            B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunChatStatics::NotEqual_UpGunChatRoomId(const struct FUpGunChatRoomId& A, const struct FUpGunChatRoomId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatStatics.NotEqual_UpGunChatRoomId");
		
		UUpGunChatStatics_NotEqual_UpGunChatRoomId_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatStatics.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatRoomId                            ID                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunChatStatics::IsValid(const struct FUpGunChatRoomId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatStatics.IsValid");
		
		UUpGunChatStatics_IsValid_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatStatics.GetChatMessageMaxLength
	 * 		Flags  -> ()
	 */
	int32_t UUpGunChatStatics::GetChatMessageMaxLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatStatics.GetChatMessageMaxLength");
		
		UUpGunChatStatics_GetChatMessageMaxLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunChatStatics.EqualEqual_UpGunChatRoomId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunChatRoomId                            A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUpGunChatRoomId                            B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunChatStatics::EqualEqual_UpGunChatRoomId(const struct FUpGunChatRoomId& A, const struct FUpGunChatRoomId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunChatStatics.EqualEqual_UpGunChatRoomId");
		
		UUpGunChatStatics_EqualEqual_UpGunChatRoomId_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunChatStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunChatStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunChatStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.UpdateCosmeticSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunCosmeticSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::UpdateCosmeticSettings(const struct FUpGunCosmeticSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.UpdateCosmeticSettings");
		
		UUpGunCosmeticManager_UpdateCosmeticSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetRifleMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetRifleMesh(class USkeletalMeshComponent* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetRifleMesh");
		
		UUpGunCosmeticManager_SetRifleMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArmorMaterialIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMeshComponent*                              InScreenMesh                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ScreenMaterialIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetMesh(class USkeletalMeshComponent* InMesh, int32_t ArmorMaterialIndex, class UMeshComponent* InScreenMesh, int32_t ScreenMaterialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetMesh");
		
		UUpGunCosmeticManager_SetMesh_Params params {};
		params.InMesh = InMesh;
		params.ArmorMaterialIndex = ArmorMaterialIndex;
		params.InScreenMesh = InScreenMesh;
		params.ScreenMaterialIndex = ScreenMaterialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetKnifeMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetKnifeMesh(class USkeletalMeshComponent* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetKnifeMesh");
		
		UUpGunCosmeticManager_SetKnifeMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetHatRootComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             InHatRootComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetHatRootComponent(class USceneComponent* InHatRootComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetHatRootComponent");
		
		UUpGunCosmeticManager_SetHatRootComponent_Params params {};
		params.InHatRootComponent = InHatRootComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetHandsMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InHandsMesh                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetHandsMesh(class USkeletalMeshComponent* InHandsMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetHandsMesh");
		
		UUpGunCosmeticManager_SetHandsMesh_Params params {};
		params.InHandsMesh = InHandsMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticManager.SetArmorColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunCosmeticManager::SetArmorColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticManager.SetArmorColor");
		
		UUpGunCosmeticManager_SetArmorColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunCosmeticManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunCosmeticManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunCosmeticManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunCosmeticDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunCosmeticDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunCosmeticDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.IsDefaultCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunCosmeticSubsystem::IsDefaultCosmetic(const struct FUpGunOSSItemId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.IsDefaultCosmetic");
		
		UUpGunCosmeticSubsystem_IsDefaultCosmetic_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetWeaponSkinById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             Repl                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunWeaponSkin UUpGunCosmeticSubsystem::GetWeaponSkinById(const struct FUpGunOSSItemId& Repl, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetWeaponSkinById");
		
		UUpGunCosmeticSubsystem_GetWeaponSkinById_Params params {};
		params.Repl = Repl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetScreenById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             Repl                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunScreen UUpGunCosmeticSubsystem::GetScreenById(const struct FUpGunOSSItemId& Repl, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetScreenById");
		
		UUpGunCosmeticSubsystem_GetScreenById_Params params {};
		params.Repl = Repl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetEquipmentById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             Repl                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunEquipment UUpGunCosmeticSubsystem::GetEquipmentById(const struct FUpGunOSSItemId& Repl, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetEquipmentById");
		
		UUpGunCosmeticSubsystem_GetEquipmentById_Params params {};
		params.Repl = Repl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetDefaultCosmetics
	 * 		Flags  -> ()
	 */
	TArray<struct FDataTableRowHandle> UUpGunCosmeticSubsystem::GetDefaultCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetDefaultCosmetics");
		
		UUpGunCosmeticSubsystem_GetDefaultCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetCosmeticTypeById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUpGunCosmeticType UUpGunCosmeticSubsystem::GetCosmeticTypeById(const struct FUpGunOSSItemId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetCosmeticTypeById");
		
		UUpGunCosmeticSubsystem_GetCosmeticTypeById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.GetArmorById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             Repl                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunArmor UUpGunCosmeticSubsystem::GetArmorById(const struct FUpGunOSSItemId& Repl, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.GetArmorById");
		
		UUpGunCosmeticSubsystem_GetArmorById_Params params {};
		params.Repl = Repl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunCosmeticSubsystem.CreateDefaultCosmeticSettings
	 * 		Flags  -> ()
	 */
	struct FUpGunCosmeticSettings UUpGunCosmeticSubsystem::CreateDefaultCosmeticSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunCosmeticSubsystem.CreateDefaultCosmeticSettings");
		
		UUpGunCosmeticSubsystem_CreateDefaultCosmeticSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunCosmeticSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunCosmeticSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunCosmeticSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDamageableInterface.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunDamageableInterface::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDamageableInterface.Damage");
		
		UUpGunDamageableInterface_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunDamageableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunDamageableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDamageableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunProjectileClientSimulated.OnRep_Velocity
	 * 		Flags  -> ()
	 */
	void AUpGunProjectileClientSimulated::OnRep_Velocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunProjectileClientSimulated.OnRep_Velocity");
		
		AUpGunProjectileClientSimulated_OnRep_Velocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunProjectileClientSimulated.InitProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunProjectileClientSimulated::InitProjectile(const struct FVector& InVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunProjectileClientSimulated.InitProjectile");
		
		AUpGunProjectileClientSimulated_InitProjectile_Params params {};
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunProjectileClientSimulated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunProjectileClientSimulated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunProjectileClientSimulated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDamageableProjectileClientSimulated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDamageableProjectileClientSimulated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDamageableProjectileClientSimulated");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunDamageExecutionCalculation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunDamageExecutionCalculation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDamageExecutionCalculation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDamageStatics.MakePointDamageSpecHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayEffect*                             InGameplayEffect                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InEffectCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  InHitResult                                                (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UUpGunDamageStatics::MakePointDamageSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel, const struct FHitResult& InHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDamageStatics.MakePointDamageSpecHandle");
		
		UUpGunDamageStatics_MakePointDamageSpecHandle_Params params {};
		params.InGameplayEffect = InGameplayEffect;
		params.InInstigator = InInstigator;
		params.InEffectCauser = InEffectCauser;
		params.InLevel = InLevel;
		params.InHitResult = InHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffectSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag UUpGunDamageStatics::GetDamageTypeFromGameplayEffectSpec(const struct FGameplayEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffectSpec");
		
		UUpGunDamageStatics_GetDamageTypeFromGameplayEffectSpec_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayEffect*                             Effect                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTag UUpGunDamageStatics::GetDamageTypeFromGameplayEffect(class UGameplayEffect* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDamageStatics.GetDamageTypeFromGameplayEffect");
		
		UUpGunDamageStatics_GetDamageTypeFromGameplayEffect_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDamageStatics.ApplyRadialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InGameplayEffect                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InEffectCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMinDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDamage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InInnerRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InOuterRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFalloff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              IgnoreActors                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunDamageStatics::ApplyRadialDamage(class UObject* WorldContextObject, class UClass* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel, float InMinDamage, float InDamage, float InInnerRadius, float InOuterRadius, float InFalloff, TArray<class AActor*> IgnoreActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDamageStatics.ApplyRadialDamage");
		
		UUpGunDamageStatics_ApplyRadialDamage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InGameplayEffect = InGameplayEffect;
		params.InInstigator = InInstigator;
		params.InEffectCauser = InEffectCauser;
		params.InLevel = InLevel;
		params.InMinDamage = InMinDamage;
		params.InDamage = InDamage;
		params.InInnerRadius = InInnerRadius;
		params.InOuterRadius = InOuterRadius;
		params.InFalloff = InFalloff;
		params.IgnoreActors = IgnoreActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunDamageStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunDamageStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDamageStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchCheatManager.SetTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InTeam                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunDeathmatchCheatManager::SetTeam(const class FString& InTeam, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchCheatManager.SetTeam");
		
		UUpGunDeathmatchCheatManager_SetTeam_Params params {};
		params.InTeam = InTeam;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchCheatManager.NextRound
	 * 		Flags  -> ()
	 */
	void UUpGunDeathmatchCheatManager::NextRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchCheatManager.NextRound");
		
		UUpGunDeathmatchCheatManager_NextRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchCheatManager.GiveSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSkill                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunDeathmatchCheatManager::GiveSkill(const class FString& InSkill, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchCheatManager.GiveSkill");
		
		UUpGunDeathmatchCheatManager_GiveSkill_Params params {};
		params.InSkill = InSkill;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunDeathmatchCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunDeathmatchCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeBase.RestartGame
	 * 		Flags  -> ()
	 */
	void AUpGunGameModeBase::RestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeBase.RestartGame");
		
		AUpGunGameModeBase_RestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeBase.KickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Reason                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameModeBase::KickPlayer(class AUpGunBasePlayerState* PlayerState, const class FText& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeBase.KickPlayer");
		
		AUpGunGameModeBase_KickPlayer_Params params {};
		params.PlayerState = PlayerState;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeBase.BanPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Reason                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameModeBase::BanPlayer(class AUpGunBasePlayerState* PlayerState, const class FText& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeBase.BanPlayer");
		
		AUpGunGameModeBase_BanPlayer_Params params {};
		params.PlayerState = PlayerState;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunGameModeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunGameModeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameModeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.OnRep_Teams
	 * 		Flags  -> ()
	 */
	void AUpGunGameStateBase::OnRep_Teams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.OnRep_Teams");
		
		AUpGunGameStateBase_OnRep_Teams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.OnRep_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameStateBase::OnRep_State(const struct FGameplayTag& OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.OnRep_State");
		
		AUpGunGameStateBase_OnRep_State_Params params {};
		params.OldState = OldState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.OnRep_LeadingPlayer
	 * 		Flags  -> ()
	 */
	void AUpGunGameStateBase::OnRep_LeadingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.OnRep_LeadingPlayer");
		
		AUpGunGameStateBase_OnRep_LeadingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.MulticastPlayerKilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AUpGunBasePlayerState*                       Victim                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AUpGunBasePlayerState*                       Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameStateBase::MulticastPlayerKilled(const struct FGameplayEffectSpecForRPC& Spec, float Amount, class AUpGunBasePlayerState* Victim, class AUpGunBasePlayerState* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.MulticastPlayerKilled");
		
		AUpGunGameStateBase_MulticastPlayerKilled_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		params.Victim = Victim;
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.GetTeamScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                InId                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AUpGunGameStateBase::GetTeamScore(const struct FUpGunTeamId& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.GetTeamScore");
		
		AUpGunGameStateBase_GetTeamScore_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.GetTeamById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunTeamId                                InId                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunTeam AUpGunGameStateBase::GetTeamById(const struct FUpGunTeamId& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.GetTeamById");
		
		AUpGunGameStateBase_GetTeamById_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.GetSortedByScorePlayers
	 * 		Flags  -> ()
	 */
	TArray<class APlayerState*> AUpGunGameStateBase::GetSortedByScorePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.GetSortedByScorePlayers");
		
		AUpGunGameStateBase_GetSortedByScorePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameStateBase.GetGameModeSettings
	 * 		Flags  -> ()
	 */
	class AUpGunGameModeSettings* AUpGunGameStateBase::GetGameModeSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameStateBase.GetGameModeSettings");
		
		AUpGunGameStateBase_GetGameModeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunGameStateBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunGameStateBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameStateBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchGameState.OnRep_Round
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldRound                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunDeathmatchGameState::OnRep_Round(unsigned char OldRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchGameState.OnRep_Round");
		
		AUpGunDeathmatchGameState_OnRep_Round_Params params {};
		params.OldRound = OldRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchGhost.OnCosmeticSettingsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunCosmeticSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunDeathmatchGhost::OnCosmeticSettingsUpdated(const struct FUpGunCosmeticSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchGhost.OnCosmeticSettingsUpdated");
		
		AUpGunDeathmatchGhost_OnCosmeticSettingsUpdated_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchGhost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchGhost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchGhost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchPlayerController.ServerPickSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InId                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunDeathmatchPlayerController::ServerPickSkill(const struct FGameplayTag& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchPlayerController.ServerPickSkill");
		
		AUpGunDeathmatchPlayerController_ServerPickSkill_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchPlayerController.OnRep_PickableSkills
	 * 		Flags  -> ()
	 */
	void AUpGunDeathmatchPlayerController::OnRep_PickableSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchPlayerController.OnRep_PickableSkills");
		
		AUpGunDeathmatchPlayerController_OnRep_PickableSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchPlayerController.ClientPickSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InId                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunDeathmatchPlayerController::ClientPickSkill(const struct FGameplayTag& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchPlayerController.ClientPickSkill");
		
		AUpGunDeathmatchPlayerController_ClientPickSkill_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunDeathmatchPlayerState.OnRep_Lifes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunDeathmatchPlayerState::OnRep_Lifes(unsigned char OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunDeathmatchPlayerState.OnRep_Lifes");
		
		AUpGunDeathmatchPlayerState_OnRep_Lifes_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeSettings.RemoveMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InMutator                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameModeSettings::RemoveMutator(const struct FGameplayTag& InMutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeSettings.RemoveMutator");
		
		AUpGunGameModeSettings_RemoveMutator_Params params {};
		params.InMutator = InMutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeSettings.OnRep_Mutators
	 * 		Flags  -> ()
	 */
	void AUpGunGameModeSettings::OnRep_Mutators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeSettings.OnRep_Mutators");
		
		AUpGunGameModeSettings_OnRep_Mutators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeSettings.IsTeamBased
	 * 		Flags  -> ()
	 */
	bool AUpGunGameModeSettings::IsTeamBased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeSettings.IsTeamBased");
		
		AUpGunGameModeSettings_IsTeamBased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeSettings.CanStartGame
	 * 		Flags  -> ()
	 */
	bool AUpGunGameModeSettings::CanStartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeSettings.CanStartGame");
		
		AUpGunGameModeSettings_CanStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameModeSettings.AddMutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InMutator                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunGameModeSettings::AddMutator(const struct FGameplayTag& InMutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameModeSettings.AddMutator");
		
		AUpGunGameModeSettings_AddMutator_Params params {};
		params.InMutator = InMutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunGameModeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunGameModeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameModeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunDeathmatchSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunDeathmatchSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunDeathmatchSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunFriendsStatics.IsFriendPlayingThisGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunFriend                                InFriend                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUpGunFriendsStatics::IsFriendPlayingThisGame(const struct FUpGunFriend& InFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunFriendsStatics.IsFriendPlayingThisGame");
		
		UUpGunFriendsStatics_IsFriendPlayingThisGame_Params params {};
		params.InFriend = InFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunFriendsStatics.IsFriendOnline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunFriend                                InFriend                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UUpGunFriendsStatics::IsFriendOnline(const struct FUpGunFriend& InFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunFriendsStatics.IsFriendOnline");
		
		UUpGunFriendsStatics_IsFriendOnline_Params params {};
		params.InFriend = InFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunFriendsStatics.GetFriendName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunFriend                                InFriend                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UUpGunFriendsStatics::GetFriendName(const struct FUpGunFriend& InFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunFriendsStatics.GetFriendName");
		
		UUpGunFriendsStatics_GetFriendName_Params params {};
		params.InFriend = InFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunFriendsStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunFriendsStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunFriendsStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunFriendsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunFriendsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunFriendsSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameInstance.BP_OnNetworkError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetworkFailure                                    Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunGameInstance::BP_OnNetworkError(ENetworkFailure Type, const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameInstance.BP_OnNetworkError");
		
		UUpGunGameInstance_BP_OnNetworkError_Params params {};
		params.Type = Type;
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameInstance.BP_OnInitialInventoryReady
	 * 		Flags  -> ()
	 */
	void UUpGunGameInstance::BP_OnInitialInventoryReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameInstance.BP_OnInitialInventoryReady");
		
		UUpGunGameInstance_BP_OnInitialInventoryReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunGameModeEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunGameModeEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameModeEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunGameNetworkManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunGameNetworkManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameNetworkManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameplayAbility.GetActivationOwnedTags
	 * 		Flags  -> ()
	 */
	struct FGameplayTagContainer UUpGunGameplayAbility::GetActivationOwnedTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameplayAbility.GetActivationOwnedTags");
		
		UUpGunGameplayAbility_GetActivationOwnedTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameplayAbility.GetAbilityTags
	 * 		Flags  -> ()
	 */
	struct FGameplayTagContainer UUpGunGameplayAbility::GetAbilityTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameplayAbility.GetAbilityTags");
		
		UUpGunGameplayAbility_GetAbilityTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameplayAbility.CancelAndTryOtherAbilityInInputSlot
	 * 		Flags  -> ()
	 */
	void UUpGunGameplayAbility::CancelAndTryOtherAbilityInInputSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameplayAbility.CancelAndTryOtherAbilityInInputSlot");
		
		UUpGunGameplayAbility_CancelAndTryOtherAbilityInInputSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameplayAbility.BP_InputPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunGameplayAbility::BP_InputPressed(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameplayAbility.BP_InputPressed");
		
		UUpGunGameplayAbility_BP_InputPressed_Params params {};
		params.Handle = Handle;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunGameplayAbility.BP_GetCooldownTags
	 * 		Flags  -> ()
	 */
	struct FGameplayTagContainer UUpGunGameplayAbility::BP_GetCooldownTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunGameplayAbility.BP_GetCooldownTags");
		
		UUpGunGameplayAbility_BP_GetCooldownTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunGameplayAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunGameplayAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameplayAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunGameplayCueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunGameplayCueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunGameplayCueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunInputLocalPlayerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunInputLocalPlayerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunInputLocalPlayerSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunInventorySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunInventorySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunInventorySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunInventorySubsystem.TriggerItemDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GeneratorId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunInventorySubsystem::TriggerItemDrop(const class FString& GeneratorId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunInventorySubsystem.TriggerItemDrop");
		
		UUpGunInventorySubsystem_TriggerItemDrop_Params params {};
		params.GeneratorId = GeneratorId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunInventorySubsystem.HasItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             InId                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunInventorySubsystem::HasItem(const struct FUpGunOSSItemId& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunInventorySubsystem.HasItem");
		
		UUpGunInventorySubsystem_HasItem_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunInventorySubsystem.GivePromoItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             InId                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunInventorySubsystem::GivePromoItem(const struct FUpGunOSSItemId& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunInventorySubsystem.GivePromoItem");
		
		UUpGunInventorySubsystem_GivePromoItem_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunInventorySubsystem.GiveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemId                             InId                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunInventorySubsystem::GiveItem(const struct FUpGunOSSItemId& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunInventorySubsystem.GiveItem");
		
		UUpGunInventorySubsystem_GiveItem_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunInventorySubsystem.GetItems
	 * 		Flags  -> ()
	 */
	TArray<struct FUpGunInventoryItem> UUpGunInventorySubsystem::GetItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunInventorySubsystem.GetItems");
		
		UUpGunInventorySubsystem_GetItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunInventorySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunInventorySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunInventorySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunLobbyCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunLobbyCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameMode.LaunchGame
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyGameMode::LaunchGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameMode.LaunchGame");
		
		AUpGunLobbyGameMode_LaunchGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunLobbyGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunLobbyGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.UpdateArenas
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyGameState::UpdateArenas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.UpdateArenas");
		
		AUpGunLobbyGameState_UpdateArenas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.SetSelectedGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunGameModeEntry*                         InGameMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunLobbyGameState::SetSelectedGameMode(class UUpGunGameModeEntry* InGameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.SetSelectedGameMode");
		
		AUpGunLobbyGameState_SetSelectedGameMode_Params params {};
		params.InGameMode = InGameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.SetArena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunArena*                                 InArena                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunLobbyGameState::SetArena(class UUpGunArena* InArena)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.SetArena");
		
		AUpGunLobbyGameState_SetArena_Params params {};
		params.InArena = InArena;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameModeSettings
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyGameState::OnRep_SelectedGameModeSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameModeSettings");
		
		AUpGunLobbyGameState_OnRep_SelectedGameModeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameMode
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyGameState::OnRep_SelectedGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.OnRep_SelectedGameMode");
		
		AUpGunLobbyGameState_OnRep_SelectedGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.OnRep_Arena
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyGameState::OnRep_Arena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.OnRep_Arena");
		
		AUpGunLobbyGameState_OnRep_Arena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyGameState.CanLaunchGame
	 * 		Flags  -> ()
	 */
	bool AUpGunLobbyGameState::CanLaunchGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyGameState.CanLaunchGame");
		
		AUpGunLobbyGameState_CanLaunchGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunLobbyGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunLobbyGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyPlayerController.ServerSwitchReadyState
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyPlayerController::ServerSwitchReadyState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyPlayerController.ServerSwitchReadyState");
		
		AUpGunLobbyPlayerController_ServerSwitchReadyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunLobbyPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunLobbyPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyPlayerState.OnRep_bIsReady
	 * 		Flags  -> ()
	 */
	void AUpGunLobbyPlayerState::OnRep_bIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyPlayerState.OnRep_bIsReady");
		
		AUpGunLobbyPlayerState_OnRep_bIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunLobbyPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunLobbyPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyStatics.GetLobbyPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunLobbyData                             Lobby                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUpGunLobbyStatics::GetLobbyPing(const struct FUpGunLobbyData& Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyStatics.GetLobbyPing");
		
		UUpGunLobbyStatics_GetLobbyPing_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyStatics.GetLobbyMaxPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunLobbyData                             Lobby                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUpGunLobbyStatics::GetLobbyMaxPlayers(const struct FUpGunLobbyData& Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyStatics.GetLobbyMaxPlayers");
		
		UUpGunLobbyStatics_GetLobbyMaxPlayers_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyStatics.GetLobbyGameModeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunLobbyData                             Lobby                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUpGunLobbyStatics::GetLobbyGameModeName(const struct FUpGunLobbyData& Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyStatics.GetLobbyGameModeName");
		
		UUpGunLobbyStatics_GetLobbyGameModeName_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyStatics.GetLobbyConnectedPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunLobbyData                             Lobby                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UUpGunLobbyStatics::GetLobbyConnectedPlayers(const struct FUpGunLobbyData& Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyStatics.GetLobbyConnectedPlayers");
		
		UUpGunLobbyStatics_GetLobbyConnectedPlayers_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbyStatics.GetLobbyArenaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunLobbyData                             Lobby                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UUpGunLobbyStatics::GetLobbyArenaName(const struct FUpGunLobbyData& Lobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbyStatics.GetLobbyArenaName");
		
		UUpGunLobbyStatics_GetLobbyArenaName_Params params {};
		params.Lobby = Lobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunLobbyStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunLobbyStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbyStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.UpdateGameModeAndArena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arena                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunLobbySubsystem::UpdateGameModeAndArena(const class FString& GameMode, const class FString& Arena)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.UpdateGameModeAndArena");
		
		UUpGunLobbySubsystem_UpdateGameModeAndArena_Params params {};
		params.GameMode = GameMode;
		params.Arena = Arena;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.SupportsJoiningByCode
	 * 		Flags  -> ()
	 */
	bool UUpGunLobbySubsystem::SupportsJoiningByCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.SupportsJoiningByCode");
		
		UUpGunLobbySubsystem_SupportsJoiningByCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.OnFindJoinByCodeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FUpGunLobbyData>                     Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunLobbySubsystem::OnFindJoinByCodeCompleted(bool bSucceeded, TArray<struct FUpGunLobbyData> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.OnFindJoinByCodeCompleted");
		
		UUpGunLobbySubsystem_OnFindJoinByCodeCompleted_Params params {};
		params.bSucceeded = bSucceeded;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.JoinLobbyByCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InCode                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleted                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunLobbySubsystem::JoinLobbyByCode(class APlayerController* Player, const class FString& InCode, const class FScriptDelegate& OnCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.JoinLobbyByCode");
		
		UUpGunLobbySubsystem_JoinLobbyByCode_Params params {};
		params.Player = Player;
		params.InCode = InCode;
		params.OnCompleted = OnCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.JoinLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpGunLobbyData                             InLobby                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleted                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunLobbySubsystem::JoinLobby(class APlayerController* Player, const struct FUpGunLobbyData& InLobby, const class FScriptDelegate& OnCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.JoinLobby");
		
		UUpGunLobbySubsystem_JoinLobby_Params params {};
		params.Player = Player;
		params.InLobby = InLobby;
		params.OnCompleted = OnCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.InviteFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunFriend                                InFriend                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunLobbySubsystem::InviteFriend(const struct FUpGunFriend& InFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.InviteFriend");
		
		UUpGunLobbySubsystem_InviteFriend_Params params {};
		params.InFriend = InFriend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.GetLobbyName
	 * 		Flags  -> ()
	 */
	class FString UUpGunLobbySubsystem::GetLobbyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.GetLobbyName");
		
		UUpGunLobbySubsystem_GetLobbyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.GetLobbyCode
	 * 		Flags  -> ()
	 */
	class FString UUpGunLobbySubsystem::GetLobbyCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.GetLobbyCode");
		
		UUpGunLobbySubsystem_GetLobbyCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.FindLobbies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequiresFullVersion                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleted                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunLobbySubsystem::FindLobbies(class APlayerController* Player, bool bRequiresFullVersion, const class FScriptDelegate& OnCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.FindLobbies");
		
		UUpGunLobbySubsystem_FindLobbies_Params params {};
		params.Player = Player;
		params.bRequiresFullVersion = bRequiresFullVersion;
		params.OnCompleted = OnCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.DoesCurrentLobbyRequiresFullVersion
	 * 		Flags  -> ()
	 */
	bool UUpGunLobbySubsystem::DoesCurrentLobbyRequiresFullVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.DoesCurrentLobbyRequiresFullVersion");
		
		UUpGunLobbySubsystem_DoesCurrentLobbyRequiresFullVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.CreateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLAN                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPublicServer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFriendsOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequiresFullVersion                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCompleted                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunLobbySubsystem::CreateLobby(class APlayerController* Player, const class FString& Name, int32_t MaxPlayers, bool bIsLAN, bool bIsPublicServer, bool bIsFriendsOnly, bool bRequiresFullVersion, const class FScriptDelegate& OnCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.CreateLobby");
		
		UUpGunLobbySubsystem_CreateLobby_Params params {};
		params.Player = Player;
		params.Name = Name;
		params.MaxPlayers = MaxPlayers;
		params.bIsLAN = bIsLAN;
		params.bIsPublicServer = bIsPublicServer;
		params.bIsFriendsOnly = bIsFriendsOnly;
		params.bRequiresFullVersion = bRequiresFullVersion;
		params.OnCompleted = OnCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunLobbySubsystem.CopyLobbyCodeToClipboard
	 * 		Flags  -> ()
	 */
	void UUpGunLobbySubsystem::CopyLobbyCodeToClipboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunLobbySubsystem.CopyLobbyCodeToClipboard");
		
		UUpGunLobbySubsystem_CopyLobbyCodeToClipboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunLobbySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunLobbySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLobbySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMMC_RifleDamage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMMC_RifleDamage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMMC_RifleDamage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMMC_LevelExponential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMMC_LevelExponential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMMC_LevelExponential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMMC_LustForLife.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMMC_LustForLife::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMMC_LustForLife");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMMC_Skill_Regeneration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMMC_Skill_Regeneration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMMC_Skill_Regeneration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMMC_Skill_SpeedIsKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMMC_Skill_SpeedIsKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMMC_Skill_SpeedIsKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunMutator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunMutator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunMutator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunPodium.SwitchToPodium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunPodiumPlayerInfos>             InPlayers                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunPodium::SwitchToPodium(TArray<struct FUpGunPodiumPlayerInfos> InPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunPodium.SwitchToPodium");
		
		AUpGunPodium_SwitchToPodium_Params params {};
		params.InPlayers = InPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunPodium.MulticastSwitchToPodium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunPodiumPlayerInfos>             InPlayers                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunPodium::MulticastSwitchToPodium(TArray<struct FUpGunPodiumPlayerInfos> InPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunPodium.MulticastSwitchToPodium");
		
		AUpGunPodium_MulticastSwitchToPodium_Params params {};
		params.InPlayers = InPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunPodium.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunPodium::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunPodium");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunScoreDatabaseSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunScoreDatabaseSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunScoreDatabaseSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunScoreEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunScoreEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunScoreEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillCount
	 * 		Flags  -> ()
	 */
	int32_t UUpGunSkillDatabaseSubsystem::GetSkillCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillCount");
		
		UUpGunSkillDatabaseSubsystem_GetSkillCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunSkill* UUpGunSkillDatabaseSubsystem::GetSkillById(const struct FGameplayTag& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillDatabaseSubsystem.GetSkillById");
		
		UUpGunSkillDatabaseSubsystem_GetSkillById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSkillDatabaseSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSkillDatabaseSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkillDatabaseSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerBPLib.GetSkillManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunSkillManagerComponent* UUpGunSkillManagerBPLib::GetSkillManager(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerBPLib.GetSkillManager");
		
		UUpGunSkillManagerBPLib_GetSkillManager_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSkillManagerBPLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSkillManagerBPLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkillManagerBPLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerComponent.OnRep_Skills
	 * 		Flags  -> ()
	 */
	void UUpGunSkillManagerComponent::OnRep_Skills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerComponent.OnRep_Skills");
		
		UUpGunSkillManagerComponent_OnRep_Skills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerComponent.HasSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SkillId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunSkillManagerComponent::HasSkill(const struct FGameplayTag& SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerComponent.HasSkill");
		
		UUpGunSkillManagerComponent_HasSkill_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerComponent.GiveSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SkillId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunSkillManagerComponent::GiveSkill(const struct FGameplayTag& SkillId, unsigned char Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerComponent.GiveSkill");
		
		UUpGunSkillManagerComponent_GiveSkill_Params params {};
		params.SkillId = SkillId;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerComponent.GetSkillLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SkillId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UUpGunSkillManagerComponent::GetSkillLevel(const struct FGameplayTag& SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerComponent.GetSkillLevel");
		
		UUpGunSkillManagerComponent_GetSkillLevel_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerComponent.CanHaveSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SkillId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunSkillManagerComponent::CanHaveSkill(const struct FGameplayTag& SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerComponent.CanHaveSkill");
		
		UUpGunSkillManagerComponent_CanHaveSkill_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSkillManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSkillManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkillManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillManagerInterface.GetSkillManager
	 * 		Flags  -> ()
	 */
	class UUpGunSkillManagerComponent* UUpGunSkillManagerInterface::GetSkillManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillManagerInterface.GetSkillManager");
		
		UUpGunSkillManagerInterface_GetSkillManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSkillManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSkillManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkillManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillTPDisk.OnRep_Destroyed
	 * 		Flags  -> ()
	 */
	void AUpGunSkillTPDisk::OnRep_Destroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillTPDisk.OnRep_Destroyed");
		
		AUpGunSkillTPDisk_OnRep_Destroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillTPDisk.OnHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AUpGunSkillTPDisk::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillTPDisk.OnHit");
		
		AUpGunSkillTPDisk_OnHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSkillTPDisk.BP_Destroyed
	 * 		Flags  -> ()
	 */
	void AUpGunSkillTPDisk::BP_Destroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSkillTPDisk.BP_Destroyed");
		
		AUpGunSkillTPDisk_BP_Destroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunSkillTPDisk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunSkillTPDisk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSkillTPDisk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunSpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunSpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSpectatorMovementComponent.ServerMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunSpectatorOwningClientMove             Move                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunSpectatorMovementComponent::ServerMove(const struct FUpGunSpectatorOwningClientMove& Move)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSpectatorMovementComponent.ServerMove");
		
		UUpGunSpectatorMovementComponent_ServerMove_Params params {};
		params.Move = Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSpectatorMovementComponent.ClientMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize100                      CorrectedLocation                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunSpectatorMovementComponent::ClientMove(const struct FVector_NetQuantize100& CorrectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSpectatorMovementComponent.ClientMove");
		
		UUpGunSpectatorMovementComponent_ClientMove_Params params {};
		params.CorrectedLocation = CorrectedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSpectatorMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSpectatorMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSpectatorMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSpectatorPawn.ServerUpdateRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AUpGunSpectatorPawn::ServerUpdateRotation(const struct FRotator& InRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSpectatorPawn.ServerUpdateRotation");
		
		AUpGunSpectatorPawn_ServerUpdateRotation_Params params {};
		params.InRotation = InRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunSpectatorPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunSpectatorPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSpectatorPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatManager.GetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InId                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpGunStatManagerStat UUpGunStatManager::GetStat(const struct FGameplayTag& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatManager.GetStat");
		
		UUpGunStatManager_GetStat_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatManager.ClientUpdateStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        InIds                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InNewValues                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunStatManager::ClientUpdateStats(TArray<struct FGameplayTag> InIds, TArray<float> InNewValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatManager.ClientUpdateStats");
		
		UUpGunStatManager_ClientUpdateStats_Params params {};
		params.InIds = InIds;
		params.InNewValues = InNewValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatManager.AddIntStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InDelta                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunStatManager::AddIntStat(const struct FGameplayTag& InId, int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatManager.AddIntStat");
		
		UUpGunStatManager_AddIntStat_Params params {};
		params.InId = InId;
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatManager.AddFloatStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDelta                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunStatManager::AddFloatStat(const struct FGameplayTag& InId, float InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatManager.AddFloatStat");
		
		UUpGunStatManager_AddFloatStat_Params params {};
		params.InId = InId;
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunStatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunStatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunStatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.UnlockAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::UnlockAchievement(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.UnlockAchievement");
		
		UUpGunStatSubsystem_UnlockAchievement_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.SetIntStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::SetIntStat(const struct FGameplayTag& Stat, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.SetIntStat");
		
		UUpGunStatSubsystem_SetIntStat_Params params {};
		params.Stat = Stat;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.SetFloatStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::SetFloatStat(const struct FGameplayTag& Stat, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.SetFloatStat");
		
		UUpGunStatSubsystem_SetFloatStat_Params params {};
		params.Stat = Stat;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetStatType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpGunStatType                                     Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetStatType(const struct FGameplayTag& Stat, EUpGunStatType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetStatType");
		
		UUpGunStatSubsystem_GetStatType_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetStatOSSUpdateMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpGunStatOSSUpdateMode                            Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetStatOSSUpdateMode(const struct FGameplayTag& Stat, EUpGunStatOSSUpdateMode* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetStatOSSUpdateMode");
		
		UUpGunStatSubsystem_GetStatOSSUpdateMode_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetStatName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Name                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetStatName(const struct FGameplayTag& Stat, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetStatName");
		
		UUpGunStatSubsystem_GetStatName_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetIntStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetIntStat(const struct FGameplayTag& Stat, int32_t* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetIntStat");
		
		UUpGunStatSubsystem_GetIntStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetFloatStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetFloatStat(const struct FGameplayTag& Stat, float* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetFloatStat");
		
		UUpGunStatSubsystem_GetFloatStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetAchievementProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetAchievementProgress(const class FString& ID, float* Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetAchievementProgress");
		
		UUpGunStatSubsystem_GetAchievementProgress_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percentage != nullptr)
			*Percentage = params.Percentage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetAchievementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUpGunStatSubsystem::GetAchievementName(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetAchievementName");
		
		UUpGunStatSubsystem_GetAchievementName_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetAchievementDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUpGunStatSubsystem::GetAchievementDescription(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetAchievementDescription");
		
		UUpGunStatSubsystem_GetAchievementDescription_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.GetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAchieved                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::GetAchievement(const class FString& ID, bool* bIsAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.GetAchievement");
		
		UUpGunStatSubsystem_GetAchievement_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAchieved != nullptr)
			*bIsAchieved = params.bIsAchieved;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.FlushStats
	 * 		Flags  -> ()
	 */
	void UUpGunStatSubsystem::FlushStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.FlushStats");
		
		UUpGunStatSubsystem_FlushStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.AddIntStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::AddIntStat(const struct FGameplayTag& Stat, int32_t Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.AddIntStat");
		
		UUpGunStatSubsystem_AddIntStat_Params params {};
		params.Stat = Stat;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunStatSubsystem.AddFloatStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Stat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunStatSubsystem::AddFloatStat(const struct FGameplayTag& Stat, float Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunStatSubsystem.AddFloatStat");
		
		UUpGunStatSubsystem_AddFloatStat_Params params {};
		params.Stat = Stat;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunStatSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunStatSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunStatSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunStatDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunStatDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunStatDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.IsFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunSynchronizedTimer                     InTimer                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUpGunSynchronizedTimerBlueprintFunctionLibrary::IsFinished(const struct FUpGunSynchronizedTimer& InTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.IsFinished");
		
		UUpGunSynchronizedTimerBlueprintFunctionLibrary_IsFinished_Params params {};
		params.InTimer = InTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.GetRemainingTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunSynchronizedTimer                     InTimer                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UUpGunSynchronizedTimerBlueprintFunctionLibrary::GetRemainingTime(const struct FUpGunSynchronizedTimer& InTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary.GetRemainingTime");
		
		UUpGunSynchronizedTimerBlueprintFunctionLibrary_GetRemainingTime_Params params {};
		params.InTimer = InTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunSynchronizedTimerBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunSynchronizedTimerBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunSynchronizedTimerBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.ToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            ID                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUpGunUtilsBlueprintFunctionLibrary::ToString(const struct FUniqueNetIdRepl& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.ToString");
		
		UUpGunUtilsBlueprintFunctionLibrary_ToString_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.SortPlayerStateArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AUpGunBasePlayerState*>               inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class AUpGunBasePlayerState*> UUpGunUtilsBlueprintFunctionLibrary::SortPlayerStateArray(TArray<class AUpGunBasePlayerState*> inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.SortPlayerStateArray");
		
		UUpGunUtilsBlueprintFunctionLibrary_SortPlayerStateArray_Params params {};
		params.inArray = inArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsWorldTearingDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUpGunUtilsBlueprintFunctionLibrary::IsWorldTearingDown(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsWorldTearingDown");
		
		UUpGunUtilsBlueprintFunctionLibrary_IsWorldTearingDown_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsBuildShipping
	 * 		Flags  -> ()
	 */
	bool UUpGunUtilsBlueprintFunctionLibrary::IsBuildShipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.IsBuildShipping");
		
		UUpGunUtilsBlueprintFunctionLibrary_IsBuildShipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetVersion
	 * 		Flags  -> ()
	 */
	class FString UUpGunUtilsBlueprintFunctionLibrary::GetVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetVersion");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetUniqueNetIdFromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PS                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUniqueNetIdRepl UUpGunUtilsBlueprintFunctionLibrary::GetUniqueNetIdFromPlayerState(class APlayerState* PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetUniqueNetIdFromPlayerState");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetUniqueNetIdFromPlayerState_Params params {};
		params.PS = PS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetSkillTPDisk_TargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FUpGunTargetData_SkillTPDisk UUpGunUtilsBlueprintFunctionLibrary::GetSkillTPDisk_TargetData(const struct FGameplayAbilityTargetDataHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetSkillTPDisk_TargetData");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetSkillTPDisk_TargetData_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetMaxPlayers
	 * 		Flags  -> ()
	 */
	int32_t UUpGunUtilsBlueprintFunctionLibrary::GetMaxPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetMaxPlayers");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetMaxPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetEffectContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         InSpec                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectContextHandle UUpGunUtilsBlueprintFunctionLibrary::GetEffectContext(const struct FGameplayEffectSpec& InSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetEffectContext");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetEffectContext_Params params {};
		params.InSpec = InSpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetArena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpGunArena* UUpGunUtilsBlueprintFunctionLibrary::GetArena(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetArena");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetArena_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetAllSubTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TagName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FGameplayTag> UUpGunUtilsBlueprintFunctionLibrary::GetAllSubTags(const class FName& TagName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.GetAllSubTags");
		
		UUpGunUtilsBlueprintFunctionLibrary_GetAllSubTags_Params params {};
		params.TagName = TagName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBlueprintFunctionLibrary.AntiSpam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUpGunUtilsBlueprintFunctionLibrary::AntiSpam(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBlueprintFunctionLibrary.AntiSpam");
		
		UUpGunUtilsBlueprintFunctionLibrary_AntiSpam_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Duration = Duration;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunUtilsBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunUtilsBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunUtilsBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBPLib.GetDefaultObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UUpGunUtilsBPLib::GetDefaultObject(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBPLib.GetDefaultObject");
		
		UUpGunUtilsBPLib_GetDefaultObject_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBPLib.GetAbilitySpecsFromContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecContainer               Container                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	TArray<struct FGameplayAbilitySpec> UUpGunUtilsBPLib::GetAbilitySpecsFromContainer(const struct FGameplayAbilitySpecContainer& Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBPLib.GetAbilitySpecsFromContainer");
		
		UUpGunUtilsBPLib_GetAbilitySpecsFromContainer_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBPLib.GetAbilityInputSlotFromAbilitySpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpec                        InSpec                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EUpGunInput UUpGunUtilsBPLib::GetAbilityInputSlotFromAbilitySpec(const struct FGameplayAbilitySpec& InSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBPLib.GetAbilityInputSlotFromAbilitySpec");
		
		UUpGunUtilsBPLib_GetAbilityInputSlotFromAbilitySpec_Params params {};
		params.InSpec = InSpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunUtilsBPLib.GetAbilityCDOFromAbilitySpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpec                        InSpec                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGameplayAbility* UUpGunUtilsBPLib::GetAbilityCDOFromAbilitySpec(const struct FGameplayAbilitySpec& InSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunUtilsBPLib.GetAbilityCDOFromAbilitySpec");
		
		UUpGunUtilsBPLib_GetAbilityCDOFromAbilitySpec_Params params {};
		params.InSpec = InSpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunUtilsBPLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunUtilsBPLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunUtilsBPLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.SpawnProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SyncChance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::SpawnProjectile(const struct FVector& Direction, float SyncChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.SpawnProjectile");
		
		AUpGunWeapon_SpawnProjectile_Params params {};
		params.Direction = Direction;
		params.SyncChance = SyncChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.ShowWeaponLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAffectFPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectTPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::ShowWeaponLocal(bool bAffectFPS, bool bAffectTPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.ShowWeaponLocal");
		
		AUpGunWeapon_ShowWeaponLocal_Params params {};
		params.bAffectFPS = bAffectFPS;
		params.bAffectTPS = bAffectTPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.Reload
	 * 		Flags  -> ()
	 */
	void AUpGunWeapon::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.Reload");
		
		AUpGunWeapon_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.OnRep_Magazine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldMagazine                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::OnRep_Magazine(unsigned char OldMagazine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.OnRep_Magazine");
		
		AUpGunWeapon_OnRep_Magazine_Params params {};
		params.OldMagazine = OldMagazine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.OnRep_CharacterOwner
	 * 		Flags  -> ()
	 */
	void AUpGunWeapon::OnRep_CharacterOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.OnRep_CharacterOwner");
		
		AUpGunWeapon_OnRep_CharacterOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.OnRep_Attachments
	 * 		Flags  -> ()
	 */
	void AUpGunWeapon::OnRep_Attachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.OnRep_Attachments");
		
		AUpGunWeapon_OnRep_Attachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.OnRep_Ammo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::OnRep_Ammo(unsigned char OldAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.OnRep_Ammo");
		
		AUpGunWeapon_OnRep_Ammo_Params params {};
		params.OldAmmo = OldAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.OnFired
	 * 		Flags  -> ()
	 */
	void AUpGunWeapon::OnFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.OnFired");
		
		AUpGunWeapon_OnFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.MulticastSpawnProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunWeaponProjectileFireRPC>       RPCs                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::MulticastSpawnProjectile(TArray<struct FUpGunWeaponProjectileFireRPC> RPCs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.MulticastSpawnProjectile");
		
		AUpGunWeapon_MulticastSpawnProjectile_Params params {};
		params.RPCs = RPCs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.IsFull
	 * 		Flags  -> ()
	 */
	bool AUpGunWeapon::IsFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.IsFull");
		
		AUpGunWeapon_IsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.IsEmpty
	 * 		Flags  -> ()
	 */
	bool AUpGunWeapon::IsEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.IsEmpty");
		
		AUpGunWeapon_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.HideWeaponLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAffectFPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectTPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::HideWeaponLocal(bool bAffectFPS, bool bAffectTPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.HideWeaponLocal");
		
		AUpGunWeapon_HideWeaponLocal_Params params {};
		params.bAffectFPS = bAffectFPS;
		params.bAffectTPS = bAffectTPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.GetUsableMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLocallyControlled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* AUpGunWeapon::GetUsableMesh(bool bIsLocallyControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.GetUsableMesh");
		
		AUpGunWeapon_GetUsableMesh_Params params {};
		params.bIsLocallyControlled = bIsLocallyControlled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeapon.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SyncChance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUpGunWeapon::Fire(float SyncChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeapon.Fire");
		
		AUpGunWeapon_Fire_Params params {};
		params.SyncChance = SyncChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunWeaponAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunWeaponAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWeaponAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleFireRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldRifleFireRate                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_RifleFireRate(const struct FGameplayAttributeData& OldRifleFireRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleFireRate");
		
		UUpGunWeaponAttributeSet_OnRep_RifleFireRate_Params params {};
		params.OldRifleFireRate = OldRifleFireRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDispersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldRifleDispersion                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_RifleDispersion(const struct FGameplayAttributeData& OldRifleDispersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDispersion");
		
		UUpGunWeaponAttributeSet_OnRep_RifleDispersion_Params params {};
		params.OldRifleDispersion = OldRifleDispersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldRifleDamage                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_RifleDamage(const struct FGameplayAttributeData& OldRifleDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleDamage");
		
		UUpGunWeaponAttributeSet_OnRep_RifleDamage_Params params {};
		params.OldRifleDamage = OldRifleDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleCriticalHitChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldRifleCriticalHitChance                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_RifleCriticalHitChance(const struct FGameplayAttributeData& OldRifleCriticalHitChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleCriticalHitChance");
		
		UUpGunWeaponAttributeSet_OnRep_RifleCriticalHitChance_Params params {};
		params.OldRifleCriticalHitChance = OldRifleCriticalHitChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleBulletSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldRifleBulletSpeed                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_RifleBulletSpeed(const struct FGameplayAttributeData& OldRifleBulletSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_RifleBulletSpeed");
		
		UUpGunWeaponAttributeSet_OnRep_RifleBulletSpeed_Params params {};
		params.OldRifleBulletSpeed = OldRifleBulletSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponAttributeSet.OnRep_DamageBaseMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldDamageBaseMultiplier                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponAttributeSet::OnRep_DamageBaseMultiplier(const struct FGameplayAttributeData& OldDamageBaseMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponAttributeSet.OnRep_DamageBaseMultiplier");
		
		UUpGunWeaponAttributeSet_OnRep_DamageBaseMultiplier_Params params {};
		params.OldDamageBaseMultiplier = OldDamageBaseMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunWeaponAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunWeaponAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWeaponAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.UnequipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::UnequipWeapon(class AUpGunWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.UnequipWeapon");
		
		UUpGunWeaponManagerComponent_UnequipWeapon_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.SwitchWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                InTag                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::SwitchWeapon(const struct FGameplayTag& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.SwitchWeapon");
		
		UUpGunWeaponManagerComponent_SwitchWeapon_Params params {};
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.ShowWeaponsLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnlyCurrentWeapon                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectFPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectTPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::ShowWeaponsLocal(bool bOnlyCurrentWeapon, bool bAffectFPS, bool bAffectTPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.ShowWeaponsLocal");
		
		UUpGunWeaponManagerComponent_ShowWeaponsLocal_Params params {};
		params.bOnlyCurrentWeapon = bOnlyCurrentWeapon;
		params.bAffectFPS = bAffectFPS;
		params.bAffectTPS = bAffectTPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.OnRep_CurrentWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                OldWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::OnRep_CurrentWeapon(class AUpGunWeapon* OldWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.OnRep_CurrentWeapon");
		
		UUpGunWeaponManagerComponent_OnRep_CurrentWeapon_Params params {};
		params.OldWeapon = OldWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.HideWeaponsLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnlyCurrentWeapon                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectFPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectTPS                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::HideWeaponsLocal(bool bOnlyCurrentWeapon, bool bAffectFPS, bool bAffectTPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.HideWeaponsLocal");
		
		UUpGunWeaponManagerComponent_HideWeaponsLocal_Params params {};
		params.bOnlyCurrentWeapon = bOnlyCurrentWeapon;
		params.bAffectFPS = bAffectFPS;
		params.bAffectTPS = bAffectTPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.GetWeaponByGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AUpGunWeapon* UUpGunWeaponManagerComponent::GetWeaponByGameplayTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.GetWeaponByGameplayTag");
		
		UUpGunWeaponManagerComponent_GetWeaponByGameplayTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.GetCurrentWeapon
	 * 		Flags  -> ()
	 */
	class AUpGunWeapon* UUpGunWeaponManagerComponent::GetCurrentWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.GetCurrentWeapon");
		
		UUpGunWeaponManagerComponent_GetCurrentWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SyncChance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UUpGunWeaponManagerComponent::Fire(float SyncChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.Fire");
		
		UUpGunWeaponManagerComponent_Fire_Params params {};
		params.SyncChance = SyncChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UpGun.UpGunWeaponManagerComponent.EquipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpGunWeaponManagerComponent::EquipWeapon(class AUpGunWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpGun.UpGunWeaponManagerComponent.EquipWeapon");
		
		UUpGunWeaponManagerComponent_EquipWeapon_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunWeaponManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunWeaponManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWeaponManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunWeaponProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunWeaponProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWeaponProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunWidgetBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunWidgetBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWidgetBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpGunWorldSettingsDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpGunWorldSettingsDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWorldSettingsDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUpGunWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUpGunWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UpGun.UpGunWorldSettings");
		return ptr;
	}

}


