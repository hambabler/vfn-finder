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
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.PopulateShop
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::PopulateShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.PopulateShop");
		
		UCustom_Menu_C_PopulateShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.CheckIfItemIsObtainable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpGunOSSItemMetadata                       OSS                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::CheckIfItemIsObtainable(const struct FUpGunOSSItemMetadata& OSS, int32_t* Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.CheckIfItemIsObtainable");
		
		UCustom_Menu_C_CheckIfItemIsObtainable_Params params {};
		params.OSS = OSS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Number != nullptr)
			*Number = params.Number;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.GetMaxCosmeticNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunCosmeticType                                 PartDisplayed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Item_max                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::GetMaxCosmeticNumber(EUpGunCosmeticType PartDisplayed, int32_t* Item_max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.GetMaxCosmeticNumber");
		
		UCustom_Menu_C_GetMaxCosmeticNumber_Params params {};
		params.PartDisplayed = PartDisplayed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_max != nullptr)
			*Item_max = params.Item_max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.Update Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUpGunCosmeticType                                 Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::Update_Name(int32_t Number, EUpGunCosmeticType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.Update Name");
		
		UCustom_Menu_C_Update_Name_Params params {};
		params.Number = Number;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.RemoveDoubles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunInventoryItem>                 Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FUpGunInventoryItem>                 NoDoubles                                                  (Parm, OutParm)
	 */
	void UCustom_Menu_C::RemoveDoubles(TArray<struct FUpGunInventoryItem>* Input, TArray<struct FUpGunInventoryItem>* NoDoubles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.RemoveDoubles");
		
		UCustom_Menu_C_RemoveDoubles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input != nullptr)
			*Input = params.Input;
		if (NoDoubles != nullptr)
			*NoDoubles = params.NoDoubles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.CollectDefaultCosmeticsItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunInventoryItem>                 Out                                                        (Parm, OutParm)
	 */
	void UCustom_Menu_C::CollectDefaultCosmeticsItems(TArray<struct FUpGunInventoryItem>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.CollectDefaultCosmeticsItems");
		
		UCustom_Menu_C_CollectDefaultCosmeticsItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.PopulateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUpGunCosmeticType                                 Part                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::PopulateList(EUpGunCosmeticType Part)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.PopulateList");
		
		UCustom_Menu_C_PopulateList_Params params {};
		params.Part = Part;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.UseSteamID
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::UseSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.UseSteamID");
		
		UCustom_Menu_C_UseSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.SwitchToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DesiredCameraView                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Button_Tab_C*                             Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUpGunCosmeticType                                 Part                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::SwitchToIndex(int32_t DesiredCameraView, class UW_Button_Tab_C** Tab, EUpGunCosmeticType Part)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.SwitchToIndex");
		
		UCustom_Menu_C_SwitchToIndex_Params params {};
		params.DesiredCameraView = DesiredCameraView;
		params.Part = Part;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tab != nullptr)
			*Tab = params.Tab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.WidgetArrive
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::WidgetArrive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.WidgetArrive");
		
		UCustom_Menu_C_WidgetArrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.Construct");
		
		UCustom_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCustom_Menu_C::BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UCustom_Menu_C_BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Custom_Menu.Custom_Menu_C.ExecuteUbergraph_Custom_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustom_Menu_C::ExecuteUbergraph_Custom_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Custom_Menu.Custom_Menu_C.ExecuteUbergraph_Custom_Menu");
		
		UCustom_Menu_C_ExecuteUbergraph_Custom_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustom_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustom_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Custom_Menu.Custom_Menu_C");
		return ptr;
	}

}


