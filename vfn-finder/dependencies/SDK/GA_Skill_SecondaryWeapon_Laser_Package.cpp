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
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.Trace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_Laser_C::Trace(struct FHitResult* OutHit, struct FVector* Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.Trace");
		
		UGA_Skill_SecondaryWeapon_Laser_C_Trace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		if (Normal != nullptr)
			*Normal = params.Normal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.OnSync_2AADC4EB48EAEED90D8A83BE93834193
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_Laser_C::OnSync_2AADC4EB48EAEED90D8A83BE93834193()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.OnSync_2AADC4EB48EAEED90D8A83BE93834193");
		
		UGA_Skill_SecondaryWeapon_Laser_C_OnSync_2AADC4EB48EAEED90D8A83BE93834193_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_Laser_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.K2_ActivateAbility");
		
		UGA_Skill_SecondaryWeapon_Laser_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ShootWithDelay
	 * 		Flags  -> ()
	 */
	void UGA_Skill_SecondaryWeapon_Laser_C::ShootWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ShootWithDelay");
		
		UGA_Skill_SecondaryWeapon_Laser_C_ShootWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_SecondaryWeapon_Laser_C::ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C.ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser");
		
		UGA_Skill_SecondaryWeapon_Laser_C_ExecuteUbergraph_GA_Skill_SecondaryWeapon_Laser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_SecondaryWeapon_Laser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_SecondaryWeapon_Laser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_SecondaryWeapon_Laser.GA_Skill_SecondaryWeapon_Laser_C");
		return ptr;
	}

}


