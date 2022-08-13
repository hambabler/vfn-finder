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
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.GenerateVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunSkill*                                 Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillOwnedEntry_C::GenerateVisual(class UUpGunSkill* Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.GenerateVisual");
		
		USkillOwnedEntry_C_GenerateVisual_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USkillOwnedEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseEnter");
		
		USkillOwnedEntry_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USkillOwnedEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseLeave");
		
		USkillOwnedEntry_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillOwnedEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.Construct");
		
		USkillOwnedEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillOwnedEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.PreConstruct");
		
		USkillOwnedEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedEntry.SkillOwnedEntry_C.ExecuteUbergraph_SkillOwnedEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillOwnedEntry_C::ExecuteUbergraph_SkillOwnedEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedEntry.SkillOwnedEntry_C.ExecuteUbergraph_SkillOwnedEntry");
		
		USkillOwnedEntry_C_ExecuteUbergraph_SkillOwnedEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillOwnedEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillOwnedEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillOwnedEntry.SkillOwnedEntry_C");
		return ptr;
	}

}


