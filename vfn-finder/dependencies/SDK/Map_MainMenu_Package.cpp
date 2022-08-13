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
	 * 		Name   -> Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMap_MainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay");
		
		AMap_MainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Map_MainMenu.Map_MainMenu_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMap_MainMenu_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ReceiveEndPlay");
		
		AMap_MainMenu_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Map_MainMenu.Map_MainMenu_C.GiveItems_Event
	 * 		Flags  -> ()
	 */
	void AMap_MainMenu_C::GiveItems_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.GiveItems_Event");
		
		AMap_MainMenu_C_GiveItems_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMap_MainMenu_C::ExecuteUbergraph_Map_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu");
		
		AMap_MainMenu_C_ExecuteUbergraph_Map_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMap_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMap_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Map_MainMenu.Map_MainMenu_C");
		return ptr;
	}

}


