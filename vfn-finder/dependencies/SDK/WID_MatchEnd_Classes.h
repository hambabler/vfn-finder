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
	 * WidgetBlueprintGeneratedClass WID_MatchEnd.WID_MatchEnd_C
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UWID_MatchEnd_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Arrive;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        Classement;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Empl_Drop;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock;                                               // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_ChangeMap;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Quit;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Replay;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 GameState;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Appear();
		class FText GetTimerText();
		void OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6();
		void OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6();
		void Construct();
		void BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature();
		void OnItemDropped(const struct FUpGunInventoryItem& Item);
		void ExecuteUbergraph_WID_MatchEnd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
