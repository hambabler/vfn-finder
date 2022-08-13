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
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.PopulateOwnedSkillsList
	 */
	struct UHUD_SkillPicking_C_PopulateOwnedSkillsList_Params
	{	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.HideAllButtons
	 */
	struct UHUD_SkillPicking_C_HideAllButtons_Params
	{	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.OnSelected
	 */
	struct UHUD_SkillPicking_C_OnSelected_Params
	{
	public:
		struct FGameplayTag                                        Skill;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.SendSkills
	 */
	struct UHUD_SkillPicking_C_SendSkills_Params
	{
	public:
		struct FGameplayTagContainer                               Skills;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.GetCountdownText
	 */
	struct UHUD_SkillPicking_C_GetCountdownText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.Construct
	 */
	struct UHUD_SkillPicking_C_Construct_Params
	{	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.Tick
	 */
	struct UHUD_SkillPicking_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.ExecuteUbergraph_HUD_SkillPicking
	 */
	struct UHUD_SkillPicking_C_ExecuteUbergraph_HUD_SkillPicking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_SkillPicking.HUD_SkillPicking_C.OnSkillSelected__DelegateSignature
	 */
	struct UHUD_SkillPicking_C_OnSkillSelected__DelegateSignature_Params
	{
	public:
		struct FGameplayTag                                        Skill;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
