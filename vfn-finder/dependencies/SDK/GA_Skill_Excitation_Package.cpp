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
	 * 		Name   -> Function GA_Skill_Excitation.GA_Skill_Excitation_C.EventReceived_DF8979EA4FB4BEAA7CD78A9B8B796A21
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_Excitation_C::EventReceived_DF8979EA4FB4BEAA7CD78A9B8B796A21(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Excitation.GA_Skill_Excitation_C.EventReceived_DF8979EA4FB4BEAA7CD78A9B8B796A21");
		
		UGA_Skill_Excitation_C_EventReceived_DF8979EA4FB4BEAA7CD78A9B8B796A21_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Excitation.GA_Skill_Excitation_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Excitation_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Excitation.GA_Skill_Excitation_C.K2_ActivateAbility");
		
		UGA_Skill_Excitation_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Excitation.GA_Skill_Excitation_C.ExecuteUbergraph_GA_Skill_Excitation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Excitation_C::ExecuteUbergraph_GA_Skill_Excitation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Excitation.GA_Skill_Excitation_C.ExecuteUbergraph_GA_Skill_Excitation");
		
		UGA_Skill_Excitation_C_ExecuteUbergraph_GA_Skill_Excitation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Excitation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Excitation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Excitation.GA_Skill_Excitation_C");
		return ptr;
	}

}


