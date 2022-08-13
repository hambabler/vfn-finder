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
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupAnimations
	 */
	struct UHUD_SkillPicking_Skill_C_SetupAnimations_Params
	{
	public:
		int32_t                                                    SkillIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ResetUIState
	 */
	struct UHUD_SkillPicking_Skill_C_ResetUIState_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupUI_Error
	 */
	struct UHUD_SkillPicking_Skill_C_SetupUI_Error_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.SetupVisual
	 */
	struct UHUD_SkillPicking_Skill_C_SetupVisual_Params
	{
	public:
		struct FGameplayTag                                        SkillId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UUpGunSkill*                                         Skill;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Level;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsMysteryCard;                                           // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OLMX[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.PreConstruct
	 */
	struct UHUD_SkillPicking_Skill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Construct
	 */
	struct UHUD_SkillPicking_Skill_C_Construct_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UHUD_SkillPicking_Skill_C_BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.EntryAnimation
	 */
	struct UHUD_SkillPicking_Skill_C_EntryAnimation_Params
	{
	public:
		int32_t                                                    SkillIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.IsAlreadyHovered
	 */
	struct UHUD_SkillPicking_Skill_C_IsAlreadyHovered_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Tick
	 */
	struct UHUD_SkillPicking_Skill_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Focused
	 */
	struct UHUD_SkillPicking_Skill_C_Focused_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.UnFocused
	 */
	struct UHUD_SkillPicking_Skill_C_UnFocused_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnVisChanged
	 */
	struct UHUD_SkillPicking_Skill_C_OnVisChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.Destruct
	 */
	struct UHUD_SkillPicking_Skill_C_Destruct_Params
	{	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.ExecuteUbergraph_HUD_SkillPicking_Skill
	 */
	struct UHUD_SkillPicking_Skill_C_ExecuteUbergraph_HUD_SkillPicking_Skill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking_Skill.HUD_SkillPicking_Skill_C.OnSelected__DelegateSignature
	 */
	struct UHUD_SkillPicking_Skill_C_OnSelected__DelegateSignature_Params
	{
	public:
		struct FGameplayTag                                        Skill;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
