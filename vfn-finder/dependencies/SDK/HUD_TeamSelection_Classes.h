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
	 * WidgetBlueprintGeneratedClass HUD_TeamSelection.HUD_TeamSelection_C
	 * Size -> 0x0049 (FullSize[0x02A9] - InheritedSize[0x0260])
	 */
	class UHUD_TeamSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextBlock*                                          CurrentTeamText;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_TeamSelection_Team_C*                           HUD_TeamSelection_Team;                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TeamHorizontalBox;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextTimer;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 GameState;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunBasePlayerState*                               PlayerState;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UHUD_TeamSelection_Team_C*>                   TeamButtons;                                             // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       ShouldCloseWhenSelectedTeam;                             // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAnyTeamButtonClicked();
		class FText GetTimerText();
		void OnPlayerTeamUpdated(const struct FUpGunTeamId& Team);
		void UpdateCurrentTeam();
		void OnTeamsUpdated(TArray<struct FUpGunTeam> Teams);
		void Construct();
		void OnShown();
		void ExecuteUbergraph_HUD_TeamSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
