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
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.CanDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGA_Skill_Studs_C::CanDamage(class AActor* Other)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.CanDamage");
		
		UGA_Skill_Studs_C_CanDamage_Params params {};
		params.Other = Other;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.GetDamageType
	 * 		Flags  -> ()
	 */
	struct FGameplayTag UGA_Skill_Studs_C::GetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.GetDamageType");
		
		UGA_Skill_Studs_C_GetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.SelectPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		TArray<class AUpGunBaseCharacter*>                 Victimes                                                   (Parm, OutParm)
	 */
	void UGA_Skill_Studs_C::SelectPlayers(const struct FHitResult& Hit, TArray<class AUpGunBaseCharacter*>* Victimes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.SelectPlayers");
		
		UGA_Skill_Studs_C_SelectPlayers_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Victimes != nullptr)
			*Victimes = params.Victimes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.EventReceived_457948F742D2CB0903E6D09160EE6263
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Skill_Studs_C::EventReceived_457948F742D2CB0903E6D09160EE6263(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.EventReceived_457948F742D2CB0903E6D09160EE6263");
		
		UGA_Skill_Studs_C_EventReceived_457948F742D2CB0903E6D09160EE6263_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Studs_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.K2_ActivateAbility");
		
		UGA_Skill_Studs_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.Landed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UGA_Skill_Studs_C::Landed(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.Landed");
		
		UGA_Skill_Studs_C_Landed_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Studs.GA_Skill_Studs_C.ExecuteUbergraph_GA_Skill_Studs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Studs_C::ExecuteUbergraph_GA_Skill_Studs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Studs.GA_Skill_Studs_C.ExecuteUbergraph_GA_Skill_Studs");
		
		UGA_Skill_Studs_C_ExecuteUbergraph_GA_Skill_Studs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Studs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Studs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Studs.GA_Skill_Studs_C");
		return ptr;
	}

}


