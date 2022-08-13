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
	 * 		Name   -> Function SkillOwnedList.SkillOwnedList_C.CallWithDelay
	 * 		Flags  -> ()
	 */
	void USkillOwnedList_C::CallWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedList.SkillOwnedList_C.CallWithDelay");
		
		USkillOwnedList_C_CallWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillOwnedList.SkillOwnedList_C.FillList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunSkillInstance>                 SkillList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USkillOwnedList_C::FillList(TArray<struct FUpGunSkillInstance>* SkillList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillOwnedList.SkillOwnedList_C.FillList");
		
		USkillOwnedList_C_FillList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkillList != nullptr)
			*SkillList = params.SkillList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillOwnedList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillOwnedList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillOwnedList.SkillOwnedList_C");
		return ptr;
	}

}


