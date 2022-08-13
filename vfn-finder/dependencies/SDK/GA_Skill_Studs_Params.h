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
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.CanDamage
	 */
	struct UGA_Skill_Studs_C_CanDamage_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.GetDamageType
	 */
	struct UGA_Skill_Studs_C_GetDamageType_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.SelectPlayers
	 */
	struct UGA_Skill_Studs_C_SelectPlayers_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		unsigned char                                              UnknownData_TH0N[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AUpGunBaseCharacter*>                         Victimes;                                                // 0x0090(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.EventReceived_457948F742D2CB0903E6D09160EE6263
	 */
	struct UGA_Skill_Studs_C_EventReceived_457948F742D2CB0903E6D09160EE6263_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.K2_ActivateAbility
	 */
	struct UGA_Skill_Studs_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.Landed
	 */
	struct UGA_Skill_Studs_C_Landed_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function GA_Skill_Studs.GA_Skill_Studs_C.ExecuteUbergraph_GA_Skill_Studs
	 */
	struct UGA_Skill_Studs_C_ExecuteUbergraph_GA_Skill_Studs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7WPE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
