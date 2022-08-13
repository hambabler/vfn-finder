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
	 * WidgetBlueprintGeneratedClass W_Lobby_Match_Settings_DefaultSkill.W_Lobby_Match_Settings_DefaultSkill_C
	 * Size -> 0x00C4 (FullSize[0x0324] - InheritedSize[0x0260])
	 */
	class UW_Lobby_Match_Settings_DefaultSkill_C : public UUserWidget
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
		class AUpGunLobbyGameState*                                GameState;                                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunGameModeSettings*                              GameModeSettings;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USkillToAdd_C*>                               Skills_Widget;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              Skills_Capacity[0x50];                                   // 0x02D0(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    LevelsToAdd;                                             // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CountLevels(int32_t* Levels);
		class FText Get_Text_Entete();
		void SelectFromCategorie(EUpGunSkillCategory B);
		void Tri();
		void Construct();
		void EchapMenu();
		void BndEvt__W_Lobby_Match_Settings_DefaultSkill_W_button_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature();
		void UpdateAllSkills();
		void ExecuteUbergraph_W_Lobby_Match_Settings_DefaultSkill(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
