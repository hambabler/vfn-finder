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
	 * 		Name   -> Function AnimBP_Previs.AnimBP_Previs_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_Previs_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Previs.AnimBP_Previs_C.AnimGraph");
		
		UAnimBP_Previs_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Previs.AnimBP_Previs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Previs_AnimGraphNode_BlendListByInt_E15EE64F4323A280FE2FD081698137E3
	 * 		Flags  -> ()
	 */
	void UAnimBP_Previs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Previs_AnimGraphNode_BlendListByInt_E15EE64F4323A280FE2FD081698137E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Previs.AnimBP_Previs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Previs_AnimGraphNode_BlendListByInt_E15EE64F4323A280FE2FD081698137E3");
		
		UAnimBP_Previs_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Previs_AnimGraphNode_BlendListByInt_E15EE64F4323A280FE2FD081698137E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Previs.AnimBP_Previs_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAnimBP_Previs_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Previs.AnimBP_Previs_C.BlueprintInitializeAnimation");
		
		UAnimBP_Previs_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Previs.AnimBP_Previs_C.ExecuteUbergraph_AnimBP_Previs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Previs_C::ExecuteUbergraph_AnimBP_Previs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Previs.AnimBP_Previs_C.ExecuteUbergraph_AnimBP_Previs");
		
		UAnimBP_Previs_C_ExecuteUbergraph_AnimBP_Previs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_Previs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_Previs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Previs.AnimBP_Previs_C");
		return ptr;
	}

}


