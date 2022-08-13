#pragma once

/**
 * Name: UpGun
 * Version: 0.5
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Custom_Menu.Custom_Menu_C.PopulateShop
	 */
	struct UCustom_Menu_C_PopulateShop_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.CheckIfItemIsObtainable
	 */
	struct UCustom_Menu_C_CheckIfItemIsObtainable_Params
	{
	public:
		struct FUpGunOSSItemMetadata                               OSS;                                                     // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Number;                                                  // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.GetMaxCosmeticNumber
	 */
	struct UCustom_Menu_C_GetMaxCosmeticNumber_Params
	{
	public:
		EUpGunCosmeticType                                         PartDisplayed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MP52[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Item_max;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.Update Name
	 */
	struct UCustom_Menu_C_Update_Name_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUpGunCosmeticType                                         Index;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG6Y[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.RemoveDoubles
	 */
	struct UCustom_Menu_C_RemoveDoubles_Params
	{
	public:
		TArray<struct FUpGunInventoryItem>                         Input;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FUpGunInventoryItem>                         NoDoubles;                                               // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.CollectDefaultCosmeticsItems
	 */
	struct UCustom_Menu_C_CollectDefaultCosmeticsItems_Params
	{
	public:
		TArray<struct FUpGunInventoryItem>                         Out;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.PopulateList
	 */
	struct UCustom_Menu_C_PopulateList_Params
	{
	public:
		EUpGunCosmeticType                                         Part;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1PU4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.UseSteamID
	 */
	struct UCustom_Menu_C_UseSteamID_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.SwitchToIndex
	 */
	struct UCustom_Menu_C_SwitchToIndex_Params
	{
	public:
		int32_t                                                    DesiredCameraView;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ILBU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Button_Tab_C*                                     Tab;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUpGunCosmeticType                                         Part;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.WidgetArrive
	 */
	struct UCustom_Menu_C_WidgetArrive_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.Construct
	 */
	struct UCustom_Menu_C_Construct_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UCustom_Menu_C_BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Custom_Menu.Custom_Menu_C.ExecuteUbergraph_Custom_Menu
	 */
	struct UCustom_Menu_C_ExecuteUbergraph_Custom_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
