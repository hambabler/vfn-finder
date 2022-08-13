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
	 * 		Name   -> Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.EventReceived_9B2D6F3D4FD26150E1A5AA91ABE296B8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_Knife_Throw_Passive_C::EventReceived_9B2D6F3D4FD26150E1A5AA91ABE296B8(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.EventReceived_9B2D6F3D4FD26150E1A5AA91ABE296B8");
		
		UGA_Skill_Knife_Throw_Passive_C_EventReceived_9B2D6F3D4FD26150E1A5AA91ABE296B8_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Knife_Throw_Passive_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.K2_ActivateAbility");
		
		UGA_Skill_Knife_Throw_Passive_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.ExecuteUbergraph_GA_Skill_Knife_Throw_Passive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Knife_Throw_Passive_C::ExecuteUbergraph_GA_Skill_Knife_Throw_Passive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C.ExecuteUbergraph_GA_Skill_Knife_Throw_Passive");
		
		UGA_Skill_Knife_Throw_Passive_C_ExecuteUbergraph_GA_Skill_Knife_Throw_Passive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Knife_Throw_Passive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Knife_Throw_Passive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C");
		return ptr;
	}

}


