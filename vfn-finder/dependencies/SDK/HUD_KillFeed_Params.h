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
	 * Function HUD_KillFeed.HUD_KillFeed_C.OnPlayerKilledOther
	 */
	struct UHUD_KillFeed_C_OnPlayerKilledOther_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UWX2[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AUpGunBasePlayerState*                               Victim;                                                  // 0x02A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AUpGunBasePlayerState*                               Killer;                                                  // 0x02A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_KillFeed.HUD_KillFeed_C.Construct
	 */
	struct UHUD_KillFeed_C_Construct_Params
	{	};

	/**
	 * Function HUD_KillFeed.HUD_KillFeed_C.ExecuteUbergraph_HUD_KillFeed
	 */
	struct UHUD_KillFeed_C_ExecuteUbergraph_HUD_KillFeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARQP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
