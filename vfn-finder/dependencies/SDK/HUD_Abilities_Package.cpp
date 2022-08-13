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
	 * 		Name   -> Function HUD_Abilities.HUD_Abilities_C.BuildAbilityList
	 * 		Flags  -> ()
	 */
	void UHUD_Abilities_C::BuildAbilityList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Abilities.HUD_Abilities_C.BuildAbilityList");
		
		UHUD_Abilities_C_BuildAbilityList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Abilities.HUD_Abilities_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Abilities_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Abilities.HUD_Abilities_C.Construct");
		
		UHUD_Abilities_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Abilities.HUD_Abilities_C.ExecuteUbergraph_HUD_Abilities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Abilities_C::ExecuteUbergraph_HUD_Abilities(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Abilities.HUD_Abilities_C.ExecuteUbergraph_HUD_Abilities");
		
		UHUD_Abilities_C_ExecuteUbergraph_HUD_Abilities_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Abilities_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Abilities_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Abilities.HUD_Abilities_C");
		return ptr;
	}

}


