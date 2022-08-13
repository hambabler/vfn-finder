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
	 * 		Name   -> Function Main_Menu.Main_Menu_C.SwitchToIndexOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DesiredCameraView                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasSwitched                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMain_Menu_C::SwitchToIndexOnce(int32_t Index, int32_t DesiredCameraView, bool* HasSwitched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.SwitchToIndexOnce");
		
		UMain_Menu_C_SwitchToIndexOnce_Params params {};
		params.Index = Index;
		params.DesiredCameraView = DesiredCameraView;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSwitched != nullptr)
			*HasSwitched = params.HasSwitched;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.Construct");
		
		UMain_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMain_Menu_C::BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");
		
		UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMain_Menu_C::ExecuteUbergraph_Main_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu");
		
		UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMain_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMain_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Main_Menu.Main_Menu_C");
		return ptr;
	}

}


