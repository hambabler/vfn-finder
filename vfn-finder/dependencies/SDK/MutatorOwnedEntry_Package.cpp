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
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.GenerateVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUpGunMutator*                               Mutator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMutatorOwnedEntry_C::GenerateVisual(class UUpGunMutator* Mutator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.GenerateVisual");
		
		UMutatorOwnedEntry_C_GenerateVisual_Params params {};
		params.Mutator = Mutator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMutatorOwnedEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseEnter");
		
		UMutatorOwnedEntry_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMutatorOwnedEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseLeave");
		
		UMutatorOwnedEntry_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UMutatorOwnedEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.Construct");
		
		UMutatorOwnedEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMutatorOwnedEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.PreConstruct");
		
		UMutatorOwnedEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MutatorOwnedEntry.MutatorOwnedEntry_C.ExecuteUbergraph_MutatorOwnedEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMutatorOwnedEntry_C::ExecuteUbergraph_MutatorOwnedEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MutatorOwnedEntry.MutatorOwnedEntry_C.ExecuteUbergraph_MutatorOwnedEntry");
		
		UMutatorOwnedEntry_C_ExecuteUbergraph_MutatorOwnedEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMutatorOwnedEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMutatorOwnedEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MutatorOwnedEntry.MutatorOwnedEntry_C");
		return ptr;
	}

}


