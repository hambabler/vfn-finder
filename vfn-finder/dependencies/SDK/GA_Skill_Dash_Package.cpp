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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.DashHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Dash_C::DashHit(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.DashHit");
		
		UGA_Skill_Dash_C_DashHit_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.Get Forward Without Up
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Dash_C::Get_Forward_Without_Up(struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.Get Forward Without Up");
		
		UGA_Skill_Dash_C_Get_Forward_Without_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnFinish_9FBFEA114A45F5714848E38E74ECDD8A
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Dash_C::OnFinish_9FBFEA114A45F5714848E38E74ECDD8A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnFinish_9FBFEA114A45F5714848E38E74ECDD8A");
		
		UGA_Skill_Dash_C_OnFinish_9FBFEA114A45F5714848E38E74ECDD8A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Dash_C::OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD");
		
		UGA_Skill_Dash_C_OnEvent_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params params {};
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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Dash_C::OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD");
		
		UGA_Skill_Dash_C_OnInterrupted_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params params {};
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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Dash_C::OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD");
		
		UGA_Skill_Dash_C_OnBlendOut_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params params {};
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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Dash_C::OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD");
		
		UGA_Skill_Dash_C_OnCancelled_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params params {};
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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_Dash_C::OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD");
		
		UGA_Skill_Dash_C_OnCompleted_C0F86A3D4BFA8193C93301BBD2D0DEDD_Params params {};
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
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Dash_C::DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5");
		
		UGA_Skill_Dash_C_DidNotSpawn_630AF27E422CBBA9540351A9F3D4D7C5_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.Success_630AF27E422CBBA9540351A9F3D4D7C5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Dash_C::Success_630AF27E422CBBA9540351A9F3D4D7C5(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.Success_630AF27E422CBBA9540351A9F3D4D7C5");
		
		UGA_Skill_Dash_C_Success_630AF27E422CBBA9540351A9F3D4D7C5_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Dash_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.K2_ActivateAbility");
		
		UGA_Skill_Dash_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.SpawnFire
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Dash_C::SpawnFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.SpawnFire");
		
		UGA_Skill_Dash_C_SpawnFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.PlayMontage
	 * 		Flags  -> ()
	 */
	void UGA_Skill_Dash_C::PlayMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.PlayMontage");
		
		UGA_Skill_Dash_C_PlayMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_Dash.GA_Skill_Dash_C.ExecuteUbergraph_GA_Skill_Dash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_Dash_C::ExecuteUbergraph_GA_Skill_Dash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_Dash.GA_Skill_Dash_C.ExecuteUbergraph_GA_Skill_Dash");
		
		UGA_Skill_Dash_C_ExecuteUbergraph_GA_Skill_Dash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_Dash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_Dash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_Dash.GA_Skill_Dash_C");
		return ptr;
	}

}


