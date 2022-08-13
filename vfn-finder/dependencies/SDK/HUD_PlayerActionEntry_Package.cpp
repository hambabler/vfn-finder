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
	 * 		Name   -> Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerActionEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Construct");
		
		UHUD_PlayerActionEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Destroy
	 * 		Flags  -> ()
	 */
	void UHUD_PlayerActionEntry_C::Destroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Destroy");
		
		UHUD_PlayerActionEntry_C_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.ExecuteUbergraph_HUD_PlayerActionEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_PlayerActionEntry_C::ExecuteUbergraph_HUD_PlayerActionEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.ExecuteUbergraph_HUD_PlayerActionEntry");
		
		UHUD_PlayerActionEntry_C_ExecuteUbergraph_HUD_PlayerActionEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_PlayerActionEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_PlayerActionEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_PlayerActionEntry.HUD_PlayerActionEntry_C");
		return ptr;
	}

}


