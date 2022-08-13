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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.IsMagazineEmpty
	 * 		Flags  -> ()
	 */
	bool UGA_Skill_ChargedSpray_C::IsMagazineEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.IsMagazineEmpty");
		
		UGA_Skill_ChargedSpray_C_IsMagazineEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ChargedSpray_C::OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8");
		
		UGA_Skill_ChargedSpray_C_OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637");
		
		UGA_Skill_ChargedSpray_C_OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637");
		
		UGA_Skill_ChargedSpray_C_OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637");
		
		UGA_Skill_ChargedSpray_C_OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637");
		
		UGA_Skill_ChargedSpray_C_OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637");
		
		UGA_Skill_ChargedSpray_C_OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_06C633F54425A7DAE97A3D96B03E18DA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnEvent_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnEvent_06C633F54425A7DAE97A3D96B03E18DA");
		
		UGA_Skill_ChargedSpray_C_OnEvent_06C633F54425A7DAE97A3D96B03E18DA_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA");
		
		UGA_Skill_ChargedSpray_C_OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA");
		
		UGA_Skill_ChargedSpray_C_OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_06C633F54425A7DAE97A3D96B03E18DA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnCancelled_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCancelled_06C633F54425A7DAE97A3D96B03E18DA");
		
		UGA_Skill_ChargedSpray_C_OnCancelled_06C633F54425A7DAE97A3D96B03E18DA_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_06C633F54425A7DAE97A3D96B03E18DA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ChargedSpray_C::OnCompleted_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.OnCompleted_06C633F54425A7DAE97A3D96B03E18DA");
		
		UGA_Skill_ChargedSpray_C_OnCompleted_06C633F54425A7DAE97A3D96B03E18DA_Params params {};
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
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ChargedSpray_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.K2_ActivateAbility");
		
		UGA_Skill_ChargedSpray_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.ExecuteUbergraph_GA_Skill_ChargedSpray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ChargedSpray_C::ExecuteUbergraph_GA_Skill_ChargedSpray(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C.ExecuteUbergraph_GA_Skill_ChargedSpray");
		
		UGA_Skill_ChargedSpray_C_ExecuteUbergraph_GA_Skill_ChargedSpray_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_ChargedSpray_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_ChargedSpray_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C");
		return ptr;
	}

}


