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
	 * Function BP_Shrapnel.BP_Shrapnel_C.Decals
	 */
	struct ABP_Shrapnel_C_Decals_Params
	{	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.DoesLinearFallOff
	 */
	struct ABP_Shrapnel_C_DoesLinearFallOff_Params
	{
	public:
		bool                                                       ShouldUseLinearFallOff;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D2FM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnDamage;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.ParticleEffect
	 */
	struct ABP_Shrapnel_C_ParticleEffect_Params
	{	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.ComputeSeed
	 */
	struct ABP_Shrapnel_C_ComputeSeed_Params
	{
	public:
		int32_t                                                    Modifier;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.GenerateDirections
	 */
	struct ABP_Shrapnel_C_GenerateDirections_Params
	{	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.ReceiveBeginPlay
	 */
	struct ABP_Shrapnel_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Shrapnel.BP_Shrapnel_C.ExecuteUbergraph_BP_Shrapnel
	 */
	struct ABP_Shrapnel_C_ExecuteUbergraph_BP_Shrapnel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
