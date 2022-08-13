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
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.CountLevels
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_CountLevels_Params
	{
	public:
		int32_t                                                    Levels;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.Get Text_Entete
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_Get_Text_Entete_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.SelectFromCategorie
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_SelectFromCategorie_Params
	{
	public:
		EUpGunSkillCategory                                        B;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OS68[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.Tri
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_Tri_Params
	{	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.Construct
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_Construct_Params
	{	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.EchapMenu
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_EchapMenu_Params
	{	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.BndEvt__W_Lobby_Match_Settings_DefaultSkill_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_BndEvt__W_Lobby_Match_Settings_DefaultSkill_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.UpdateAllSkills
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_UpdateAllSkills_Params
	{	};

	/**
	 * Function W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C.ExecuteUbergraph_W_Lobby_Match_Settings_DefaultSkill
	 */
	struct UW_Lobby_Match_Settings_DefaultSkill_C_ExecuteUbergraph_W_Lobby_Match_Settings_DefaultSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
