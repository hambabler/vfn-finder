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
	 * Function WID_Lobby_Friends.WID_Lobby_Friends_C.OnFriendsChanged
	 */
	struct UWID_Lobby_Friends_C_OnFriendsChanged_Params
	{	};

	/**
	 * Function WID_Lobby_Friends.WID_Lobby_Friends_C.Construct
	 */
	struct UWID_Lobby_Friends_C_Construct_Params
	{	};

	/**
	 * Function WID_Lobby_Friends.WID_Lobby_Friends_C.ExecuteUbergraph_WID_Lobby_Friends
	 */
	struct UWID_Lobby_Friends_C_ExecuteUbergraph_WID_Lobby_Friends_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUO2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
