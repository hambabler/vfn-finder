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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.Stab_Visual
	 * 		Flags  -> ()
	 */
	void UGA_Knife_C::Stab_Visual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.Stab_Visual");
		
		UGA_Knife_C_Stab_Visual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.GetRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::GetRange(int32_t* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.GetRange");
		
		UGA_Knife_C_GetRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.GetFPSAnimInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::GetFPSAnimInfo(class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.GetFPSAnimInfo");
		
		UGA_Knife_C_GetFPSAnimInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.Get TPSAnim Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::Get_TPSAnim_Info(float* Speed, class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.Get TPSAnim Info");
		
		UGA_Knife_C_Get_TPSAnim_Info_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.Stab
	 * 		Flags  -> ()
	 */
	void UGA_Knife_C::Stab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.Stab");
		
		UGA_Knife_C_Stab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Knife_C::OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7");
		
		UGA_Knife_C_OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7_Params params {};
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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Knife_C::OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7");
		
		UGA_Knife_C_OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7_Params params {};
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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Knife_C::OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7");
		
		UGA_Knife_C_OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7_Params params {};
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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Knife_C::OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7");
		
		UGA_Knife_C_OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7_Params params {};
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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Knife_C::OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7");
		
		UGA_Knife_C_OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7_Params params {};
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
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0");
		
		UGA_Knife_C_OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0");
		
		UGA_Knife_C_OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0");
		
		UGA_Knife_C_OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0");
		
		UGA_Knife_C_OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0");
		
		UGA_Knife_C_OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Knife_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.K2_ActivateAbility");
		
		UGA_Knife_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Knife_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.K2_OnEndAbility");
		
		UGA_Knife_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.RPC_Visuals
	 * 		Flags  -> ()
	 */
	void UGA_Knife_C::RPC_Visuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.RPC_Visuals");
		
		UGA_Knife_C_RPC_Visuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Knife.GA_Knife_C.ExecuteUbergraph_GA_Knife
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Knife_C::ExecuteUbergraph_GA_Knife(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Knife.GA_Knife_C.ExecuteUbergraph_GA_Knife");
		
		UGA_Knife_C_ExecuteUbergraph_GA_Knife_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Knife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Knife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Knife.GA_Knife_C");
		return ptr;
	}

}


