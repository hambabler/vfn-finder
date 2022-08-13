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
	 * 		Name   -> Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.DidNotSpawn_7AB4EDB84261535E2276C8980E17FD89
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_RepairKit_C::DidNotSpawn_7AB4EDB84261535E2276C8980E17FD89(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.DidNotSpawn_7AB4EDB84261535E2276C8980E17FD89");
		
		UGA_Skill_RepairKit_C_DidNotSpawn_7AB4EDB84261535E2276C8980E17FD89_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.Success_7AB4EDB84261535E2276C8980E17FD89
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_RepairKit_C::Success_7AB4EDB84261535E2276C8980E17FD89(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.Success_7AB4EDB84261535E2276C8980E17FD89");
		
		UGA_Skill_RepairKit_C_Success_7AB4EDB84261535E2276C8980E17FD89_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.EventReceived_797C1620478C14BD72EA0B8C95A49FC9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_RepairKit_C::EventReceived_797C1620478C14BD72EA0B8C95A49FC9(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.EventReceived_797C1620478C14BD72EA0B8C95A49FC9");
		
		UGA_Skill_RepairKit_C_EventReceived_797C1620478C14BD72EA0B8C95A49FC9_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_RepairKit_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.K2_ActivateAbility");
		
		UGA_Skill_RepairKit_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.ExecuteUbergraph_GA_Skill_RepairKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_RepairKit_C::ExecuteUbergraph_GA_Skill_RepairKit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_RepairKit.GA_Skill_RepairKit_C.ExecuteUbergraph_GA_Skill_RepairKit");
		
		UGA_Skill_RepairKit_C_ExecuteUbergraph_GA_Skill_RepairKit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_RepairKit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_RepairKit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_RepairKit.GA_Skill_RepairKit_C");
		return ptr;
	}

}


