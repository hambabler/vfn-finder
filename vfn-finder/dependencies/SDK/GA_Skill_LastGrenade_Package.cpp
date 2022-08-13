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
	 * 		Name   -> Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastGrenade_C::DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5");
		
		UGA_Skill_LastGrenade_C_DidNotSpawn_F298BCA14A29563ECBBC3D8ED88D37F5_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.Success_F298BCA14A29563ECBBC3D8ED88D37F5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastGrenade_C::Success_F298BCA14A29563ECBBC3D8ED88D37F5(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.Success_F298BCA14A29563ECBBC3D8ED88D37F5");
		
		UGA_Skill_LastGrenade_C_Success_F298BCA14A29563ECBBC3D8ED88D37F5_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.EventReceived_94687D994008B101571C08AAA0028257
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_LastGrenade_C::EventReceived_94687D994008B101571C08AAA0028257(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.EventReceived_94687D994008B101571C08AAA0028257");
		
		UGA_Skill_LastGrenade_C_EventReceived_94687D994008B101571C08AAA0028257_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_LastGrenade_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.K2_ActivateAbility");
		
		UGA_Skill_LastGrenade_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.ExecuteUbergraph_GA_Skill_LastGrenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_LastGrenade_C::ExecuteUbergraph_GA_Skill_LastGrenade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_LastGrenade.GA_Skill_LastGrenade_C.ExecuteUbergraph_GA_Skill_LastGrenade");
		
		UGA_Skill_LastGrenade_C_ExecuteUbergraph_GA_Skill_LastGrenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_LastGrenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_LastGrenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_LastGrenade.GA_Skill_LastGrenade_C");
		return ptr;
	}

}


