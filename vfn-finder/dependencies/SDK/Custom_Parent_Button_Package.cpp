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
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.VisualsOnButtonClicked
	 * 		Flags  -> ()
	 */
	void UCustom_Parent_Button_C::VisualsOnButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.VisualsOnButtonClicked");
		
		UCustom_Parent_Button_C_VisualsOnButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.IsCosmeticEquiped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquiped                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustom_Parent_Button_C::IsCosmeticEquiped(bool* IsEquiped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.IsCosmeticEquiped");
		
		UCustom_Parent_Button_C_IsCosmeticEquiped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquiped != nullptr)
			*IsEquiped = params.IsEquiped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.PlayAnimOnPrevis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunCosmeticType                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Parent_Button_C::PlayAnimOnPrevis(EUpGunCosmeticType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.PlayAnimOnPrevis");
		
		UCustom_Parent_Button_C_PlayAnimOnPrevis_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UCustom_Parent_Button_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusReceived");
		
		UCustom_Parent_Button_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustom_Parent_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.Construct");
		
		UCustom_Parent_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.AppearBlend
	 * 		Flags  -> ()
	 */
	void UCustom_Parent_Button_C::AppearBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.AppearBlend");
		
		UCustom_Parent_Button_C_AppearBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustom_Parent_Button_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseEnter");
		
		UCustom_Parent_Button_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustom_Parent_Button_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.OnMouseLeave");
		
		UCustom_Parent_Button_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCustom_Parent_Button_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.OnFocusLost");
		
		UCustom_Parent_Button_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Parent_Button.Custom_Parent_Button_C.ExecuteUbergraph_Custom_Parent_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Parent_Button_C::ExecuteUbergraph_Custom_Parent_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Parent_Button.Custom_Parent_Button_C.ExecuteUbergraph_Custom_Parent_Button");
		
		UCustom_Parent_Button_C_ExecuteUbergraph_Custom_Parent_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Parent_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Parent_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Parent_Button.Custom_Parent_Button_C");
		return ptr;
	}

}


