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
	 * 		Name   -> Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.EventReceived_C7856D254CD283606703588FA4317FAD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_EquivalentExchange_C::EventReceived_C7856D254CD283606703588FA4317FAD(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.EventReceived_C7856D254CD283606703588FA4317FAD");
		
		UGA_Skill_EquivalentExchange_C_EventReceived_C7856D254CD283606703588FA4317FAD_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_EquivalentExchange_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.K2_ActivateAbility");
		
		UGA_Skill_EquivalentExchange_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.ExecuteUbergraph_GA_Skill_EquivalentExchange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_EquivalentExchange_C::ExecuteUbergraph_GA_Skill_EquivalentExchange(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C.ExecuteUbergraph_GA_Skill_EquivalentExchange");
		
		UGA_Skill_EquivalentExchange_C_ExecuteUbergraph_GA_Skill_EquivalentExchange_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_EquivalentExchange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_EquivalentExchange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_EquivalentExchange.GA_Skill_EquivalentExchange_C");
		return ptr;
	}

}


