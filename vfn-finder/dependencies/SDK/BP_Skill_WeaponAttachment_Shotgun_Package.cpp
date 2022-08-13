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
	 * 		Name   -> Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.OnRep_IsReloading
	 * 		Flags  -> ()
	 */
	void ABP_Skill_WeaponAttachment_Shotgun_C::OnRep_IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.OnRep_IsReloading");
		
		ABP_Skill_WeaponAttachment_Shotgun_C_OnRep_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Skill_WeaponAttachment_Shotgun_C::Fire(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.Fire");
		
		ABP_Skill_WeaponAttachment_Shotgun_C_Fire_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.OnFired
	 * 		Flags  -> ()
	 */
	void ABP_Skill_WeaponAttachment_Shotgun_C::OnFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.OnFired");
		
		ABP_Skill_WeaponAttachment_Shotgun_C_OnFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Skill_WeaponAttachment_Shotgun_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.ReceiveTick");
		
		ABP_Skill_WeaponAttachment_Shotgun_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.ExecuteUbergraph_BP_Skill_WeaponAttachment_Shotgun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Skill_WeaponAttachment_Shotgun_C::ExecuteUbergraph_BP_Skill_WeaponAttachment_Shotgun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C.ExecuteUbergraph_BP_Skill_WeaponAttachment_Shotgun");
		
		ABP_Skill_WeaponAttachment_Shotgun_C_ExecuteUbergraph_BP_Skill_WeaponAttachment_Shotgun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Skill_WeaponAttachment_Shotgun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Skill_WeaponAttachment_Shotgun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skill_WeaponAttachment_Shotgun.BP_Skill_WeaponAttachment_Shotgun_C");
		return ptr;
	}

}


