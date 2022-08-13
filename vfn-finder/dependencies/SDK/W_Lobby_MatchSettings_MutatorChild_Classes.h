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
	 * WidgetBlueprintGeneratedClass W_Lobby_MatchSettings_MutatorChild.W_Lobby_MatchSettings_MutatorChild_C
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UW_Lobby_MatchSettings_MutatorChild_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CantClick;                                               // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Clicked;                                                 // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Button_77;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_fake;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_83;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MutatorName;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsSelected;                                              // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_19SX[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUpGunMutator*                                       Mutator_DA;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsEnabled;                                               // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_26Q4[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunGameModeSettings*                              GameModeBaseSettings;                                    // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UW_Lobby_MatchSettings_Mutator_Tooltip_C*            ToolTip;                                                 // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DLC();
		void ShouldActivate(bool* Activate);
		void Construct();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_76_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__W_Lobby_MatchSettings_MutatorChild_Button_fake_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_W_Lobby_MatchSettings_MutatorChild(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
