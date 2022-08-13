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
	 * Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.SetWidgetVisibility
	 */
	struct UW_Lobby_MatchSettings_Mutators_C_SetWidgetVisibility_Params
	{
	public:
		bool                                                       ShowMutators;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Show;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.Construct
	 */
	struct UW_Lobby_MatchSettings_Mutators_C_Construct_Params
	{	};

	/**
	 * Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.PreConstruct
	 */
	struct UW_Lobby_MatchSettings_Mutators_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Lobby_MatchSettings_Mutators.W_Lobby_MatchSettings_Mutators_C.ExecuteUbergraph_W_Lobby_MatchSettings_Mutators
	 */
	struct UW_Lobby_MatchSettings_Mutators_C_ExecuteUbergraph_W_Lobby_MatchSettings_Mutators_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W63E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
