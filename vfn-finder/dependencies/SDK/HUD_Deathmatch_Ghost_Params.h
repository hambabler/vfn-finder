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
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Construct
	 */
	struct UHUD_Deathmatch_Ghost_C_Construct_Params
	{	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.PreConstruct
	 */
	struct UHUD_Deathmatch_Ghost_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Boouh
	 */
	struct UHUD_Deathmatch_Ghost_C_Boouh_Params
	{	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ResetHUD
	 */
	struct UHUD_Deathmatch_Ghost_C_ResetHUD_Params
	{	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.Tick
	 */
	struct UHUD_Deathmatch_Ghost_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.OnAcknowledgedPossession
	 */
	struct UHUD_Deathmatch_Ghost_C_OnAcknowledgedPossession_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Deathmatch_Ghost.HUD_Deathmatch_Ghost_C.ExecuteUbergraph_HUD_Deathmatch_Ghost
	 */
	struct UHUD_Deathmatch_Ghost_C_ExecuteUbergraph_HUD_Deathmatch_Ghost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
