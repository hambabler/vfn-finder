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
	 * 		Name   -> Function WID_Lobby_Friends.WID_Lobby_Friends_C.OnFriendsChanged
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_Friends_C::OnFriendsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friends.WID_Lobby_Friends_C.OnFriendsChanged");
		
		UWID_Lobby_Friends_C_OnFriendsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_Friends.WID_Lobby_Friends_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_Friends_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friends.WID_Lobby_Friends_C.Construct");
		
		UWID_Lobby_Friends_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_Friends.WID_Lobby_Friends_C.ExecuteUbergraph_WID_Lobby_Friends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_Friends_C::ExecuteUbergraph_WID_Lobby_Friends(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_Friends.WID_Lobby_Friends_C.ExecuteUbergraph_WID_Lobby_Friends");
		
		UWID_Lobby_Friends_C_ExecuteUbergraph_WID_Lobby_Friends_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Lobby_Friends_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Lobby_Friends_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Lobby_Friends.WID_Lobby_Friends_C");
		return ptr;
	}

}


