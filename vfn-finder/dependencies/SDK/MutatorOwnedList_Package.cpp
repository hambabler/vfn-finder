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
	 * 		Name   -> Function MutatorOwnedList.MutatorOwnedList_C.UpdateList
	 * 		Flags  -> ()
	 */
	void UMutatorOwnedList_C::UpdateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedList.MutatorOwnedList_C.UpdateList");
		
		UMutatorOwnedList_C_UpdateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedList.MutatorOwnedList_C.Generate Mutator List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Mutators                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               HasMutators                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMutatorOwnedList_C::Generate_Mutator_List(const struct FGameplayTagContainer& Mutators, bool* HasMutators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedList.MutatorOwnedList_C.Generate Mutator List");
		
		UMutatorOwnedList_C_Generate_Mutator_List_Params params {};
		params.Mutators = Mutators;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasMutators != nullptr)
			*HasMutators = params.HasMutators;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedList.MutatorOwnedList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMutatorOwnedList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedList.MutatorOwnedList_C.PreConstruct");
		
		UMutatorOwnedList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedList.MutatorOwnedList_C.ExecuteUbergraph_MutatorOwnedList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMutatorOwnedList_C::ExecuteUbergraph_MutatorOwnedList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedList.MutatorOwnedList_C.ExecuteUbergraph_MutatorOwnedList");
		
		UMutatorOwnedList_C_ExecuteUbergraph_MutatorOwnedList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMutatorOwnedList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMutatorOwnedList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MutatorOwnedList.MutatorOwnedList_C");
		return ptr;
	}

}


