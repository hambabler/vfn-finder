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
	 * 		Name   -> Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.StatBulletFired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDelta                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Rifle_C::StatBulletFired(int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.StatBulletFired");
		
		ABP_Weapon_Rifle_C_StatBulletFired_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.FindDesiredVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeviationStrengh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfBullets                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ActualBullet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABP_Weapon_Rifle_C::FindDesiredVector(class UCameraComponent* Camera, float DeviationStrengh, int32_t NumberOfBullets, int32_t ActualBullet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.FindDesiredVector");
		
		ABP_Weapon_Rifle_C_FindDesiredVector_Params params {};
		params.Camera = Camera;
		params.DeviationStrengh = DeviationStrengh;
		params.NumberOfBullets = NumberOfBullets;
		params.ActualBullet = ActualBullet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.OnFired
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_Rifle_C::OnFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.OnFired");
		
		ABP_Weapon_Rifle_C_OnFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SyncChance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Rifle_C::Fire(float SyncChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.Fire");
		
		ABP_Weapon_Rifle_C_Fire_Params params {};
		params.SyncChance = SyncChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.ExecuteUbergraph_BP_Weapon_Rifle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Rifle_C::ExecuteUbergraph_BP_Weapon_Rifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Rifle.BP_Weapon_Rifle_C.ExecuteUbergraph_BP_Weapon_Rifle");
		
		ABP_Weapon_Rifle_C_ExecuteUbergraph_BP_Weapon_Rifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_Rifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_Rifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_Rifle.BP_Weapon_Rifle_C");
		return ptr;
	}

}


