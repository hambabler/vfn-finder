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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnEvent_5C9CB2FF4D9505F0D058C3B940CEE015
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Knife_Throw_C::OnEvent_5C9CB2FF4D9505F0D058C3B940CEE015(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnEvent_5C9CB2FF4D9505F0D058C3B940CEE015");
		
		UGA_Skill_Knife_Throw_C_OnEvent_5C9CB2FF4D9505F0D058C3B940CEE015_Params params {};
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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnInterrupted_5C9CB2FF4D9505F0D058C3B940CEE015
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Knife_Throw_C::OnInterrupted_5C9CB2FF4D9505F0D058C3B940CEE015(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnInterrupted_5C9CB2FF4D9505F0D058C3B940CEE015");
		
		UGA_Skill_Knife_Throw_C_OnInterrupted_5C9CB2FF4D9505F0D058C3B940CEE015_Params params {};
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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnBlendOut_5C9CB2FF4D9505F0D058C3B940CEE015
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Knife_Throw_C::OnBlendOut_5C9CB2FF4D9505F0D058C3B940CEE015(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnBlendOut_5C9CB2FF4D9505F0D058C3B940CEE015");
		
		UGA_Skill_Knife_Throw_C_OnBlendOut_5C9CB2FF4D9505F0D058C3B940CEE015_Params params {};
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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnCancelled_5C9CB2FF4D9505F0D058C3B940CEE015
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Knife_Throw_C::OnCancelled_5C9CB2FF4D9505F0D058C3B940CEE015(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnCancelled_5C9CB2FF4D9505F0D058C3B940CEE015");
		
		UGA_Skill_Knife_Throw_C_OnCancelled_5C9CB2FF4D9505F0D058C3B940CEE015_Params params {};
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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnCompleted_5C9CB2FF4D9505F0D058C3B940CEE015
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Knife_Throw_C::OnCompleted_5C9CB2FF4D9505F0D058C3B940CEE015(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.OnCompleted_5C9CB2FF4D9505F0D058C3B940CEE015");
		
		UGA_Skill_Knife_Throw_C_OnCompleted_5C9CB2FF4D9505F0D058C3B940CEE015_Params params {};
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
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Knife_Throw_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.K2_ActivateAbility");
		
		UGA_Skill_Knife_Throw_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Skill_Knife_Throw_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.K2_OnEndAbility");
		
		UGA_Skill_Knife_Throw_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.ExecuteUbergraph_GA_Skill_Knife_Throw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Knife_Throw_C::ExecuteUbergraph_GA_Skill_Knife_Throw(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C.ExecuteUbergraph_GA_Skill_Knife_Throw");
		
		UGA_Skill_Knife_Throw_C_ExecuteUbergraph_GA_Skill_Knife_Throw_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Knife_Throw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Knife_Throw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Knife_Throw.GA_Skill_Knife_Throw_C");
		return ptr;
	}

}


