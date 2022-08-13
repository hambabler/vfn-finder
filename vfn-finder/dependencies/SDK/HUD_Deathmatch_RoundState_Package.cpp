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
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.UpdateLeadingPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_RoundState_C::UpdateLeadingPlayer(class AUpGunBasePlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.UpdateLeadingPlayer");
		
		UHUD_Deathmatch_RoundState_C_UpdateLeadingPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnGameStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_RoundState_C::OnGameStateChanged(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnGameStateChanged");
		
		UHUD_Deathmatch_RoundState_C_OnGameStateChanged_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.GetRoundTimerText
	 * 		Flags  -> ()
	 */
	class FText UHUD_Deathmatch_RoundState_C::GetRoundTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.GetRoundTimerText");
		
		UHUD_Deathmatch_RoundState_C_GetRoundTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnRoundUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_RoundState_C::OnRoundUpdated(unsigned char OldRound, unsigned char NewRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.OnRoundUpdated");
		
		UHUD_Deathmatch_RoundState_C_OnRoundUpdated_Params params {};
		params.OldRound = OldRound;
		params.NewRound = NewRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Deathmatch_RoundState_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.Construct");
		
		UHUD_Deathmatch_RoundState_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.ExecuteUbergraph_HUD_Deathmatch_RoundState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Deathmatch_RoundState_C::ExecuteUbergraph_HUD_Deathmatch_RoundState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C.ExecuteUbergraph_HUD_Deathmatch_RoundState");
		
		UHUD_Deathmatch_RoundState_C_ExecuteUbergraph_HUD_Deathmatch_RoundState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_Deathmatch_RoundState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Deathmatch_RoundState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Deathmatch_RoundState.HUD_Deathmatch_RoundState_C");
		return ptr;
	}

}


