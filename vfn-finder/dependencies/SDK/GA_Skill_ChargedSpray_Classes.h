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
	 * BlueprintGeneratedClass GA_Skill_ChargedSpray.GA_Skill_ChargedSpray_C
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UGA_Skill_ChargedSpray_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FRandomStream                                       RandomStream;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor

	public:
		bool IsMagazineEmpty();
		void OnPerformAction_64C05E9B4D41CCD622A68A910E74B3B8();
		void OnEvent_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_97BFEA1748C9B612B4E8A29D7DEB1637(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnEvent_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_06C633F54425A7DAE97A3D96B03E18DA(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_ChargedSpray(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
