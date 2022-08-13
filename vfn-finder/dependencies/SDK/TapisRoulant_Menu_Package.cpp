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
	 * 		Name   -> Function TapisRoulant_Menu.TapisRoulant_Menu_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ATapisRoulant_Menu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapisRoulant_Menu.TapisRoulant_Menu_C.UserConstructionScript");
		
		ATapisRoulant_Menu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapisRoulant_Menu.TapisRoulant_Menu_C.Offset__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ATapisRoulant_Menu_C::Offset__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapisRoulant_Menu.TapisRoulant_Menu_C.Offset__FinishedFunc");
		
		ATapisRoulant_Menu_C_Offset__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapisRoulant_Menu.TapisRoulant_Menu_C.Offset__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ATapisRoulant_Menu_C::Offset__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapisRoulant_Menu.TapisRoulant_Menu_C.Offset__UpdateFunc");
		
		ATapisRoulant_Menu_C_Offset__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapisRoulant_Menu.TapisRoulant_Menu_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATapisRoulant_Menu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapisRoulant_Menu.TapisRoulant_Menu_C.ReceiveBeginPlay");
		
		ATapisRoulant_Menu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TapisRoulant_Menu.TapisRoulant_Menu_C.ExecuteUbergraph_TapisRoulant_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapisRoulant_Menu_C::ExecuteUbergraph_TapisRoulant_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TapisRoulant_Menu.TapisRoulant_Menu_C.ExecuteUbergraph_TapisRoulant_Menu");
		
		ATapisRoulant_Menu_C_ExecuteUbergraph_TapisRoulant_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATapisRoulant_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATapisRoulant_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TapisRoulant_Menu.TapisRoulant_Menu_C");
		return ptr;
	}

}


