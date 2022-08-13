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
	 * Function BP_Lobby_Character.BP_Lobby_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Lobby_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lobby_Character.BP_Lobby_Character_C.BP_OnSpawnDefaultPlayerWeapons
	 */
	struct ABP_Lobby_Character_C_BP_OnSpawnDefaultPlayerWeapons_Params
	{	};

	/**
	 * Function BP_Lobby_Character.BP_Lobby_Character_C.ExecuteUbergraph_BP_Lobby_Character
	 */
	struct ABP_Lobby_Character_C_ExecuteUbergraph_BP_Lobby_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UUA[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
