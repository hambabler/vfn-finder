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
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_Clone_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.AnimGraph");
		
		UAnimBP_Clone_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Clone_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.BlueprintUpdateAnimation");
		
		UAnimBP_Clone_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAnimBP_Clone_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.BlueprintInitializeAnimation");
		
		UAnimBP_Clone_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Land
	 * 		Flags  -> ()
	 */
	void UAnimBP_Clone_C::AnimNotify_Land()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Land");
		
		UAnimBP_Clone_C_AnimNotify_Land_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.NewStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Clone_C::NewStep(const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.NewStep");
		
		UAnimBP_Clone_C_NewStep_Params params {};
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_L
	 * 		Flags  -> ()
	 */
	void UAnimBP_Clone_C::AnimNotify_Step_L()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_L");
		
		UAnimBP_Clone_C_AnimNotify_Step_L_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_R
	 * 		Flags  -> ()
	 */
	void UAnimBP_Clone_C::AnimNotify_Step_R()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.AnimNotify_Step_R");
		
		UAnimBP_Clone_C_AnimNotify_Step_R_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_Clone.AnimBP_Clone_C.ExecuteUbergraph_AnimBP_Clone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_Clone_C::ExecuteUbergraph_AnimBP_Clone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_Clone.AnimBP_Clone_C.ExecuteUbergraph_AnimBP_Clone");
		
		UAnimBP_Clone_C_ExecuteUbergraph_AnimBP_Clone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_Clone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_Clone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Clone.AnimBP_Clone_C");
		return ptr;
	}

}


