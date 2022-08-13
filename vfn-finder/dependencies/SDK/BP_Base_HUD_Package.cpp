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
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.DropItem
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::DropItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.DropItem");
		
		ABP_Base_HUD_C_DropItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.Wind_Tick
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::Wind_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.Wind_Tick");
		
		ABP_Base_HUD_C_Wind_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.Spawn_WindSFX
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::Spawn_WindSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.Spawn_WindSFX");
		
		ABP_Base_HUD_C_Spawn_WindSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ValidateAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::ValidateAchievement(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ValidateAchievement");
		
		ABP_Base_HUD_C_ValidateAchievement_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ApplyFOV
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::ApplyFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ApplyFOV");
		
		ABP_Base_HUD_C_ApplyFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.Achievement_Pacifist
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::Achievement_Pacifist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.Achievement_Pacifist");
		
		ABP_Base_HUD_C_Achievement_Pacifist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.UpdateUsedSkills
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::UpdateUsedSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.UpdateUsedSkills");
		
		ABP_Base_HUD_C_UpdateUsedSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.OnSwitchedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::OnSwitchedState(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.OnSwitchedState");
		
		ABP_Base_HUD_C_OnSwitchedState_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.DamageIndicatorTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::DamageIndicatorTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.DamageIndicatorTick");
		
		ABP_Base_HUD_C_DamageIndicatorTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.GetHitDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::GetHitDirection(const struct FVector& HitDirection, float DamageTaken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.GetHitDirection");
		
		ABP_Base_HUD_C_GetHitDirection_Params params {};
		params.HitDirection = HitDirection;
		params.DamageTaken = DamageTaken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.SpawnDamageNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         EffectSpec                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AUpGunBasePlayerState*                       Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::SpawnDamageNumber(const struct FGameplayEffectSpec& EffectSpec, float Amount, class AUpGunBasePlayerState* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.SpawnDamageNumber");
		
		ABP_Base_HUD_C_SpawnDamageNumber_Params params {};
		params.EffectSpec = EffectSpec;
		params.Amount = Amount;
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.Test_ShowHealthBars
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::Test_ShowHealthBars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.Test_ShowHealthBars");
		
		ABP_Base_HUD_C_Test_ShowHealthBars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.CameraShakeOnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_HUD_C::CameraShakeOnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.CameraShakeOnLanded");
		
		ABP_Base_HUD_C_CameraShakeOnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.SpeedLines_Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::SpeedLines_Tick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.SpeedLines_Tick");
		
		ABP_Base_HUD_C_SpeedLines_Tick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.SpawnSpeedLines
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::SpawnSpeedLines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.SpawnSpeedLines");
		
		ABP_Base_HUD_C_SpawnSpeedLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Pause_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::InpActEvt_Pause_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Pause_K2Node_InputActionEvent_2");
		
		ABP_Base_HUD_C_InpActEvt_Pause_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Chat_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Chat_K2Node_InputActionEvent_1");
		
		ABP_Base_HUD_C_InpActEvt_Chat_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.OnAcknowledgedPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::OnAcknowledgedPossession(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.OnAcknowledgedPossession");
		
		ABP_Base_HUD_C_OnAcknowledgedPossession_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.BP_CreateWidgets
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::BP_CreateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.BP_CreateWidgets");
		
		ABP_Base_HUD_C_BP_CreateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ReceiveTick");
		
		ABP_Base_HUD_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.OnDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         EffectSpec                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::OnDamaged(const struct FGameplayEffectSpec& EffectSpec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.OnDamaged");
		
		ABP_Base_HUD_C_OnDamaged_Params params {};
		params.EffectSpec = EffectSpec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ClickedResumeOnPauseMenu
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::ClickedResumeOnPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ClickedResumeOnPauseMenu");
		
		ABP_Base_HUD_C_ClickedResumeOnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_HUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ReceiveBeginPlay");
		
		ABP_Base_HUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_HUD.BP_Base_HUD_C.ExecuteUbergraph_BP_Base_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_HUD_C::ExecuteUbergraph_BP_Base_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_HUD.BP_Base_HUD_C.ExecuteUbergraph_BP_Base_HUD");
		
		ABP_Base_HUD_C_ExecuteUbergraph_BP_Base_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_HUD.BP_Base_HUD_C");
		return ptr;
	}

}


