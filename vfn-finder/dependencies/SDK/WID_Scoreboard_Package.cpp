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
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.GetPlayerArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AUpGunBasePlayerState*>               Players                                                    (Parm, OutParm)
	 */
	void UWID_Scoreboard_C::GetPlayerArray(TArray<class AUpGunBasePlayerState*>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.GetPlayerArray");
		
		UWID_Scoreboard_C_GetPlayerArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.ReorderPlayerList
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_C::ReorderPlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.ReorderPlayerList");
		
		UWID_Scoreboard_C_ReorderPlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.UpdatePlayerList
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_C::UpdatePlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.UpdatePlayerList");
		
		UWID_Scoreboard_C_UpdatePlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.Update Teams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunTeam>                          Teams                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWID_Scoreboard_C::Update_Teams(TArray<struct FUpGunTeam> Teams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.Update Teams");
		
		UWID_Scoreboard_C_Update_Teams_Params params {};
		params.Teams = Teams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.Tick");
		
		UWID_Scoreboard_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.Construct");
		
		UWID_Scoreboard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.AppearAnim
	 * 		Flags  -> ()
	 */
	void UWID_Scoreboard_C::AppearAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.AppearAnim");
		
		UWID_Scoreboard_C_AppearAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Scoreboard.WID_Scoreboard_C.ExecuteUbergraph_WID_Scoreboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Scoreboard_C::ExecuteUbergraph_WID_Scoreboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Scoreboard.WID_Scoreboard_C.ExecuteUbergraph_WID_Scoreboard");
		
		UWID_Scoreboard_C_ExecuteUbergraph_WID_Scoreboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Scoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Scoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Scoreboard.WID_Scoreboard_C");
		return ptr;
	}

}


