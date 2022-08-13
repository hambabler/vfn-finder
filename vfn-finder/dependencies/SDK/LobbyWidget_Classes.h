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
	 * WidgetBlueprintGeneratedClass LobbyWidget.LobbyWidget_C
	 * Size -> 0x00E8 (FullSize[0x0348] - InheritedSize[0x0260])
	 */
	class ULobbyWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ClickTab;                                                // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MapChanged;                                              // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Btn_Tab;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          GameModeText;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_map;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMutatorOwnedList_C*                                 MutatorOwnedList;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerCountText;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PlayerWindow;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ServerNameText;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         StartButton;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Rounds;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_code_text;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ToolTip;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_copy;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_hide;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_Quit;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_InputKey_C*                                       W_InputKey;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWID_Lobby_Friends_C*                                WID_Lobby_Friends;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWID_Lobby_MatchSettings_C*                          WID_Lobby_MatchSettings;                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsHudUsed;                                               // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8R72[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AUpGunLobbyGameState*                                GameState;                                               // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunLobbyPlayerState*                              PlayerState;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunLobbyPlayerController*                         PlayerController;                                        // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UUserWidget*                                         GameModeSettings;                                        // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Lobby_HUD_C*                                     Lobby_HUD;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void LobbyWidget_AutoGenFunc(bool bIsReady);
		void CountReadys(int32_t* PlayersInGame, int32_t* PlayersReadyOut);
		void OnSelectedGameModeSettingsUpdated();
		void OnMutatorsUpdated();
		void OnArenaUpdated(class UUpGunArena* Arena);
		class FText GetRoundCountText();
		bool IsStartButtonEnabled();
		void InitializePlayButton();
		void UpdatePlayButton();
		void UpdatePlayerList();
		void PlayAppearAnimation(bool ShowUp);
		void OnFailure_6F56F9354478BC56791004B686F62626();
		void OnSuccess_6F56F9354478BC56791004B686F62626();
		void Construct();
		void BndEvt__LobbyWidget_W_button_hide_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature();
		void OnPlayerAddedOrRemoved(class AUpGunBasePlayerState* PlayerState);
		void BndEvt__LobbyWidget_StartButton_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void BndEvt__LobbyWidget_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__LobbyWidget_W_button_copy_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature();
		void BndEvt__LobbyWidget_Btn_Tab_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_LobbyWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
