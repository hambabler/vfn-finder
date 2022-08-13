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
	 * Function BPC_Shake.BPC_Shake_C.GenRandomValue
	 */
	struct UBPC_Shake_C_GenRandomValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.GenNewRot
	 */
	struct UBPC_Shake_C_GenNewRot_Params
	{	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.SelectComponent
	 */
	struct UBPC_Shake_C_SelectComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToShake;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.ReceiveTick
	 */
	struct UBPC_Shake_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.Shake
	 */
	struct UBPC_Shake_C_Shake_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.ReceiveBeginPlay
	 */
	struct UBPC_Shake_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Shake.BPC_Shake_C.ExecuteUbergraph_BPC_Shake
	 */
	struct UBPC_Shake_C_ExecuteUbergraph_BPC_Shake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
