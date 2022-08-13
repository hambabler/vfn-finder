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
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.Get Current Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUpGunWeapon*                                Weapon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Shoot_C::Get_Current_Weapon(class AUpGunWeapon** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.Get Current Weapon");
		
		UGA_Shoot_C_Get_Current_Weapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.IsReloading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Shoot_C::IsReloading(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.IsReloading");
		
		UGA_Shoot_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.Reload
	 * 		Flags  -> ()
	 */
	void UGA_Shoot_C::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.Reload");
		
		UGA_Shoot_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53
	 * 		Flags  -> ()
	 */
	void UGA_Shoot_C::OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53");
		
		UGA_Shoot_C_OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnRelease_08748EC849AA0C4DCE7A438AC21E9E51
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Shoot_C::OnRelease_08748EC849AA0C4DCE7A438AC21E9E51(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnRelease_08748EC849AA0C4DCE7A438AC21E9E51");
		
		UGA_Shoot_C_OnRelease_08748EC849AA0C4DCE7A438AC21E9E51_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnEvent_D00B370244AA4923B98259ADD756359C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Shoot_C::OnEvent_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnEvent_D00B370244AA4923B98259ADD756359C");
		
		UGA_Shoot_C_OnEvent_D00B370244AA4923B98259ADD756359C_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnInterrupted_D00B370244AA4923B98259ADD756359C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Shoot_C::OnInterrupted_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnInterrupted_D00B370244AA4923B98259ADD756359C");
		
		UGA_Shoot_C_OnInterrupted_D00B370244AA4923B98259ADD756359C_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnBlendOut_D00B370244AA4923B98259ADD756359C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Shoot_C::OnBlendOut_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnBlendOut_D00B370244AA4923B98259ADD756359C");
		
		UGA_Shoot_C_OnBlendOut_D00B370244AA4923B98259ADD756359C_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnCancelled_D00B370244AA4923B98259ADD756359C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Shoot_C::OnCancelled_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnCancelled_D00B370244AA4923B98259ADD756359C");
		
		UGA_Shoot_C_OnCancelled_D00B370244AA4923B98259ADD756359C_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.OnCompleted_D00B370244AA4923B98259ADD756359C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Shoot_C::OnCompleted_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.OnCompleted_D00B370244AA4923B98259ADD756359C");
		
		UGA_Shoot_C_OnCompleted_D00B370244AA4923B98259ADD756359C_Params params {};
		params.Montage = Montage;
		params.Tag = Tag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Shoot_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.K2_ActivateAbility");
		
		UGA_Shoot_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Shoot.GA_Shoot_C.ExecuteUbergraph_GA_Shoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Shoot_C::ExecuteUbergraph_GA_Shoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Shoot.GA_Shoot_C.ExecuteUbergraph_GA_Shoot");
		
		UGA_Shoot_C_ExecuteUbergraph_GA_Shoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Shoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Shoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Shoot.GA_Shoot_C");
		return ptr;
	}

}


