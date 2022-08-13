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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.DidNotSpawn_299CDCB0438D1A3AEFB833A322EF8A75
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ControlledExplosion_C::DidNotSpawn_299CDCB0438D1A3AEFB833A322EF8A75(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.DidNotSpawn_299CDCB0438D1A3AEFB833A322EF8A75");
		
		UGA_Skill_ControlledExplosion_C_DidNotSpawn_299CDCB0438D1A3AEFB833A322EF8A75_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.Success_299CDCB0438D1A3AEFB833A322EF8A75
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ControlledExplosion_C::Success_299CDCB0438D1A3AEFB833A322EF8A75(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.Success_299CDCB0438D1A3AEFB833A322EF8A75");
		
		UGA_Skill_ControlledExplosion_C_Success_299CDCB0438D1A3AEFB833A322EF8A75_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnEvent_3D72C4C340100572999DA7BD3873A44A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ControlledExplosion_C::OnEvent_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnEvent_3D72C4C340100572999DA7BD3873A44A");
		
		UGA_Skill_ControlledExplosion_C_OnEvent_3D72C4C340100572999DA7BD3873A44A_Params params {};
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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnInterrupted_3D72C4C340100572999DA7BD3873A44A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ControlledExplosion_C::OnInterrupted_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnInterrupted_3D72C4C340100572999DA7BD3873A44A");
		
		UGA_Skill_ControlledExplosion_C_OnInterrupted_3D72C4C340100572999DA7BD3873A44A_Params params {};
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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnBlendOut_3D72C4C340100572999DA7BD3873A44A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ControlledExplosion_C::OnBlendOut_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnBlendOut_3D72C4C340100572999DA7BD3873A44A");
		
		UGA_Skill_ControlledExplosion_C_OnBlendOut_3D72C4C340100572999DA7BD3873A44A_Params params {};
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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnCancelled_3D72C4C340100572999DA7BD3873A44A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ControlledExplosion_C::OnCancelled_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnCancelled_3D72C4C340100572999DA7BD3873A44A");
		
		UGA_Skill_ControlledExplosion_C_OnCancelled_3D72C4C340100572999DA7BD3873A44A_Params params {};
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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnCompleted_3D72C4C340100572999DA7BD3873A44A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ControlledExplosion_C::OnCompleted_3D72C4C340100572999DA7BD3873A44A(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.OnCompleted_3D72C4C340100572999DA7BD3873A44A");
		
		UGA_Skill_ControlledExplosion_C_OnCompleted_3D72C4C340100572999DA7BD3873A44A_Params params {};
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
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ControlledExplosion_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.K2_ActivateAbility");
		
		UGA_Skill_ControlledExplosion_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.PlayMontage
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ControlledExplosion_C::PlayMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.PlayMontage");
		
		UGA_Skill_ControlledExplosion_C_PlayMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.ExecuteUbergraph_GA_Skill_ControlledExplosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ControlledExplosion_C::ExecuteUbergraph_GA_Skill_ControlledExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C.ExecuteUbergraph_GA_Skill_ControlledExplosion");
		
		UGA_Skill_ControlledExplosion_C_ExecuteUbergraph_GA_Skill_ControlledExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_ControlledExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_ControlledExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_ControlledExplosion.GA_Skill_ControlledExplosion_C");
		return ptr;
	}

}


