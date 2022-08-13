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
	 * 		Name   -> Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_ShouldDispawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ReceiveBeginPlay");
		
		UBPC_ShouldDispawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound_Delegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewRound                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ShouldDispawn_C::OnNewRound_Delegate(unsigned char OldRound, unsigned char NewRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound_Delegate");
		
		UBPC_ShouldDispawn_C_OnNewRound_Delegate_Params params {};
		params.OldRound = OldRound;
		params.NewRound = NewRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ExecuteUbergraph_BPC_ShouldDispawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ShouldDispawn_C::ExecuteUbergraph_BPC_ShouldDispawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.ExecuteUbergraph_BPC_ShouldDispawn");
		
		UBPC_ShouldDispawn_C_ExecuteUbergraph_BPC_ShouldDispawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRoundWithChance__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ShouldDispawn_C::OnNewRoundWithChance__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRoundWithChance__DelegateSignature");
		
		UBPC_ShouldDispawn_C_OnNewRoundWithChance__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ShouldDispawn_C::OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ShouldDispawn.BPC_ShouldDispawn_C.OnNewRound__DelegateSignature");
		
		UBPC_ShouldDispawn_C_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ShouldDispawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ShouldDispawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ShouldDispawn.BPC_ShouldDispawn_C");
		return ptr;
	}

}


