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
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.DebugText05
	 * 		Flags  -> ()
	 */
	class FText UHUD_Debug_C::DebugText05()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.DebugText05");
		
		UHUD_Debug_C_DebugText05_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.DebugText04
	 * 		Flags  -> ()
	 */
	class FText UHUD_Debug_C::DebugText04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.DebugText04");
		
		UHUD_Debug_C_DebugText04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.DebugText03
	 * 		Flags  -> ()
	 */
	class FText UHUD_Debug_C::DebugText03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.DebugText03");
		
		UHUD_Debug_C_DebugText03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.DebugText02
	 * 		Flags  -> ()
	 */
	class FText UHUD_Debug_C::DebugText02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.DebugText02");
		
		UHUD_Debug_C_DebugText02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.DebugText01
	 * 		Flags  -> ()
	 */
	class FText UHUD_Debug_C::DebugText01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.DebugText01");
		
		UHUD_Debug_C_DebugText01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Debug_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.Construct");
		
		UHUD_Debug_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.OnSkillsUpdated
	 * 		Flags  -> ()
	 */
	void UHUD_Debug_C::OnSkillsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.OnSkillsUpdated");
		
		UHUD_Debug_C_OnSkillsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Debug.HUD_Debug_C.ExecuteUbergraph_HUD_Debug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Debug_C::ExecuteUbergraph_HUD_Debug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Debug.HUD_Debug_C.ExecuteUbergraph_HUD_Debug");
		
		UHUD_Debug_C_ExecuteUbergraph_HUD_Debug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Debug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Debug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Debug.HUD_Debug_C");
		return ptr;
	}

}


