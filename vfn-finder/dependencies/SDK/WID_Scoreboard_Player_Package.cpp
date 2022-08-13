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
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.GetKDA
	 * 		Flags  -> ()
	 */
	class FText UWID_Scoreboard_Player_C::GetKDA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.GetKDA");
		
		UWID_Scoreboard_Player_C_GetKDA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Update Kick Ban Buttons
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Player_C::Update_Kick_Ban_Buttons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Update Kick Ban Buttons");
		
		UWID_Scoreboard_Player_C_Update_Kick_Ban_Buttons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.DefaultDisplay
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Player_C::DefaultDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.DefaultDisplay");
		
		UWID_Scoreboard_Player_C_DefaultDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.SetBorderColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       OwningPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_Player_C::SetBorderColor(class AUpGunBasePlayerState* OwningPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.SetBorderColor");
		
		UWID_Scoreboard_Player_C_SetBorderColor_Params params {};
		params.OwningPlayerState = OwningPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Highlight player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HighLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWID_Scoreboard_Player_C::Highlight_player(bool HighLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Highlight player");
		
		UWID_Scoreboard_Player_C_Highlight_player_Params params {};
		params.HighLight = HighLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Player_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.Construct");
		
		UWID_Scoreboard_Player_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Player_C::BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UWID_Scoreboard_Player_C_BndEvt__WID_Scoreboard_Player_W_button_Kick_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.ExecuteUbergraph_WID_Scoreboard_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_Player_C::ExecuteUbergraph_WID_Scoreboard_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Player.WID_Scoreboard_Player_C.ExecuteUbergraph_WID_Scoreboard_Player");
		
		UWID_Scoreboard_Player_C_ExecuteUbergraph_WID_Scoreboard_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Scoreboard_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Scoreboard_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Scoreboard_Player.WID_Scoreboard_Player_C");
		return ptr;
	}

}


