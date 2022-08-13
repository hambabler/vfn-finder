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
	 * 		Name   -> Function AnimBP_knife.AnimBP_knife_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_knife_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_knife.AnimBP_knife_C.AnimGraph");
		
		UAnimBP_knife_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_knife.AnimBP_knife_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_knife_AnimGraphNode_ModifyBone_D4F0FC6D4855DB7D4201319A3C382ED6
	 * 		Flags  -> ()
	 */
	void UAnimBP_knife_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_knife_AnimGraphNode_ModifyBone_D4F0FC6D4855DB7D4201319A3C382ED6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_knife.AnimBP_knife_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_knife_AnimGraphNode_ModifyBone_D4F0FC6D4855DB7D4201319A3C382ED6");
		
		UAnimBP_knife_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_knife_AnimGraphNode_ModifyBone_D4F0FC6D4855DB7D4201319A3C382ED6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_knife.AnimBP_knife_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_knife_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_knife.AnimBP_knife_C.BlueprintUpdateAnimation");
		
		UAnimBP_knife_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_knife.AnimBP_knife_C.ExecuteUbergraph_AnimBP_knife
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_knife_C::ExecuteUbergraph_AnimBP_knife(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_knife.AnimBP_knife_C.ExecuteUbergraph_AnimBP_knife");
		
		UAnimBP_knife_C_ExecuteUbergraph_AnimBP_knife_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_knife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_knife_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_knife.AnimBP_knife_C");
		return ptr;
	}

}


