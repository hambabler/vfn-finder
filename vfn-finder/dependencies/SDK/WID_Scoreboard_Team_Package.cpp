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
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.GetTeamScore
	 * 		Flags  -> ()
	 */
	class FText UWID_Scoreboard_Team_C::GetTeamScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.GetTeamScore");
		
		UWID_Scoreboard_Team_C_GetTeamScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdateTeamScore
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Team_C::UpdateTeamScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdateTeamScore");
		
		UWID_Scoreboard_Team_C_UpdateTeamScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.OnPlayerScoreUpdated
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Team_C::OnPlayerScoreUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.OnPlayerScoreUpdated");
		
		UWID_Scoreboard_Team_C_OnPlayerScoreUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ReorderPlayerList
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Team_C::ReorderPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ReorderPlayerList");
		
		UWID_Scoreboard_Team_C_ReorderPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdatePlayerList
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Team_C::UpdatePlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.UpdatePlayerList");
		
		UWID_Scoreboard_Team_C_UpdatePlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_Team_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Construct");
		
		UWID_Scoreboard_Team_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_Team_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.Tick");
		
		UWID_Scoreboard_Team_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ExecuteUbergraph_WID_Scoreboard_Team
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_Team_C::ExecuteUbergraph_WID_Scoreboard_Team(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard_Team.WID_Scoreboard_Team_C.ExecuteUbergraph_WID_Scoreboard_Team");
		
		UWID_Scoreboard_Team_C_ExecuteUbergraph_WID_Scoreboard_Team_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Scoreboard_Team_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Scoreboard_Team_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Scoreboard_Team.WID_Scoreboard_Team_C");
		return ptr;
	}

}


