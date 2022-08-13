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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.FindPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartLoc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TossVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::FindPath(struct FVector* StartLoc, struct FVector* TossVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.FindPath");
		
		UGA_Grenade_C_FindPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartLoc != nullptr)
			*StartLoc = params.StartLoc;
		if (TossVelocity != nullptr)
			*TossVelocity = params.TossVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47");
		
		UGA_Grenade_C_DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.Success_4263FC1243BA80414B92BAB4CA223B47
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::Success_4263FC1243BA80414B92BAB4CA223B47(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.Success_4263FC1243BA80414B92BAB4CA223B47");
		
		UGA_Grenade_C_Success_4263FC1243BA80414B92BAB4CA223B47_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnEvent_C0A4480C442972797A9AF7B0BAE97B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Grenade_C::OnEvent_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnEvent_C0A4480C442972797A9AF7B0BAE97B2E");
		
		UGA_Grenade_C_OnEvent_C0A4480C442972797A9AF7B0BAE97B2E_Params params {};
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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Grenade_C::OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E");
		
		UGA_Grenade_C_OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E_Params params {};
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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Grenade_C::OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E");
		
		UGA_Grenade_C_OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E_Params params {};
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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Grenade_C::OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E");
		
		UGA_Grenade_C_OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E_Params params {};
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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Grenade_C::OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E");
		
		UGA_Grenade_C_OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E_Params params {};
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
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeWaited                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9(float TimeWaited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9");
		
		UGA_Grenade_C_OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9_Params params {};
		params.TimeWaited = TimeWaited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Grenade_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.K2_ActivateAbility");
		
		UGA_Grenade_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.On destroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::On_destroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.On destroyed");
		
		UGA_Grenade_C_On_destroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Grenade.GA_Grenade_C.ExecuteUbergraph_GA_Grenade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Grenade_C::ExecuteUbergraph_GA_Grenade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Grenade.GA_Grenade_C.ExecuteUbergraph_GA_Grenade");
		
		UGA_Grenade_C_ExecuteUbergraph_GA_Grenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Grenade.GA_Grenade_C");
		return ptr;
	}

}


