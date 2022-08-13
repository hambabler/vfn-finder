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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnEvent_5DE297EC4907F747927FB6906BB95465
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnEvent_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnEvent_5DE297EC4907F747927FB6906BB95465");
		
		UGA_Skill_LocalBuff_C_OnEvent_5DE297EC4907F747927FB6906BB95465_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnInterrupted_5DE297EC4907F747927FB6906BB95465
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnInterrupted_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnInterrupted_5DE297EC4907F747927FB6906BB95465");
		
		UGA_Skill_LocalBuff_C_OnInterrupted_5DE297EC4907F747927FB6906BB95465_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnBlendOut_5DE297EC4907F747927FB6906BB95465
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnBlendOut_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnBlendOut_5DE297EC4907F747927FB6906BB95465");
		
		UGA_Skill_LocalBuff_C_OnBlendOut_5DE297EC4907F747927FB6906BB95465_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCancelled_5DE297EC4907F747927FB6906BB95465
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnCancelled_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCancelled_5DE297EC4907F747927FB6906BB95465");
		
		UGA_Skill_LocalBuff_C_OnCancelled_5DE297EC4907F747927FB6906BB95465_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCompleted_5DE297EC4907F747927FB6906BB95465
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnCompleted_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCompleted_5DE297EC4907F747927FB6906BB95465");
		
		UGA_Skill_LocalBuff_C_OnCompleted_5DE297EC4907F747927FB6906BB95465_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnEvent_E7545E4E4EDE4645CF73428A873A27A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnEvent_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnEvent_E7545E4E4EDE4645CF73428A873A27A2");
		
		UGA_Skill_LocalBuff_C_OnEvent_E7545E4E4EDE4645CF73428A873A27A2_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnInterrupted_E7545E4E4EDE4645CF73428A873A27A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnInterrupted_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnInterrupted_E7545E4E4EDE4645CF73428A873A27A2");
		
		UGA_Skill_LocalBuff_C_OnInterrupted_E7545E4E4EDE4645CF73428A873A27A2_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnBlendOut_E7545E4E4EDE4645CF73428A873A27A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnBlendOut_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnBlendOut_E7545E4E4EDE4645CF73428A873A27A2");
		
		UGA_Skill_LocalBuff_C_OnBlendOut_E7545E4E4EDE4645CF73428A873A27A2_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCancelled_E7545E4E4EDE4645CF73428A873A27A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnCancelled_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCancelled_E7545E4E4EDE4645CF73428A873A27A2");
		
		UGA_Skill_LocalBuff_C_OnCancelled_E7545E4E4EDE4645CF73428A873A27A2_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCompleted_E7545E4E4EDE4645CF73428A873A27A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_LocalBuff_C::OnCompleted_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.OnCompleted_E7545E4E4EDE4645CF73428A873A27A2");
		
		UGA_Skill_LocalBuff_C_OnCompleted_E7545E4E4EDE4645CF73428A873A27A2_Params params {};
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
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_LocalBuff_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.K2_ActivateAbility");
		
		UGA_Skill_LocalBuff_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Skill_LocalBuff_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.K2_OnEndAbility");
		
		UGA_Skill_LocalBuff_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.PlayMontageLocal
	 * 		Flags  -> ()
	 */
	void UGA_Skill_LocalBuff_C::PlayMontageLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.PlayMontageLocal");
		
		UGA_Skill_LocalBuff_C_PlayMontageLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.ExecuteUbergraph_GA_Skill_LocalBuff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LocalBuff_C::ExecuteUbergraph_GA_Skill_LocalBuff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LocalBuff.GA_Skill_LocalBuff_C.ExecuteUbergraph_GA_Skill_LocalBuff");
		
		UGA_Skill_LocalBuff_C_ExecuteUbergraph_GA_Skill_LocalBuff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_LocalBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_LocalBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_LocalBuff.GA_Skill_LocalBuff_C");
		return ptr;
	}

}


