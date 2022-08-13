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
	 * Function AnimBP_Clone.AnimBP_Clone_C.AnimGraph
	 */
	struct UAnimBP_Clone_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.BlueprintUpdateAnimation
	 */
	struct UAnimBP_Clone_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.BlueprintInitializeAnimation
	 */
	struct UAnimBP_Clone_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Land
	 */
	struct UAnimBP_Clone_C_AnimNotify_Land_Params
	{	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.NewStep
	 */
	struct UAnimBP_Clone_C_NewStep_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_L
	 */
	struct UAnimBP_Clone_C_AnimNotify_Step_L_Params
	{	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_R
	 */
	struct UAnimBP_Clone_C_AnimNotify_Step_R_Params
	{	};

	/**
	 * Function AnimBP_Clone.AnimBP_Clone_C.ExecuteUbergraph_AnimBP_Clone
	 */
	struct UAnimBP_Clone_C_ExecuteUbergraph_AnimBP_Clone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
