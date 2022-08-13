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
	 * BlueprintGeneratedClass GA_Shoot.GA_Shoot_C
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UGA_Shoot_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FRandomStream                                       RandomStream;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor

	public:
		void Get_Current_Weapon(class AUpGunWeapon** Weapon);
		void IsReloading(bool* Return_Value);
		void Reload();
		void OnPerformAction_A422A4D74D72A60EB5040AB47EE5DE53();
		void OnRelease_08748EC849AA0C4DCE7A438AC21E9E51(float TimeHeld);
		void OnEvent_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_D00B370244AA4923B98259ADD756359C(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Shoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
