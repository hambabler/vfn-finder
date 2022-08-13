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
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.Get Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Weapon                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::Get_Weapon(class UPrimitiveComponent** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.Get Weapon");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_Get_Weapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.DidNotSpawn_D6DED8964CF951E7DBE457A3B788C37A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::DidNotSpawn_D6DED8964CF951E7DBE457A3B788C37A(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.DidNotSpawn_D6DED8964CF951E7DBE457A3B788C37A");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_DidNotSpawn_D6DED8964CF951E7DBE457A3B788C37A_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.Success_D6DED8964CF951E7DBE457A3B788C37A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::Success_D6DED8964CF951E7DBE457A3B788C37A(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.Success_D6DED8964CF951E7DBE457A3B788C37A");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_Success_D6DED8964CF951E7DBE457A3B788C37A_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.K2_ActivateAbility");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.FireWithDelay
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::FireWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.FireWithDelay");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_FireWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_GrenadeLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::ExecuteUbergraph_GA_Skill_SecondaryWeapon_GrenadeLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_GrenadeLauncher");
		
		UGA_Skill_SecondaryWeapon_GrenadeLauncher_C_ExecuteUbergraph_GA_Skill_SecondaryWeapon_GrenadeLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_SecondaryWeapon_GrenadeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_SecondaryWeapon_GrenadeLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_SecondaryWeapon_GrenadeLauncher.GA_Skill_SecondaryWeapon_GrenadeLauncher_C");
		return ptr;
	}

}


