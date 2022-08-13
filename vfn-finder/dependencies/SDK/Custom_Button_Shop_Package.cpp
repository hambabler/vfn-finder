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
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.SetCommunityVisuals
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::SetCommunityVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.SetCommunityVisuals");
		
		UCustom_Button_Shop_C_SetCommunityVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.TryCosmetic
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::TryCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.TryCosmetic");
		
		UCustom_Button_Shop_C_TryCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.Construct");
		
		UCustom_Button_Shop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.BndEvt__Custom_Button_Shop_Button_Try_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::BndEvt__Custom_Button_Shop_Button_Try_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.BndEvt__Custom_Button_Shop_Button_Try_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCustom_Button_Shop_C_BndEvt__Custom_Button_Shop_Button_Try_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.BndEvt__Custom_Button_Shop_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::BndEvt__Custom_Button_Shop_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.BndEvt__Custom_Button_Shop_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCustom_Button_Shop_C_BndEvt__Custom_Button_Shop_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.AppearDelay
	 * 		Flags  -> ()
	 */
	void UCustom_Button_Shop_C::AppearDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.AppearDelay");
		
		UCustom_Button_Shop_C_AppearDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Button_Shop.Custom_Button_Shop_C.ExecuteUbergraph_Custom_Button_Shop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Button_Shop_C::ExecuteUbergraph_Custom_Button_Shop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Button_Shop.Custom_Button_Shop_C.ExecuteUbergraph_Custom_Button_Shop");
		
		UCustom_Button_Shop_C_ExecuteUbergraph_Custom_Button_Shop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Button_Shop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Button_Shop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Button_Shop.Custom_Button_Shop_C");
		return ptr;
	}

}


