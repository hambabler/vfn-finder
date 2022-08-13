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
	 * WidgetBlueprintGeneratedClass W_Lobby_MatchSettings_SkillToBanPopUp.W_Lobby_MatchSettings_SkillToBanPopUp_C
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class UW_Lobby_MatchSettings_SkillToBanPopUp_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        Skill_List_01;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Skill_List_02;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Skill_List_03;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUpGunSkill*>                                 SkillList;                                               // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUpGunSkill*>                                 SkillListOrdered;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AUpGunGameModeSettings*                              GameModeSettings;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunLobbyGameState*                                GameState;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetText_1();
		void SelectFromCategrorie(EUpGunSkillCategory Select);
		void Tri();
		void Construct();
		void BndEvt__W_Lobby_MatchSettings_SkillToBanPopUp_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void EchapMenu();
		void ExecuteUbergraph_W_Lobby_MatchSettings_SkillToBanPopUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
