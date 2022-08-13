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
	 * 		Name   -> Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.GenerateEntry
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_PlayerEntry_C::GenerateEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.GenerateEntry");
		
		UWID_MatchEnd_PlayerEntry_C_GenerateEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.AppearWithDelay
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_PlayerEntry_C::AppearWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.AppearWithDelay");
		
		UWID_MatchEnd_PlayerEntry_C_AppearWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_MatchEnd_PlayerEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.Construct");
		
		UWID_MatchEnd_PlayerEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.ExecuteUbergraph_WID_MatchEnd_PlayerEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_MatchEnd_PlayerEntry_C::ExecuteUbergraph_WID_MatchEnd_PlayerEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C.ExecuteUbergraph_WID_MatchEnd_PlayerEntry");
		
		UWID_MatchEnd_PlayerEntry_C_ExecuteUbergraph_WID_MatchEnd_PlayerEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_MatchEnd_PlayerEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_MatchEnd_PlayerEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_MatchEnd_PlayerEntry.WID_MatchEnd_PlayerEntry_C");
		return ptr;
	}

}


