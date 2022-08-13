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
	 * 		Name   -> Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.EventReceived_CC18F95B4A5073CFE1F611B95305C9FC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_ReturnPolicy_C::EventReceived_CC18F95B4A5073CFE1F611B95305C9FC(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.EventReceived_CC18F95B4A5073CFE1F611B95305C9FC");
		
		UGA_Skill_ReturnPolicy_C_EventReceived_CC18F95B4A5073CFE1F611B95305C9FC_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ReturnPolicy_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.K2_ActivateAbility");
		
		UGA_Skill_ReturnPolicy_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.ExecuteUbergraph_GA_Skill_ReturnPolicy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ReturnPolicy_C::ExecuteUbergraph_GA_Skill_ReturnPolicy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C.ExecuteUbergraph_GA_Skill_ReturnPolicy");
		
		UGA_Skill_ReturnPolicy_C_ExecuteUbergraph_GA_Skill_ReturnPolicy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_ReturnPolicy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_ReturnPolicy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_ReturnPolicy.GA_Skill_ReturnPolicy_C");
		return ptr;
	}

}


