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
	 * BlueprintGeneratedClass GA_Skill_ArmedReload.GA_Skill_ArmedReload_C
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UGA_Skill_ArmedReload_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnSync_F4E6381A4EA609CCFB726283F2A1273C();
		void OnEvent_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_AFE39BCB431D6213AF0B82B46D7CBA1F(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void DidNotSpawn_30F4727043D8185A531611A45D5F2DF1(class AActor* SpawnedActor);
		void Success_30F4727043D8185A531611A45D5F2DF1(class AActor* SpawnedActor);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_ArmedReload(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
