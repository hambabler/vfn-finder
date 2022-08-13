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
	 * BlueprintGeneratedClass GA_Skill_LocalBuff.GA_Skill_LocalBuff_C
	 * Size -> 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
	 */
	class UGA_Skill_LocalBuff_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9U0T[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GE_;                                                     // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AUpGunBaseCharacter*>                         PlayersToBuff;                                           // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void OnEvent_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_5DE297EC4907F747927FB6906BB95465(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnEvent_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_E7545E4E4EDE4645CF73428A873A27A2(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void PlayMontageLocal();
		void ExecuteUbergraph_GA_Skill_LocalBuff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
