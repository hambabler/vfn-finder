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
	 * Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay
	 */
	struct AMap_MainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Map_MainMenu.Map_MainMenu_C.ReceiveEndPlay
	 */
	struct AMap_MainMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Map_MainMenu.Map_MainMenu_C.GiveItems_Event
	 */
	struct AMap_MainMenu_C_GiveItems_Event_Params
	{	};

	/**
	 * Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu
	 */
	struct AMap_MainMenu_C_ExecuteUbergraph_Map_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
