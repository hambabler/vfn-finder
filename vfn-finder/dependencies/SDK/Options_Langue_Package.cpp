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
	 * 		Name   -> Function Options_Langue.Options_Langue_C.EditWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULangue_button_C*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLangues                                    langue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UOptions_Langue_C::EditWidget(class ULangue_button_C** Widget, struct FLangues* langue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Langue.Options_Langue_C.EditWidget");
		
		UOptions_Langue_C_EditWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
		if (langue != nullptr)
			*langue = params.langue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Langue.Options_Langue_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Langue_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Langue.Options_Langue_C.Construct");
		
		UOptions_Langue_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Langue.Options_Langue_C.ExecuteUbergraph_Options_Langue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Langue_C::ExecuteUbergraph_Options_Langue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Langue.Options_Langue_C.ExecuteUbergraph_Options_Langue");
		
		UOptions_Langue_C_ExecuteUbergraph_Options_Langue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Langue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Langue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Langue.Options_Langue_C");
		return ptr;
	}

}


