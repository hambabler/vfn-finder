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
	 * 		Name   -> Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.EventReceived_9D021C1146C294F169B6CC9DCA7625DF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_Knife_Heal_C::EventReceived_9D021C1146C294F169B6CC9DCA7625DF(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.EventReceived_9D021C1146C294F169B6CC9DCA7625DF");
		
		UGA_Skill_Knife_Heal_C_EventReceived_9D021C1146C294F169B6CC9DCA7625DF_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Knife_Heal_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.K2_ActivateAbility");
		
		UGA_Skill_Knife_Heal_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.ExecuteUbergraph_GA_Skill_Knife_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Knife_Heal_C::ExecuteUbergraph_GA_Skill_Knife_Heal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C.ExecuteUbergraph_GA_Skill_Knife_Heal");
		
		UGA_Skill_Knife_Heal_C_ExecuteUbergraph_GA_Skill_Knife_Heal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Knife_Heal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Knife_Heal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Knife_Heal.GA_Skill_Knife_Heal_C");
		return ptr;
	}

}


