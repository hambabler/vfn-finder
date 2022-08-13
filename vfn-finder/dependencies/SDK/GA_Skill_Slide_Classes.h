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
	 * BlueprintGeneratedClass GA_Skill_Slide.GA_Skill_Slide_C
	 * Size -> 0x0024 (FullSize[0x0464] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Slide_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Strength;                                                // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitialForward;                                          // 0x0454(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlideTime;                                               // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateTargetActor();
		void OnFinish_E19CE26D4C360AB07BF5568EF471E18B();
		void OnEvent_44321C7A4B5F559B0F45F3AED9AA2C47(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_44321C7A4B5F559B0F45F3AED9AA2C47(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_44321C7A4B5F559B0F45F3AED9AA2C47(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_44321C7A4B5F559B0F45F3AED9AA2C47(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_44321C7A4B5F559B0F45F3AED9AA2C47(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void PlayMontage();
		void ExecuteUbergraph_GA_Skill_Slide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
