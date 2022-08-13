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
	 * 		Name   -> Function Sub_NewItem.Sub_NewItem_C.GetRarity
	 * 		Flags  -> ()
	 */
	struct FUpGunOSSItemMetadata USub_NewItem_C::GetRarity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_NewItem.Sub_NewItem_C.GetRarity");
		
		USub_NewItem_C_GetRarity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_NewItem.Sub_NewItem_C.Construct
	 * 		Flags  -> ()
	 */
	void USub_NewItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_NewItem.Sub_NewItem_C.Construct");
		
		USub_NewItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Sub_NewItem.Sub_NewItem_C.ExecuteUbergraph_Sub_NewItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USub_NewItem_C::ExecuteUbergraph_Sub_NewItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sub_NewItem.Sub_NewItem_C.ExecuteUbergraph_Sub_NewItem");
		
		USub_NewItem_C_ExecuteUbergraph_Sub_NewItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USub_NewItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USub_NewItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sub_NewItem.Sub_NewItem_C");
		return ptr;
	}

}


