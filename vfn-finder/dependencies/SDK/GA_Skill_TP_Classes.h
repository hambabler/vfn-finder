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
	 * BlueprintGeneratedClass GA_Skill_TP.GA_Skill_TP_C
	 * Size -> 0x0028 (FullSize[0x0468] - InheritedSize[0x0440])
	 */
	class UGA_Skill_TP_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             TP_Loc;                                                  // 0x0450(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastVelocity;                                            // 0x045C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EditCollisions(ECollisionResponse NewResponse);
		struct FVector FindStartingLoc();
		void OnTimedOutAndDestinationReached_9140CDEE4D676E2B7054E9A721686FBC();
		void OnTimedOut_9140CDEE4D676E2B7054E9A721686FBC();
		void OnEvent_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_4202992145B45966FE07BDA3175F470E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void Cancelled_C54AE0DD4DBD874C353EFBA25DE3EBB2(const struct FGameplayAbilityTargetDataHandle& Data, class AGameplayAbilityTargetActor* TargetActor);
		void ValidData_C54AE0DD4DBD874C353EFBA25DE3EBB2(const struct FGameplayAbilityTargetDataHandle& Data, class AGameplayAbilityTargetActor* TargetActor);
		void K2_ActivateAbility();
		void TeleportPlayer(const struct FVector& Normal, const struct FVector& Location);
		void K2_OnEndAbility(bool bWasCancelled);
		void BP_InputPressed(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ExecuteUbergraph_GA_Skill_TP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
