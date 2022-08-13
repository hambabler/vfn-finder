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
	 * 		Name   -> Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastFlame_C::DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D");
		
		UGA_Skill_LastFlame_C_DidNotSpawn_7EABA1AD4B48F69AF8B94F800EE8245D_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.Success_7EABA1AD4B48F69AF8B94F800EE8245D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastFlame_C::Success_7EABA1AD4B48F69AF8B94F800EE8245D(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.Success_7EABA1AD4B48F69AF8B94F800EE8245D");
		
		UGA_Skill_LastFlame_C_Success_7EABA1AD4B48F69AF8B94F800EE8245D_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_LastFlame_C::EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45");
		
		UGA_Skill_LastFlame_C_EventReceived_5FD4468B4DA4D5D20A770D82C5E79F45_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_LastFlame_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.K2_ActivateAbility");
		
		UGA_Skill_LastFlame_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.ExecuteUbergraph_GA_Skill_LastFlame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastFlame_C::ExecuteUbergraph_GA_Skill_LastFlame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastFlame.GA_Skill_LastFlame_C.ExecuteUbergraph_GA_Skill_LastFlame");
		
		UGA_Skill_LastFlame_C_ExecuteUbergraph_GA_Skill_LastFlame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_LastFlame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_LastFlame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_LastFlame.GA_Skill_LastFlame_C");
		return ptr;
	}

}


