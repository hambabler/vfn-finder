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
	 * 		Name   -> Function AnimBP_Gun.AnimBP_Gun_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_Gun_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Gun.AnimBP_Gun_C.AnimGraph");
		
		UAnimBP_Gun_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Gun.AnimBP_Gun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Gun_AnimGraphNode_ModifyBone_CFB1E29E42EF3F970D6CE6AF23805B8A
	 * 		Flags  -> ()
	 */
	void UAnimBP_Gun_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Gun_AnimGraphNode_ModifyBone_CFB1E29E42EF3F970D6CE6AF23805B8A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Gun.AnimBP_Gun_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Gun_AnimGraphNode_ModifyBone_CFB1E29E42EF3F970D6CE6AF23805B8A");
		
		UAnimBP_Gun_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Gun_AnimGraphNode_ModifyBone_CFB1E29E42EF3F970D6CE6AF23805B8A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Gun.AnimBP_Gun_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Gun_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Gun.AnimBP_Gun_C.BlueprintUpdateAnimation");
		
		UAnimBP_Gun_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Gun.AnimBP_Gun_C.ExecuteUbergraph_AnimBP_Gun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Gun_C::ExecuteUbergraph_AnimBP_Gun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Gun.AnimBP_Gun_C.ExecuteUbergraph_AnimBP_Gun");
		
		UAnimBP_Gun_C_ExecuteUbergraph_AnimBP_Gun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_Gun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_Gun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Gun.AnimBP_Gun_C");
		return ptr;
	}

}


