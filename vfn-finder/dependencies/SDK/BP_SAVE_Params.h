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
	 * Function BP_SAVE.BP_SAVE_C.AddMapToList
	 */
	struct UBP_SAVE_C_AddMapToList_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasAllMaps;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SAVE.BP_SAVE_C.CountDroppableSkills
	 */
	struct UBP_SAVE_C_CountDroppableSkills_Params
	{
	public:
		int32_t                                                    Available_Skills;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SAVE.BP_SAVE_C.CheckAchievementSkills
	 */
	struct UBP_SAVE_C_CheckAchievementSkills_Params
	{
	public:
		bool                                                       HasAllSkills;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQA5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SAVE.BP_SAVE_C.CheckAchievementMaps
	 */
	struct UBP_SAVE_C_CheckAchievementMaps_Params
	{
	public:
		bool                                                       HasAllMaps;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AVHE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SAVE.BP_SAVE_C.Check
	 */
	struct UBP_SAVE_C_Check_Params
	{	};

	/**
	 * Function BP_SAVE.BP_SAVE_C.ExecuteUbergraph_BP_SAVE
	 */
	struct UBP_SAVE_C_ExecuteUbergraph_BP_SAVE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
