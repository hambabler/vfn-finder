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
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimGraph
	 */
	struct UAnimBP_ThirdPersonView_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.DistanceWithoutIK
	 */
	struct UAnimBP_ThirdPersonView_C_DistanceWithoutIK_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.CheckMoving
	 */
	struct UAnimBP_ThirdPersonView_C_CheckMoving_Params
	{
	public:
		float                                                      Treshold;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.GetLegsDirection
	 */
	struct UAnimBP_ThirdPersonView_C_GetLegsDirection_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.IK Set Foot Loc Rot
	 */
	struct UAnimBP_ThirdPersonView_C_IK_Set_Foot_Loc_Rot_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ForwardOffset;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightOffset;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rot;                                                     // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            RotOffset;                                               // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YRYT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK
	 */
	struct UAnimBP_ThirdPersonView_C_ShouldUseIK_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Can Jump
	 */
	struct UAnimBP_ThirdPersonView_C_Can_Jump_Params
	{
	public:
		bool                                                       Should_Jump;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bJumping;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72
	 */
	struct UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintUpdateAnimation
	 */
	struct UAnimBP_ThirdPersonView_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintInitializeAnimation
	 */
	struct UAnimBP_ThirdPersonView_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK_Interp
	 */
	struct UAnimBP_ThirdPersonView_C_ShouldUseIK_Interp_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.RecalculateFeetLoc
	 */
	struct UAnimBP_ThirdPersonView_C_RecalculateFeetLoc_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.OnLanded
	 */
	struct UAnimBP_ThirdPersonView_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.NewStep
	 */
	struct UAnimBP_ThirdPersonView_C_NewStep_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_L
	 */
	struct UAnimBP_ThirdPersonView_C_AnimNotify_Step_L_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_R
	 */
	struct UAnimBP_ThirdPersonView_C_AnimNotify_Step_R_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Land_Particle
	 */
	struct UAnimBP_ThirdPersonView_C_Land_Particle_Params
	{	};

	/**
	 * Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ExecuteUbergraph_AnimBP_ThirdPersonView
	 */
	struct UAnimBP_ThirdPersonView_C_ExecuteUbergraph_AnimBP_ThirdPersonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
