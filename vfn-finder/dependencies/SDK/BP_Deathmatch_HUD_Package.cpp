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
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.HideAllGameStateDependentWidgets
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_HUD_C::HideAllGameStateDependentWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.HideAllGameStateDependentWidgets");
		
		ABP_Deathmatch_HUD_C_HideAllGameStateDependentWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnLifesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnLifesChanged(unsigned char NewValue, unsigned char OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnLifesChanged");
		
		ABP_Deathmatch_HUD_C_OnLifesChanged_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnSkillSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnSkillSelected(const struct FGameplayTag& Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnSkillSelected");
		
		ABP_Deathmatch_HUD_C_OnSkillSelected_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnGameStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnGameStateChanged(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnGameStateChanged");
		
		ABP_Deathmatch_HUD_C_OnGameStateChanged_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnPickableSkillsReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       PickableSkills                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Deathmatch_HUD_C::OnPickableSkillsReceived(const struct FGameplayTagContainer& PickableSkills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnPickableSkillsReceived");
		
		ABP_Deathmatch_HUD_C_OnPickableSkillsReceived_Params params {};
		params.PickableSkills = PickableSkills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnPlayerStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnPlayerStateUpdated(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnPlayerStateUpdated");
		
		ABP_Deathmatch_HUD_C_OnPlayerStateUpdated_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.On Ammo or Magazine Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::On_Ammo_or_Magazine_Changed(unsigned char NewValue, unsigned char OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.On Ammo or Magazine Changed");
		
		ABP_Deathmatch_HUD_C_On_Ammo_or_Magazine_Changed_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnCurrentWeaponChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunWeapon*                                OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnCurrentWeaponChanged(class AUpGunWeapon* NewValue, class AUpGunWeapon* OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnCurrentWeaponChanged");
		
		ABP_Deathmatch_HUD_C_OnCurrentWeaponChanged_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnCharacterUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunBaseCharacter*                         Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::OnCharacterUpdated(class AUpGunBaseCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.OnCharacterUpdated");
		
		ABP_Deathmatch_HUD_C_OnCharacterUpdated_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ExtendMainHUD
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_HUD_C::ExtendMainHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ExtendMainHUD");
		
		ABP_Deathmatch_HUD_C_ExtendMainHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2");
		
		ABP_Deathmatch_HUD_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1");
		
		ABP_Deathmatch_HUD_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ReceiveTick");
		
		ABP_Deathmatch_HUD_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_HUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ReceiveBeginPlay");
		
		ABP_Deathmatch_HUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ChangeTeam
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_HUD_C::ChangeTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ChangeTeam");
		
		ABP_Deathmatch_HUD_C_ChangeTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.BP_CreateWidgets
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_HUD_C::BP_CreateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.BP_CreateWidgets");
		
		ABP_Deathmatch_HUD_C_BP_CreateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ExecuteUbergraph_BP_Deathmatch_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_HUD_C::ExecuteUbergraph_BP_Deathmatch_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_HUD.BP_Deathmatch_HUD_C.ExecuteUbergraph_BP_Deathmatch_HUD");
		
		ABP_Deathmatch_HUD_C_ExecuteUbergraph_BP_Deathmatch_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_HUD.BP_Deathmatch_HUD_C");
		return ptr;
	}

}


