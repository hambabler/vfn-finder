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
	 * Function SkillOwnedList.SkillOwnedList_C.CallWithDelay
	 */
	struct USkillOwnedList_C_CallWithDelay_Params
	{	};

	/**
	 * Function SkillOwnedList.SkillOwnedList_C.FillList
	 */
	struct USkillOwnedList_C_FillList_Params
	{
	public:
		TArray<struct FUpGunSkillInstance>                         SkillList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
