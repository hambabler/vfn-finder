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
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnGameStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::OnGameStateChanged(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnGameStateChanged");
		
		ABP_Lobby_HUD_C_OnGameStateChanged_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.On Ammo or Magazine Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::On_Ammo_or_Magazine_Changed(unsigned char NewValue, unsigned char OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.On Ammo or Magazine Changed");
		
		ABP_Lobby_HUD_C_On_Ammo_or_Magazine_Changed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCurrentWeaponChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunWeapon*                                OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::OnCurrentWeaponChanged(class AUpGunWeapon* NewValue, class AUpGunWeapon* OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCurrentWeaponChanged");
		
		ABP_Lobby_HUD_C_OnCurrentWeaponChanged_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCharacterUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBaseCharacter*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::OnCharacterUpdated(class AUpGunBaseCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnCharacterUpdated");
		
		ABP_Lobby_HUD_C_OnCharacterUpdated_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExtendMainHUD
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::ExtendMainHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExtendMainHUD");
		
		ABP_Lobby_HUD_C_ExtendMainHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1");
		
		ABP_Lobby_HUD_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.BP_CreateWidgets
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::BP_CreateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.BP_CreateWidgets");
		
		ABP_Lobby_HUD_C_BP_CreateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveTick");
		
		ABP_Lobby_HUD_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.ReceiveBeginPlay");
		
		ABP_Lobby_HUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.HideLobbyHUD
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::HideLobbyHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.HideLobbyHUD");
		
		ABP_Lobby_HUD_C_HideLobbyHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExecuteUbergraph_BP_Lobby_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lobby_HUD_C::ExecuteUbergraph_BP_Lobby_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.ExecuteUbergraph_BP_Lobby_HUD");
		
		ABP_Lobby_HUD_C_ExecuteUbergraph_BP_Lobby_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::OnLobbyMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuOpened__DelegateSignature");
		
		ABP_Lobby_HUD_C_OnLobbyMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Lobby_HUD_C::OnLobbyMenuClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lobby_HUD.BP_Lobby_HUD_C.OnLobbyMenuClosed__DelegateSignature");
		
		ABP_Lobby_HUD_C_OnLobbyMenuClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lobby_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lobby_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_HUD.BP_Lobby_HUD_C");
		return ptr;
	}

}


