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
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.LobbyWidget_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsReady                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULobbyWidget_C::LobbyWidget_AutoGenFunc(bool bIsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.LobbyWidget_AutoGenFunc");
		
		ULobbyWidget_C_LobbyWidget_AutoGenFunc_Params params {};
		params.bIsReady = bIsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.CountReadys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayersInGame                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayersReadyOut                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyWidget_C::CountReadys(int32_t* PlayersInGame, int32_t* PlayersReadyOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.CountReadys");
		
		ULobbyWidget_C_CountReadys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayersInGame != nullptr)
			*PlayersInGame = params.PlayersInGame;
		if (PlayersReadyOut != nullptr)
			*PlayersReadyOut = params.PlayersReadyOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnSelectedGameModeSettingsUpdated
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::OnSelectedGameModeSettingsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnSelectedGameModeSettingsUpdated");
		
		ULobbyWidget_C_OnSelectedGameModeSettingsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnMutatorsUpdated
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::OnMutatorsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnMutatorsUpdated");
		
		ULobbyWidget_C_OnMutatorsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnArenaUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunArena*                                 Arena                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyWidget_C::OnArenaUpdated(class UUpGunArena* Arena)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnArenaUpdated");
		
		ULobbyWidget_C_OnArenaUpdated_Params params {};
		params.Arena = Arena;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.GetRoundCountText
	 * 		Flags  -> ()
	 */
	class FText ULobbyWidget_C::GetRoundCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.GetRoundCountText");
		
		ULobbyWidget_C_GetRoundCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.IsStartButtonEnabled
	 * 		Flags  -> ()
	 */
	bool ULobbyWidget_C::IsStartButtonEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.IsStartButtonEnabled");
		
		ULobbyWidget_C_IsStartButtonEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.InitializePlayButton
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::InitializePlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.InitializePlayButton");
		
		ULobbyWidget_C_InitializePlayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.UpdatePlayButton
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::UpdatePlayButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.UpdatePlayButton");
		
		ULobbyWidget_C_UpdatePlayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.UpdatePlayerList
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::UpdatePlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.UpdatePlayerList");
		
		ULobbyWidget_C_UpdatePlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.PlayAppearAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowUp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	 */
	void ULobbyWidget_C::PlayAppearAnimation(bool ShowUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.PlayAppearAnimation");
		
		ULobbyWidget_C_PlayAppearAnimation_Params params {};
		params.ShowUp = ShowUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnFailure_6F56F9354478BC56791004B686F62626
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::OnFailure_6F56F9354478BC56791004B686F62626()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnFailure_6F56F9354478BC56791004B686F62626");
		
		ULobbyWidget_C_OnFailure_6F56F9354478BC56791004B686F62626_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnSuccess_6F56F9354478BC56791004B686F62626
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::OnSuccess_6F56F9354478BC56791004B686F62626()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnSuccess_6F56F9354478BC56791004B686F62626");
		
		ULobbyWidget_C_OnSuccess_6F56F9354478BC56791004B686F62626_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.Construct");
		
		ULobbyWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature");
		
		ULobbyWidget_C_BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.OnPlayerAddedOrRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBasePlayerState*                       PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyWidget_C::OnPlayerAddedOrRemoved(class AUpGunBasePlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.OnPlayerAddedOrRemoved");
		
		ULobbyWidget_C_OnPlayerAddedOrRemoved_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		ULobbyWidget_C_BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		ULobbyWidget_C_BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature");
		
		ULobbyWidget_C_BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULobbyWidget_C::BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULobbyWidget_C_BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LobbyWidget.LobbyWidget_C.ExecuteUbergraph_LobbyWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULobbyWidget_C::ExecuteUbergraph_LobbyWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LobbyWidget.LobbyWidget_C.ExecuteUbergraph_LobbyWidget");
		
		ULobbyWidget_C_ExecuteUbergraph_LobbyWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULobbyWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULobbyWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyWidget.LobbyWidget_C");
		return ptr;
	}

}


