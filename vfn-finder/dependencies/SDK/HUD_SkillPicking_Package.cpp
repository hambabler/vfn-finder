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
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.PopulateOwnedSkillsList
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_C::PopulateOwnedSkillsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.PopulateOwnedSkillsList");
		
		UHUD_SkillPicking_C_PopulateOwnedSkillsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.HideAllButtons
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_C::HideAllButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.HideAllButtons");
		
		UHUD_SkillPicking_C_HideAllButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_C::OnSelected(const struct FGameplayTag& Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.OnSelected");
		
		UHUD_SkillPicking_C_OnSelected_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.SendSkills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Skills                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_SkillPicking_C::SendSkills(const struct FGameplayTagContainer& Skills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.SendSkills");
		
		UHUD_SkillPicking_C_SendSkills_Params params {};
		params.Skills = Skills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.GetCountdownText
	 * 		Flags  -> ()
	 */
	class FText UHUD_SkillPicking_C::GetCountdownText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.GetCountdownText");
		
		UHUD_SkillPicking_C_GetCountdownText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_SkillPicking_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.Construct");
		
		UHUD_SkillPicking_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.Tick");
		
		UHUD_SkillPicking_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.ExecuteUbergraph_HUD_SkillPicking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_C::ExecuteUbergraph_HUD_SkillPicking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.ExecuteUbergraph_HUD_SkillPicking");
		
		UHUD_SkillPicking_C_ExecuteUbergraph_HUD_SkillPicking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_SkillPicking.HUD_SkillPicking_C.OnSkillSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_SkillPicking_C::OnSkillSelected__DelegateSignature(const struct FGameplayTag& Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_SkillPicking.HUD_SkillPicking_C.OnSkillSelected__DelegateSignature");
		
		UHUD_SkillPicking_C_OnSkillSelected__DelegateSignature_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_SkillPicking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_SkillPicking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_SkillPicking.HUD_SkillPicking_C");
		return ptr;
	}

}


