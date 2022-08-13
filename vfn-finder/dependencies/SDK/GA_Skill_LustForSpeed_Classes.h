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
	 * BlueprintGeneratedClass GA_Skill_LustForSpeed.GA_Skill_LustForSpeed_C
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UGA_Skill_LustForSpeed_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 UpGun_Character;                                         // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FTimerHandle                                        Timer;                                                   // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         GE;                                                      // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void CheckVelocity();
		void ExecuteUbergraph_GA_Skill_LustForSpeed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
