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
	 * 		Name   -> Function SkillToBan.SkillToBan_C.CanAddNewSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanBan                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToBan_C::CanAddNewSkill(bool* CanBan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.CanAddNewSkill");
		
		USkillToBan_C_CanAddNewSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBan != nullptr)
			*CanBan = params.CanBan;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.RefreshColors
	 * 		Flags  -> ()
	 */
	void USkillToBan_C::RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.RefreshColors");
		
		USkillToBan_C_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillToBan_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.Construct");
		
		USkillToBan_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToBan_C::BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USkillToBan_C_BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToBan_C::BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USkillToBan_C_BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillToBan_C::BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		USkillToBan_C_BndEvt__SkillToBan_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillToBan_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.PreConstruct");
		
		USkillToBan_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillToBan.SkillToBan_C.ExecuteUbergraph_SkillToBan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillToBan_C::ExecuteUbergraph_SkillToBan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillToBan.SkillToBan_C.ExecuteUbergraph_SkillToBan");
		
		USkillToBan_C_ExecuteUbergraph_SkillToBan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillToBan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillToBan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillToBan.SkillToBan_C");
		return ptr;
	}

}


