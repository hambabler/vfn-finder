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
	 * 		Name   -> Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.OnTick_BE416A624FC5D6BCAEE4DC81334742BB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Crits_Insurance_C::OnTick_BE416A624FC5D6BCAEE4DC81334742BB(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.OnTick_BE416A624FC5D6BCAEE4DC81334742BB");
		
		UGA_Skill_Crits_Insurance_C_OnTick_BE416A624FC5D6BCAEE4DC81334742BB_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Crits_Insurance_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.K2_ActivateAbility");
		
		UGA_Skill_Crits_Insurance_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Skill_Crits_Insurance_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.K2_OnEndAbility");
		
		UGA_Skill_Crits_Insurance_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.ExecuteUbergraph_GA_Skill_Crits_Insurance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Crits_Insurance_C::ExecuteUbergraph_GA_Skill_Crits_Insurance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C.ExecuteUbergraph_GA_Skill_Crits_Insurance");
		
		UGA_Skill_Crits_Insurance_C_ExecuteUbergraph_GA_Skill_Crits_Insurance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Crits_Insurance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Crits_Insurance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C");
		return ptr;
	}

}


