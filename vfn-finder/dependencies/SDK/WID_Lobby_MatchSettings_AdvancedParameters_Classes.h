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
	 * WidgetBlueprintGeneratedClass WID_Lobby_MatchSettings_AdvancedParameters.WID_Lobby_MatchSettings_AdvancedParameters_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UWID_Lobby_MatchSettings_AdvancedParameters_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExpandableArea*                                     ExpandableArea_557;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_BannedSKills;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_DefaultSkills;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunGameModeSettings*                              BaseGameSettings;                                        // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Lobby_MatchSettings_SkillToBanPopUp_C*            POPUP_BannedSkills;                                      // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Lobby_Match_Settings_DefaultSkill_C*              POPUP_DefaultSKill;                                      // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Lobby_HUD_C*                                     LobbyHUD;                                                // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnLobbyMenuClosed();
		void UpdateCountsOnButtons();
		void BndEvt__Lobby_MatchSettings_W_button_DefaultSkills_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__Lobby_MatchSettings_W_button_BannedSKills_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_WID_Lobby_MatchSettings_AdvancedParameters(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
