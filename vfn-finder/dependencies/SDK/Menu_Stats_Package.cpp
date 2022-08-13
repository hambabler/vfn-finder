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
	 * 		Name   -> Function Menu_Stats.Menu_Stats_C.Construct
	 * 		Flags  -> ()
	 */
	void UMenu_Stats_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_Stats.Menu_Stats_C.Construct");
		
		UMenu_Stats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Menu_Stats.Menu_Stats_C.ExecuteUbergraph_Menu_Stats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenu_Stats_C::ExecuteUbergraph_Menu_Stats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_Stats.Menu_Stats_C.ExecuteUbergraph_Menu_Stats");
		
		UMenu_Stats_C_ExecuteUbergraph_Menu_Stats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenu_Stats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenu_Stats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_Stats.Menu_Stats_C");
		return ptr;
	}

}


