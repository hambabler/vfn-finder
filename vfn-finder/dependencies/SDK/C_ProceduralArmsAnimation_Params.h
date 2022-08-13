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
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Yaw
	 */
	struct UC_ProceduralArmsAnimation_C_Arms_Yaw_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Pitch
	 */
	struct UC_ProceduralArmsAnimation_C_Arms_Pitch_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.Arms_Roll
	 */
	struct UC_ProceduralArmsAnimation_C_Arms_Roll_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveBeginPlay
	 */
	struct UC_ProceduralArmsAnimation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ReceiveTick
	 */
	struct UC_ProceduralArmsAnimation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_ProceduralArmsAnimation.C_ProceduralArmsAnimation_C.ExecuteUbergraph_C_ProceduralArmsAnimation
	 */
	struct UC_ProceduralArmsAnimation_C_ExecuteUbergraph_C_ProceduralArmsAnimation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
