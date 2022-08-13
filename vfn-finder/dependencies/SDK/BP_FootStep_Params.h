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
	 * Function BP_FootStep.BP_FootStep_C.PlaySound
	 */
	struct ABP_FootStep_C_PlaySound_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.TraceFloor
	 */
	struct ABP_FootStep_C_TraceFloor_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OETW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.DestroyTest
	 */
	struct ABP_FootStep_C_DestroyTest_Params
	{	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.Particle
	 */
	struct ABP_FootStep_C_Particle_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.Step
	 */
	struct ABP_FootStep_C_Step_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.ReceiveBeginPlay
	 */
	struct ABP_FootStep_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.ReceiveDestroyed
	 */
	struct ABP_FootStep_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.Jump
	 */
	struct ABP_FootStep_C_Jump_Params
	{	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.Land
	 */
	struct ABP_FootStep_C_Land_Params
	{	};

	/**
	 * Function BP_FootStep.BP_FootStep_C.ExecuteUbergraph_BP_FootStep
	 */
	struct ABP_FootStep_C_ExecuteUbergraph_BP_FootStep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
