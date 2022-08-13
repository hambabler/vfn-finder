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
	 * Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Construct
	 */
	struct UHUD_PlayerActionEntry_C_Construct_Params
	{	};

	/**
	 * Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.Destroy
	 */
	struct UHUD_PlayerActionEntry_C_Destroy_Params
	{	};

	/**
	 * Function HUD_PlayerActionEntry.HUD_PlayerActionEntry_C.ExecuteUbergraph_HUD_PlayerActionEntry
	 */
	struct UHUD_PlayerActionEntry_C_ExecuteUbergraph_HUD_PlayerActionEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
