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
	 * 		Name   -> Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.MultiplySensibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Sight_Iron_C::MultiplySensibility(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.MultiplySensibility");
		
		UGA_Skill_Sight_Iron_C_MultiplySensibility_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.OnRelease_C172A5A248A5057F148D79B631780B96
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Sight_Iron_C::OnRelease_C172A5A248A5057F148D79B631780B96(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.OnRelease_C172A5A248A5057F148D79B631780B96");
		
		UGA_Skill_Sight_Iron_C_OnRelease_C172A5A248A5057F148D79B631780B96_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Sight_Iron_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_ActivateAbility");
		
		UGA_Skill_Sight_Iron_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Skill_Sight_Iron_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.K2_OnEndAbility");
		
		UGA_Skill_Sight_Iron_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.ExecuteUbergraph_GA_Skill_Sight_Iron
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Sight_Iron_C::ExecuteUbergraph_GA_Skill_Sight_Iron(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C.ExecuteUbergraph_GA_Skill_Sight_Iron");
		
		UGA_Skill_Sight_Iron_C_ExecuteUbergraph_GA_Skill_Sight_Iron_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Sight_Iron_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Sight_Iron_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C");
		return ptr;
	}

}


