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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnSync_F4E6381A4EA609CCFB726283F2A1273C
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ArmedReload_C::OnSync_F4E6381A4EA609CCFB726283F2A1273C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnSync_F4E6381A4EA609CCFB726283F2A1273C");
		
		UGA_Skill_ArmedReload_C_OnSync_F4E6381A4EA609CCFB726283F2A1273C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnEvent_AFE39BCB431D6213AF0B82B46D7CBA1F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ArmedReload_C::OnEvent_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnEvent_AFE39BCB431D6213AF0B82B46D7CBA1F");
		
		UGA_Skill_ArmedReload_C_OnEvent_AFE39BCB431D6213AF0B82B46D7CBA1F_Params params {};
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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnInterrupted_AFE39BCB431D6213AF0B82B46D7CBA1F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ArmedReload_C::OnInterrupted_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnInterrupted_AFE39BCB431D6213AF0B82B46D7CBA1F");
		
		UGA_Skill_ArmedReload_C_OnInterrupted_AFE39BCB431D6213AF0B82B46D7CBA1F_Params params {};
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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnBlendOut_AFE39BCB431D6213AF0B82B46D7CBA1F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ArmedReload_C::OnBlendOut_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnBlendOut_AFE39BCB431D6213AF0B82B46D7CBA1F");
		
		UGA_Skill_ArmedReload_C_OnBlendOut_AFE39BCB431D6213AF0B82B46D7CBA1F_Params params {};
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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnCancelled_AFE39BCB431D6213AF0B82B46D7CBA1F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ArmedReload_C::OnCancelled_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnCancelled_AFE39BCB431D6213AF0B82B46D7CBA1F");
		
		UGA_Skill_ArmedReload_C_OnCancelled_AFE39BCB431D6213AF0B82B46D7CBA1F_Params params {};
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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnCompleted_AFE39BCB431D6213AF0B82B46D7CBA1F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Skill_ArmedReload_C::OnCompleted_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.OnCompleted_AFE39BCB431D6213AF0B82B46D7CBA1F");
		
		UGA_Skill_ArmedReload_C_OnCompleted_AFE39BCB431D6213AF0B82B46D7CBA1F_Params params {};
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
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.DidNotSpawn_30F4727043D8185A531611A45D5F2DF1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ArmedReload_C::DidNotSpawn_30F4727043D8185A531611A45D5F2DF1(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.DidNotSpawn_30F4727043D8185A531611A45D5F2DF1");
		
		UGA_Skill_ArmedReload_C_DidNotSpawn_30F4727043D8185A531611A45D5F2DF1_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.Success_30F4727043D8185A531611A45D5F2DF1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ArmedReload_C::Success_30F4727043D8185A531611A45D5F2DF1(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.Success_30F4727043D8185A531611A45D5F2DF1");
		
		UGA_Skill_ArmedReload_C_Success_30F4727043D8185A531611A45D5F2DF1_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Skill_ArmedReload_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.K2_ActivateAbility");
		
		UGA_Skill_ArmedReload_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.ExecuteUbergraph_GA_Skill_ArmedReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Skill_ArmedReload_C::ExecuteUbergraph_GA_Skill_ArmedReload(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Skill_ArmedReload.GA_Skill_ArmedReload_C.ExecuteUbergraph_GA_Skill_ArmedReload");
		
		UGA_Skill_ArmedReload_C_ExecuteUbergraph_GA_Skill_ArmedReload_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Skill_ArmedReload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Skill_ArmedReload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Skill_ArmedReload.GA_Skill_ArmedReload_C");
		return ptr;
	}

}


