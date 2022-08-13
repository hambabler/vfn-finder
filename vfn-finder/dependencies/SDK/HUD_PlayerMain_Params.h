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
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateCrossHair
	 */
	struct UHUD_PlayerMain_C_UpdateCrossHair_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.UpdateHealth
	 */
	struct UHUD_PlayerMain_C_UpdateHealth_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.Homing Bullets Trace
	 */
	struct UHUD_PlayerMain_C_Homing_Bullets_Trace_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.Place Widget on Screen
	 */
	struct UHUD_PlayerMain_C_Place_Widget_on_Screen_Params
	{
	public:
		struct FVector                                             AutoAimLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
		unsigned char                                              UnknownData_ALBL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Run
	 */
	struct UHUD_PlayerMain_C_HUD_Anim_Run_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.HUD_Anim_Fall
	 */
	struct UHUD_PlayerMain_C_HUD_Anim_Fall_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.HideRespawnText
	 */
	struct UHUD_PlayerMain_C_HideRespawnText_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.OnPlayerKilled
	 */
	struct UHUD_PlayerMain_C_OnPlayerKilled_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.GetRespawnText
	 */
	struct UHUD_PlayerMain_C_GetRespawnText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.OnHealthOrOverHealthChanged
	 */
	struct UHUD_PlayerMain_C_OnHealthOrOverHealthChanged_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OldValue;                                                // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.OnAcknowledgedPossession
	 */
	struct UHUD_PlayerMain_C_OnAcknowledgedPossession_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.Construct
	 */
	struct UHUD_PlayerMain_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.Tick
	 */
	struct UHUD_PlayerMain_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.ExecuteUbergraph_HUD_PlayerMain
	 */
	struct UHUD_PlayerMain_C_ExecuteUbergraph_HUD_PlayerMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PlayerMain.HUD_PlayerMain_C.OnCharacterUpdated__DelegateSignature
	 */
	struct UHUD_PlayerMain_C_OnCharacterUpdated__DelegateSignature_Params
	{
	public:
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
