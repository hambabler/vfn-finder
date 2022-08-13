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
	 * 		Name   -> Function Statistiques_entry.Statistiques_entry_C.DisplayUsedSkills
	 * 		Flags  -> ()
	 */
	void UStatistiques_entry_C::DisplayUsedSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Statistiques_entry.Statistiques_entry_C.DisplayUsedSkills");
		
		UStatistiques_entry_C_DisplayUsedSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Statistiques_entry.Statistiques_entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UStatistiques_entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Statistiques_entry.Statistiques_entry_C.Construct");
		
		UStatistiques_entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Statistiques_entry.Statistiques_entry_C.ExecuteUbergraph_Statistiques_entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatistiques_entry_C::ExecuteUbergraph_Statistiques_entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Statistiques_entry.Statistiques_entry_C.ExecuteUbergraph_Statistiques_entry");
		
		UStatistiques_entry_C_ExecuteUbergraph_Statistiques_entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatistiques_entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatistiques_entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Statistiques_entry.Statistiques_entry_C");
		return ptr;
	}

}


