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
	 * Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.AddNames
	 */
	struct UHUD_KillFeedEntry_C_AddNames_Params
	{	};

	/**
	 * Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.Construct
	 */
	struct UHUD_KillFeedEntry_C_Construct_Params
	{	};

	/**
	 * Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.OnDestroyWidget
	 */
	struct UHUD_KillFeedEntry_C_OnDestroyWidget_Params
	{	};

	/**
	 * Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.PreConstruct
	 */
	struct UHUD_KillFeedEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_KillFeedEntry.HUD_KillFeedEntry_C.ExecuteUbergraph_HUD_KillFeedEntry
	 */
	struct UHUD_KillFeedEntry_C_ExecuteUbergraph_HUD_KillFeedEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
