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
	 * Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageNumber
	 */
	struct UHUD_FloatingDamage_C_SetDamageNumber_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FloatingDamage.HUD_FloatingDamage_C.SetDamageText
	 */
	struct UHUD_FloatingDamage_C_SetDamageText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Headshot;                                                // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_FloatingDamage.HUD_FloatingDamage_C.ExecuteUbergraph_HUD_FloatingDamage
	 */
	struct UHUD_FloatingDamage_C_ExecuteUbergraph_HUD_FloatingDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
