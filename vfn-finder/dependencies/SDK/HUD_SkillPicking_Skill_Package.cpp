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
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::SetupAnimations(int32_t SkillIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupAnimations");
		
		UHUD_SkillPicking_Skill_C_SetupAnimations_Params params {};
		params.SkillIndex = SkillIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ResetUIState
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::ResetUIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ResetUIState");
		
		UHUD_SkillPicking_Skill_C_ResetUIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupUI_Error
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::SetupUI_Error()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupUI_Error");
		
		UHUD_SkillPicking_Skill_C_SetupUI_Error_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UUpGunSkill*                                 Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMysteryCard                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SkillPicking_Skill_C::SetupVisual(const struct FGameplayTag& SkillId, class UUpGunSkill* Skill, unsigned char Level, bool IsMysteryCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupVisual");
		
		UHUD_SkillPicking_Skill_C_SetupVisual_Params params {};
		params.SkillId = SkillId;
		params.Skill = Skill;
		params.Level = Level;
		params.IsMysteryCard = IsMysteryCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_SkillPicking_Skill_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.PreConstruct");
		
		UHUD_SkillPicking_Skill_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Construct");
		
		UHUD_SkillPicking_Skill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.EntryAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::EntryAnimation(int32_t SkillIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.EntryAnimation");
		
		UHUD_SkillPicking_Skill_C_EntryAnimation_Params params {};
		params.SkillIndex = SkillIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.IsAlreadyHovered
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::IsAlreadyHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.IsAlreadyHovered");
		
		UHUD_SkillPicking_Skill_C_IsAlreadyHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Tick");
		
		UHUD_SkillPicking_Skill_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Focused
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::Focused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Focused");
		
		UHUD_SkillPicking_Skill_C_Focused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.UnFocused
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::UnFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.UnFocused");
		
		UHUD_SkillPicking_Skill_C_UnFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnVisChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::OnVisChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnVisChanged");
		
		UHUD_SkillPicking_Skill_C_OnVisChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_Skill_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Destruct");
		
		UHUD_SkillPicking_Skill_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ExecuteUbergraph_HUD_SkillPicking_Skill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::ExecuteUbergraph_HUD_SkillPicking_Skill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ExecuteUbergraph_HUD_SkillPicking_Skill");
		
		UHUD_SkillPicking_Skill_C_ExecuteUbergraph_HUD_SkillPicking_Skill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_Skill_C::OnSelected__DelegateSignature(const struct FGameplayTag& Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnSelected__DelegateSignature");
		
		UHUD_SkillPicking_Skill_C_OnSelected__DelegateSignature_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SkillPicking_Skill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SkillPicking_Skill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C");
		return ptr;
	}

}


