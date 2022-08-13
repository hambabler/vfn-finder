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
	 * Function AnimBP_Bras.AnimBP_Bras_C.AnimGraph
	 */
	struct UAnimBP_Bras_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_Bras.AnimBP_Bras_C.BlueprintUpdateAnimation
	 */
	struct UAnimBP_Bras_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_Bras.AnimBP_Bras_C.BlueprintInitializeAnimation
	 */
	struct UAnimBP_Bras_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AnimBP_Bras.AnimBP_Bras_C.ExecuteUbergraph_AnimBP_Bras
	 */
	struct UAnimBP_Bras_C_ExecuteUbergraph_AnimBP_Bras_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
