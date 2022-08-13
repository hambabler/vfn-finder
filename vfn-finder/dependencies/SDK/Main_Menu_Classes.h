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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Main_Menu.Main_Menu_C
	 * Size -> 0x00C4 (FullSize[0x0324] - InheritedSize[0x0260])
	 */
	class UMain_Menu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Disappear;                                               // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Switch;                                                  // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_discord;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Credits;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Customisation;                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_DLC;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Options;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Play;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Quit;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButtonMenuBase_C*                                   ButtonMenuBase_Stats;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCredits_C*                                          Credits;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_206;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULevels_C*                                           Levels;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenu_Stats_C*                                       Menu_Stats;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_C*                                          Options;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Version;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Main_Play_SubWidget_C*                            W_Main_Play_SubWidget;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              WID_Dev_ItemGiver[0x8];                                  // 0x02F0(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class UWidgetSwitcher*                                     WidgetSwitcher_385;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AMainMenuCameraSetup_C*                              CameraSetup;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustom_Menu_C*                                      MenuCustom;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SoundMusic;                                              // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      As_GI;                                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    CameraLocationIndex;                                     // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SwitchToIndexOnce(int32_t Index, int32_t DesiredCameraView, bool* HasSwitched);
		void Construct();
		void BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
		void BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
		void ExecuteUbergraph_Main_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
