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
	 * BlueprintGeneratedClass GA_Skill_Decoy.GA_Skill_Decoy_C
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Decoy_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void DidNotSpawn_B7F6494C4E47B66E751A13A256792EA8(class AActor* SpawnedActor);
		void Success_B7F6494C4E47B66E751A13A256792EA8(class AActor* SpawnedActor);
		void OnEvent_84CD0ADA4E5DF94C9C8C44843F97B981(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_84CD0ADA4E5DF94C9C8C44843F97B981(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_84CD0ADA4E5DF94C9C8C44843F97B981(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_84CD0ADA4E5DF94C9C8C44843F97B981(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_84CD0ADA4E5DF94C9C8C44843F97B981(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_Decoy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
