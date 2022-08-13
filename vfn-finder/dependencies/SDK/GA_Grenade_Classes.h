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
	 * BlueprintGeneratedClass GA_Grenade.GA_Grenade_C
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UGA_Grenade_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Grenade_C*                                       Grenade;                                                 // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FindPath(struct FVector* StartLoc, struct FVector* TossVelocity);
		void DidNotSpawn_4263FC1243BA80414B92BAB4CA223B47(class AActor* SpawnedActor);
		void Success_4263FC1243BA80414B92BAB4CA223B47(class AActor* SpawnedActor);
		void OnEvent_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_C0A4480C442972797A9AF7B0BAE97B2E(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnPress_3C2E91224DE8BAE65BCCEBAA1C1318C9(float TimeWaited);
		void K2_ActivateAbility();
		void On_destroyed(class AActor* DestroyedActor);
		void ExecuteUbergraph_GA_Grenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
