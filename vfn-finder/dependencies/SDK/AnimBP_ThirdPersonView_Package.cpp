/**
 * Name: UpGun
 * Version: 0.5
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_ThirdPersonView_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimGraph");
		
		UAnimBP_ThirdPersonView_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.DistanceWithoutIK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Threshold                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_ThirdPersonView_C::DistanceWithoutIK(float Threshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.DistanceWithoutIK");
		
		UAnimBP_ThirdPersonView_C_DistanceWithoutIK_Params params {};
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.CheckMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Treshold                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_ThirdPersonView_C::CheckMoving(float Treshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.CheckMoving");
		
		UAnimBP_ThirdPersonView_C_CheckMoving_Params params {};
		params.Treshold = Treshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.GetLegsDirection
	 * 		Flags  -> ()
	 */
	float UAnimBP_ThirdPersonView_C::GetLegsDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.GetLegsDirection");
		
		UAnimBP_ThirdPersonView_C_GetLegsDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.IK Set Foot Loc Rot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ForwardOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RightOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    RotOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_ThirdPersonView_C::IK_Set_Foot_Loc_Rot(struct FVector* Vector, float ForwardOffset, float RightOffset, struct FRotator* Rot, const struct FRotator& RotOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.IK Set Foot Loc Rot");
		
		UAnimBP_ThirdPersonView_C_IK_Set_Foot_Loc_Rot_Params params {};
		params.ForwardOffset = ForwardOffset;
		params.RightOffset = RightOffset;
		params.RotOffset = RotOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vector != nullptr)
			*Vector = params.Vector;
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK
	 * 		Flags  -> ()
	 */
	bool UAnimBP_ThirdPersonView_C::ShouldUseIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK");
		
		UAnimBP_ThirdPersonView_C_ShouldUseIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Can Jump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Should_Jump                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bJumping                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_ThirdPersonView_C::Can_Jump(bool Should_Jump, bool* bJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Can Jump");
		
		UAnimBP_ThirdPersonView_C_Can_Jump_Params params {};
		params.Should_Jump = Should_Jump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bJumping != nullptr)
			*bJumping = params.bJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E6A2FE6B4D9AEAA9C5E7E5895D3C23E8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_3481F50948D90598B0353C86DB782781_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_307F703C4996A8C6F278CFB7E77B28D7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_E869A9E24038D4D5F61957B55D6F73CC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_B13120D543BB8471D29C02BCEBB12A9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_ModifyBone_D4A1167D41F36540FC18D4BB57842282_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_C4B207C94AC25250EC3C97B56D9B12BB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendListByBool_3721054943DB09E915543B874B1C64B4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72");
		
		UAnimBP_ThirdPersonView_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ThirdPersonView_AnimGraphNode_BlendSpacePlayer_BFA5BE3D4228FDFF66ECD9A56B229C72_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_ThirdPersonView_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintUpdateAnimation");
		
		UAnimBP_ThirdPersonView_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.BlueprintInitializeAnimation");
		
		UAnimBP_ThirdPersonView_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK_Interp
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::ShouldUseIK_Interp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ShouldUseIK_Interp");
		
		UAnimBP_ThirdPersonView_C_ShouldUseIK_Interp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.RecalculateFeetLoc
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::RecalculateFeetLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.RecalculateFeetLoc");
		
		UAnimBP_ThirdPersonView_C_RecalculateFeetLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UAnimBP_ThirdPersonView_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.OnLanded");
		
		UAnimBP_ThirdPersonView_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.NewStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_ThirdPersonView_C::NewStep(const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.NewStep");
		
		UAnimBP_ThirdPersonView_C_NewStep_Params params {};
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_L
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::AnimNotify_Step_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_L");
		
		UAnimBP_ThirdPersonView_C_AnimNotify_Step_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_R
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::AnimNotify_Step_R()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.AnimNotify_Step_R");
		
		UAnimBP_ThirdPersonView_C_AnimNotify_Step_R_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Land_Particle
	 * 		Flags  -> ()
	 */
	void UAnimBP_ThirdPersonView_C::Land_Particle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.Land_Particle");
		
		UAnimBP_ThirdPersonView_C_Land_Particle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ExecuteUbergraph_AnimBP_ThirdPersonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_ThirdPersonView_C::ExecuteUbergraph_AnimBP_ThirdPersonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C.ExecuteUbergraph_AnimBP_ThirdPersonView");
		
		UAnimBP_ThirdPersonView_C_ExecuteUbergraph_AnimBP_ThirdPersonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_ThirdPersonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_ThirdPersonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_ThirdPersonView.AnimBP_ThirdPersonView_C");
		return ptr;
	}

}


