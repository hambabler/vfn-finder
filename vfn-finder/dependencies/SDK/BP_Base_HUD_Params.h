#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.DropItem
	 */
	struct ABP_Base_HUD_C_DropItem_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.Wind_Tick
	 */
	struct ABP_Base_HUD_C_Wind_Tick_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.Spawn_WindSFX
	 */
	struct ABP_Base_HUD_C_Spawn_WindSFX_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ValidateAchievement
	 */
	struct ABP_Base_HUD_C_ValidateAchievement_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ApplyFOV
	 */
	struct ABP_Base_HUD_C_ApplyFOV_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.Achievement_Pacifist
	 */
	struct ABP_Base_HUD_C_Achievement_Pacifist_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.UpdateUsedSkills
	 */
	struct ABP_Base_HUD_C_UpdateUsedSkills_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.OnSwitchedState
	 */
	struct ABP_Base_HUD_C_OnSwitchedState_Params
	{
	public:
		struct FGameplayTag                                        OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.DamageIndicatorTick
	 */
	struct ABP_Base_HUD_C_DamageIndicatorTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.GetHitDirection
	 */
	struct ABP_Base_HUD_C_GetHitDirection_Params
	{
	public:
		struct FVector                                             HitDirection;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.SpawnDamageNumber
	 */
	struct ABP_Base_HUD_C_SpawnDamageNumber_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IVQ1[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AUpGunBasePlayerState*                               Victim;                                                  // 0x02A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.Test_ShowHealthBars
	 */
	struct ABP_Base_HUD_C_Test_ShowHealthBars_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.CameraShakeOnLanded
	 */
	struct ABP_Base_HUD_C_CameraShakeOnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.SpeedLines_Tick
	 */
	struct ABP_Base_HUD_C_SpeedLines_Tick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.SpawnSpeedLines
	 */
	struct ABP_Base_HUD_C_SpawnSpeedLines_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Pause_K2Node_InputActionEvent_2
	 */
	struct ABP_Base_HUD_C_InpActEvt_Pause_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.InpActEvt_Chat_K2Node_InputActionEvent_1
	 */
	struct ABP_Base_HUD_C_InpActEvt_Chat_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.OnAcknowledgedPossession
	 */
	struct ABP_Base_HUD_C_OnAcknowledgedPossession_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.BP_CreateWidgets
	 */
	struct ABP_Base_HUD_C_BP_CreateWidgets_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ReceiveTick
	 */
	struct ABP_Base_HUD_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.OnDamaged
	 */
	struct ABP_Base_HUD_C_OnDamaged_Params
	{
	public:
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0000(0x0298)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ClickedResumeOnPauseMenu
	 */
	struct ABP_Base_HUD_C_ClickedResumeOnPauseMenu_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ReceiveBeginPlay
	 */
	struct ABP_Base_HUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_HUD.BP_Base_HUD_C.ExecuteUbergraph_BP_Base_HUD
	 */
	struct ABP_Base_HUD_C_ExecuteUbergraph_BP_Base_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8IRG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
