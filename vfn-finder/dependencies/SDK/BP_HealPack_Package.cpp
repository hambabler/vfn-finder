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
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.CheckRange
	 * 		Flags  -> ()
	 */
	void ABP_HealPack_C::CheckRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.CheckRange");
		
		ABP_HealPack_C_CheckRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_HealPack_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.Timeline_0__FinishedFunc");
		
		ABP_HealPack_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_HealPack_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.Timeline_0__UpdateFunc");
		
		ABP_HealPack_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HealPack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.ReceiveBeginPlay");
		
		ABP_HealPack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.BndEvt__BP_HealPack_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HealPack_C::BndEvt__BP_HealPack_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.BndEvt__BP_HealPack_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature");
		
		ABP_HealPack_C_BndEvt__BP_HealPack_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HealPack.BP_HealPack_C.ExecuteUbergraph_BP_HealPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HealPack_C::ExecuteUbergraph_BP_HealPack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HealPack.BP_HealPack_C.ExecuteUbergraph_BP_HealPack");
		
		ABP_HealPack_C_ExecuteUbergraph_BP_HealPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HealPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HealPack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HealPack.BP_HealPack_C");
		return ptr;
	}

}


