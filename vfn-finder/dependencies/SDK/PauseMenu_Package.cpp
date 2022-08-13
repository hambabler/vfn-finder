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
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPauseMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnKeyDown");
		
		UPauseMenu_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.NewOnScreen
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::NewOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.NewOnScreen");
		
		UPauseMenu_C_NewOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.WidgetAnimationEvt_Appear_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::WidgetAnimationEvt_Appear_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.WidgetAnimationEvt_Appear_K2Node_WidgetAnimationEvent_1");
		
		UPauseMenu_C_WidgetAnimationEvt_Appear_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Construct");
		
		UPauseMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_MainMenu_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::BndEvt__PauseMenu_W_button_MainMenu_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_MainMenu_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature");
		
		UPauseMenu_C_BndEvt__PauseMenu_W_button_MainMenu_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_Options_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::BndEvt__PauseMenu_W_button_Options_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_Options_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UPauseMenu_C_BndEvt__PauseMenu_W_button_Options_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_Retour_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::BndEvt__PauseMenu_W_button_Retour_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_Retour_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature");
		
		UPauseMenu_C_BndEvt__PauseMenu_W_button_Retour_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.Quit
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::Quit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Quit");
		
		UPauseMenu_C_Quit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_ChangeTeam_K2Node_ComponentBoundEvent_3_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::BndEvt__PauseMenu_W_button_ChangeTeam_K2Node_ComponentBoundEvent_3_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_W_button_ChangeTeam_K2Node_ComponentBoundEvent_3_Clicked_Btn__DelegateSignature");
		
		UPauseMenu_C_BndEvt__PauseMenu_W_button_ChangeTeam_K2Node_ComponentBoundEvent_3_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseMenu_C::ExecuteUbergraph_PauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu");
		
		UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnRequestClosing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseMenu_C::OnRequestClosing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnRequestClosing__DelegateSignature");
		
		UPauseMenu_C_OnRequestClosing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPauseMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C");
		return ptr;
	}

}


