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
	 * 		Name   -> Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.AddNames
	 * 		Flags  -> ()
	 */
	void UHUD_KillFeedEntry_C::AddNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.AddNames");
		
		UHUD_KillFeedEntry_C_AddNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_KillFeedEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.Construct");
		
		UHUD_KillFeedEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.OnDestroyWidget
	 * 		Flags  -> ()
	 */
	void UHUD_KillFeedEntry_C::OnDestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.OnDestroyWidget");
		
		UHUD_KillFeedEntry_C_OnDestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_KillFeedEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.PreConstruct");
		
		UHUD_KillFeedEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.ExecuteUbergraph_HUD_KillFeedEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_KillFeedEntry_C::ExecuteUbergraph_HUD_KillFeedEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.ExecuteUbergraph_HUD_KillFeedEntry");
		
		UHUD_KillFeedEntry_C_ExecuteUbergraph_HUD_KillFeedEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_KillFeedEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_KillFeedEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_KillFeedEntry.HUD_KillFeedEntry_C");
		return ptr;
	}

}


