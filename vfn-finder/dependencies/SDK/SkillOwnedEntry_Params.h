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
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.GenerateVisual
	 */
	struct USkillOwnedEntry_C_GenerateVisual_Params
	{
	public:
		class UUpGunSkill*                                         Skill;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseEnter
	 */
	struct USkillOwnedEntry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.OnMouseLeave
	 */
	struct USkillOwnedEntry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.Construct
	 */
	struct USkillOwnedEntry_C_Construct_Params
	{	};

	/**
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.PreConstruct
	 */
	struct USkillOwnedEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillOwnedEntry.SkillOwnedEntry_C.ExecuteUbergraph_SkillOwnedEntry
	 */
	struct USkillOwnedEntry_C_ExecuteUbergraph_SkillOwnedEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
