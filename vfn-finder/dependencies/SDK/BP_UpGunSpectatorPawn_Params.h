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
	 * Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Get Angular from Direction
	 */
	struct ABP_UpGunSpectatorPawn_C_Get_Angular_from_Direction_Params
	{
	public:
		struct FVector                                             DirectionnalVector;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxDesiredRotation;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DesiredAngle;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.Orient
	 */
	struct ABP_UpGunSpectatorPawn_C_Orient_Params
	{	};

	/**
	 * Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ReceiveTick
	 */
	struct ABP_UpGunSpectatorPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C.ExecuteUbergraph_BP_UpGunSpectatorPawn
	 */
	struct ABP_UpGunSpectatorPawn_C_ExecuteUbergraph_BP_UpGunSpectatorPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
