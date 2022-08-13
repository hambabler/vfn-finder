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
	 * BlueprintGeneratedClass BP_Deathmatch_HUD.BP_Deathmatch_HUD_C
	 * Size -> 0x009C (FullSize[0x0448] - InheritedSize[0x03AC])
	 */
	class ABP_Deathmatch_HUD_C : public ABP_Base_HUD_C
	{
	public:
		unsigned char                                              UnknownData_VRX9[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class AUpGunDeathmatchPlayerState*                         PlayerState;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunDeathmatchGameState*                           GameState;                                               // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunDeathmatchCharacter*                           Character;                                               // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UHUD_PlayerMain_C*                                   PlayerHUD;                                               // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          PlayerHUD_LifesText;                                     // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          PlayerHUD_AmmoText;                                      // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_Deathmatch_RoundState_C*                        RoundState;                                              // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_Deathmatch_Ghost_C*                             GhostHUD;                                                // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_SkillPicking_C*                                 SkillPicking;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunDeathmatchPlayerController*                    PlayerController;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UHUD_TeamSelection_C*                                TeamSelection;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USpectactorMainHUD_C*                                SpectatorHUD;                                            // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHUD_KillFeed_C*                                     KIllFeed;                                                // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UUserWidget*>                                 GameStateDependentWidgets;                               // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UWID_MatchEnd_C*                                     EndGame;                                                 // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWID_Scoreboard_C*                                   Scoreboard;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TransitionMusic;                                         // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HideAllGameStateDependentWidgets();
		void OnLifesChanged(unsigned char NewValue, unsigned char OldValue);
		void OnSkillSelected(const struct FGameplayTag& Skill);
		void OnGameStateChanged(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState);
		void OnPickableSkillsReceived(const struct FGameplayTagContainer& PickableSkills);
		void OnPlayerStateUpdated(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState);
		void On_Ammo_or_Magazine_Changed(unsigned char NewValue, unsigned char OldValue);
		void OnCurrentWeaponChanged(class AUpGunWeapon* NewValue, class AUpGunWeapon* OldValue);
		void OnCharacterUpdated(class AUpGunBaseCharacter* Character);
		void ExtendMainHUD();
		void InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ChangeTeam();
		void BP_CreateWidgets();
		void ExecuteUbergraph_BP_Deathmatch_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
