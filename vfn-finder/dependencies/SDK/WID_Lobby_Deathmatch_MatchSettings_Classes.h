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
	 * WidgetBlueprintGeneratedClass WID_Lobby_Deathmatch_MatchSettings.WID_Lobby_Deathmatch_MatchSettings_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UWID_Lobby_Deathmatch_MatchSettings_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_lifes;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_respawn;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_rounds;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_selection;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton_Compteur_C*                                  Button_Compteur_temps_round;                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Lobby_MatchSettings_Mutators_C*                   W_Lobby_MatchSettings_Mutators;                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWID_Lobby_MatchSettings_AdvancedParameters_C*       WID_Lobby_MatchSettings_AdvancedParameters;              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunLobbyGameState*                                GameState;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagContainer                               SkillToBan;                                              // 0x02B0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        SkillToAdd;                                              // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UObject*                                             GI;                                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    SkillToBan_Max;                                          // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillToAdd_Max;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Lobby_MatchSettings_SkillToBanPopUp_C*            POPUP_BannedSkills;                                      // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Lobby_Match_Settings_DefaultSkill_C*              POPUP_DefaultSKill;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunDeathmatchSettings*                            GameSettings;                                            // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeCounters();
		void Construct();
		void BndEvt__WID_Lobby_Deathmatch_MatchSettings_Button_Compteur_rounds_K2Node_ComponentBoundEvent_2_ClickedOnButtons__DelegateSignature(int32_t Value);
		void BndEvt__WID_Lobby_Deathmatch_MatchSettings_Button_Compteur_temps_round_K2Node_ComponentBoundEvent_3_ClickedOnButtons__DelegateSignature(int32_t Value);
		void BndEvt__WID_Lobby_Deathmatch_MatchSettings_Button_Compteur_lifes_K2Node_ComponentBoundEvent_4_ClickedOnButtons__DelegateSignature(int32_t Value);
		void BndEvt__WID_Lobby_Deathmatch_MatchSettings_Button_Compteur_selection_K2Node_ComponentBoundEvent_5_ClickedOnButtons__DelegateSignature(int32_t Value);
		void BndEvt__WID_Lobby_Deathmatch_MatchSettings_Button_Compteur_respawn_K2Node_ComponentBoundEvent_6_ClickedOnButtons__DelegateSignature(int32_t Value);
		void ExecuteUbergraph_WID_Lobby_Deathmatch_MatchSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
