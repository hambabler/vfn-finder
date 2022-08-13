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
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.EditCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionResponse                                 NewResponse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_TP_C::EditCollisions(ECollisionResponse NewResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.EditCollisions");
		
		UGA_Skill_TP_C_EditCollisions_Params params {};
		params.NewResponse = NewResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.FindStartingLoc
	 * 		Flags  -> ()
	 */
	struct FVector UGA_Skill_TP_C::FindStartingLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.FindStartingLoc");
		
		UGA_Skill_TP_C_FindStartingLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC
	 * 		Flags  -> ()
	 */
	void UGA_Skill_TP_C::OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC");
		
		UGA_Skill_TP_C_OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC
	 * 		Flags  -> ()
	 */
	void UGA_Skill_TP_C::OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC");
		
		UGA_Skill_TP_C_OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnEvent_4202992145B45966FE07BDA3175F470E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_TP_C::OnEvent_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnEvent_4202992145B45966FE07BDA3175F470E");
		
		UGA_Skill_TP_C_OnEvent_4202992145B45966FE07BDA3175F470E_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnInterrupted_4202992145B45966FE07BDA3175F470E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_TP_C::OnInterrupted_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnInterrupted_4202992145B45966FE07BDA3175F470E");
		
		UGA_Skill_TP_C_OnInterrupted_4202992145B45966FE07BDA3175F470E_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnBlendOut_4202992145B45966FE07BDA3175F470E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_TP_C::OnBlendOut_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnBlendOut_4202992145B45966FE07BDA3175F470E");
		
		UGA_Skill_TP_C_OnBlendOut_4202992145B45966FE07BDA3175F470E_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnCancelled_4202992145B45966FE07BDA3175F470E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_TP_C::OnCancelled_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnCancelled_4202992145B45966FE07BDA3175F470E");
		
		UGA_Skill_TP_C_OnCancelled_4202992145B45966FE07BDA3175F470E_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.OnCompleted_4202992145B45966FE07BDA3175F470E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_TP_C::OnCompleted_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.OnCompleted_4202992145B45966FE07BDA3175F470E");
		
		UGA_Skill_TP_C_OnCompleted_4202992145B45966FE07BDA3175F470E_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AGameplayAbilityTargetActor*                 TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_TP_C::Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2(const struct FGameplayAbilityTargetDataHandle& Data, class AGameplayAbilityTargetActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2");
		
		UGA_Skill_TP_C_Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2_Params params {};
		params.Data = Data;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AGameplayAbilityTargetActor*                 TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_TP_C::ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2(const struct FGameplayAbilityTargetDataHandle& Data, class AGameplayAbilityTargetActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2");
		
		UGA_Skill_TP_C_ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2_Params params {};
		params.Data = Data;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_TP_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.K2_ActivateAbility");
		
		UGA_Skill_TP_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.TeleportPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_TP_C::TeleportPlayer(const struct FVector& Normal, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.TeleportPlayer");
		
		UGA_Skill_TP_C_TeleportPlayer_Params params {};
		params.Normal = Normal;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Skill_TP_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.K2_OnEndAbility");
		
		UGA_Skill_TP_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.BP_InputPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UGA_Skill_TP_C::BP_InputPressed(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.BP_InputPressed");
		
		UGA_Skill_TP_C_BP_InputPressed_Params params {};
		params.Handle = Handle;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_TP.GA_Skill_TP_C.ExecuteUbergraph_GA_Skill_TP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_TP_C::ExecuteUbergraph_GA_Skill_TP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_TP.GA_Skill_TP_C.ExecuteUbergraph_GA_Skill_TP");
		
		UGA_Skill_TP_C_ExecuteUbergraph_GA_Skill_TP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_TP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_TP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_TP.GA_Skill_TP_C");
		return ptr;
	}

}


