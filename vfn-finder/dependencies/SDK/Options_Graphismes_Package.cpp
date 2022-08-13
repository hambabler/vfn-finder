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
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.GetResolutions
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::GetResolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.GetResolutions");
		
		UOptions_Graphismes_C_GetResolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.GenTexte
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::GenTexte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.GenTexte");
		
		UOptions_Graphismes_C_GenTexte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.SetDaltonisme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::SetDaltonisme(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.SetDaltonisme");
		
		UOptions_Graphismes_C_SetDaltonisme_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.Génération nom pc rigolo
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::Génération_nom_pc_rigolo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.Génération nom pc rigolo");
		
		UOptions_Graphismes_C_Génération_nom_pc_rigolo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.Set antialiasing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AliasingLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::Set_antialiasing(int32_t* AliasingLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.Set antialiasing");
		
		UOptions_Graphismes_C_Set_antialiasing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AliasingLevel != nullptr)
			*AliasingLevel = params.AliasingLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.Generate combobox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UComboBoxString*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FText>                                Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOptions_Graphismes_C::Generate_combobox(class UComboBoxString** NewParam, TArray<class FText>* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.Generate combobox");
		
		UOptions_Graphismes_C_Generate_combobox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.SetMotionBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _bool_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Graphismes_C::SetMotionBlur(bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.SetMotionBlur");
		
		UOptions_Graphismes_C_SetMotionBlur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.SetVsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _bool_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UOptions_Graphismes_C::SetVsync(bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.SetVsync");
		
		UOptions_Graphismes_C_SetVsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.ExecuteConsoleCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               _bool_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Patate_true                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::ExecuteConsoleCommand(const class FString& Command, bool* _bool_, const class FString& Default, const class FString& Patate_true)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.ExecuteConsoleCommand");
		
		UOptions_Graphismes_C_ExecuteConsoleCommand_Params params {};
		params.Command = Command;
		params.Default = Default;
		params.Patate_true = Patate_true;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.SetSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameUserSettings*                           Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::SetSettings(class UGameUserSettings** Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.SetSettings");
		
		UOptions_Graphismes_C_SetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.Regen comboboxes
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::Regen_comboboxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.Regen comboboxes");
		
		UOptions_Graphismes_C_Regen_comboboxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.Construct");
		
		UOptions_Graphismes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature(float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature_Params params {};
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature(bool IsChecked, int32_t SelectedIndex, float SliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature");
		
		UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.SelectedIndex = SelectedIndex;
		params.SliderValue = SliderValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_Graphismes.Options_Graphismes_C.ExecuteUbergraph_Options_Graphismes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_Graphismes_C::ExecuteUbergraph_Options_Graphismes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_Graphismes.Options_Graphismes_C.ExecuteUbergraph_Options_Graphismes");
		
		UOptions_Graphismes_C_ExecuteUbergraph_Options_Graphismes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_Graphismes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_Graphismes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Graphismes.Options_Graphismes_C");
		return ptr;
	}

}


