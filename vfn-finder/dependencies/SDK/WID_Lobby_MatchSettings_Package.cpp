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
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateArenas
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_C::UpdateArenas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateArenas");
		
		UWID_Lobby_MatchSettings_C_UpdateArenas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.OnGameModeUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunGameModeEntry*                         GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunGameModeSettings*                      Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_MatchSettings_C::OnGameModeUpdated(class UUpGunGameModeEntry* GameMode, class AUpGunGameModeSettings* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.OnGameModeUpdated");
		
		UWID_Lobby_MatchSettings_C_OnGameModeUpdated_Params params {};
		params.GameMode = GameMode;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateGameModeList
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_C::UpdateGameModeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateGameModeList");
		
		UWID_Lobby_MatchSettings_C_UpdateGameModeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Construct
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Construct");
		
		UWID_Lobby_MatchSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ScrollShowMap
	 * 		Flags  -> ()
	 */
	void UWID_Lobby_MatchSettings_C::ScrollShowMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ScrollShowMap");
		
		UWID_Lobby_MatchSettings_C_ScrollShowMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_MatchSettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Tick");
		
		UWID_Lobby_MatchSettings_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ExecuteUbergraph_WID_Lobby_MatchSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWID_Lobby_MatchSettings_C::ExecuteUbergraph_WID_Lobby_MatchSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ExecuteUbergraph_WID_Lobby_MatchSettings");
		
		UWID_Lobby_MatchSettings_C_ExecuteUbergraph_WID_Lobby_MatchSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Lobby_MatchSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Lobby_MatchSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C");
		return ptr;
	}

}


