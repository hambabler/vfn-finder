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
	 * BlueprintGeneratedClass BP_Base_HUD.BP_Base_HUD_C
	 * Size -> 0x0084 (FullSize[0x03AC] - InheritedSize[0x0328])
	 */
	class ABP_Base_HUD_C : public AUpGunBaseHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunBasePlayerController*                          PC;                                                      // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunBaseCharacter*                                 As_UpGun_Character;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPauseMenu_C*                                        PauseMenu;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   NS_SpeedLines;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Smoothed_Velocity;                                       // 0x0358(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DamageIndicatorPPIndex;                                  // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DamageIndicatorPP;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageIndicatorOpacity;                                  // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JCH3[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DamagedScreenPP;                                         // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWID_ChatBox_C*                                      ChatBox;                                                 // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 BaseGS;                                                  // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunBasePlayerState*                               BasePS;                                                  // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     SFX_Wind;                                                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Smoothed_Velocity_3;                                     // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DropItem();
		void Wind_Tick();
		void Spawn_WindSFX();
		void ValidateAchievement(const class FString& ID);
		void ApplyFOV();
		void Achievement_Pacifist();
		void UpdateUsedSkills();
		void OnSwitchedState(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState);
		void DamageIndicatorTick(float DeltaTime);
		void GetHitDirection(const struct FVector& HitDirection, float DamageTaken);
		void SpawnDamageNumber(const struct FGameplayEffectSpec& EffectSpec, float Amount, class AUpGunBasePlayerState* Victim);
		void Test_ShowHealthBars();
		void CameraShakeOnLanded(struct FHitResult* Hit);
		void SpeedLines_Tick(float DeltaTime);
		void SpawnSpeedLines();
		void InpActEvt_Pause_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Chat_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnAcknowledgedPossession(class APawn* Pawn);
		void BP_CreateWidgets();
		void ReceiveTick(float DeltaSeconds);
		void OnDamaged(const struct FGameplayEffectSpec& EffectSpec, float Amount);
		void ClickedResumeOnPauseMenu();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Base_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
