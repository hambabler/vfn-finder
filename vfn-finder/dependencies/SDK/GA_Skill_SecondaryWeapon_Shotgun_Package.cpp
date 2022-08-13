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
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.Get Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Weapon                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_Shotgun_C::Get_Weapon(class UPrimitiveComponent** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.Get Weapon");
		
		UGA_Skill_SecondaryWeapon_Shotgun_C_Get_Weapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_Shotgun_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.K2_ActivateAbility");
		
		UGA_Skill_SecondaryWeapon_Shotgun_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ShootWithDelay
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_Shotgun_C::ShootWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ShootWithDelay");
		
		UGA_Skill_SecondaryWeapon_Shotgun_C_ShootWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_Shotgun_C::ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun");
		
		UGA_Skill_SecondaryWeapon_Shotgun_C_ExecuteUbergraph_GA_Skill_SecondaryWeapon_Shotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_SecondaryWeapon_Shotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_SecondaryWeapon_Shotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_SecondaryWeapon_Shotgun.GA_Skill_SecondaryWeapon_Shotgun_C");
		return ptr;
	}

}


