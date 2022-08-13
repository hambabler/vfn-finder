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
	 * BlueprintGeneratedClass GA_Skill_Sight_Iron.GA_Skill_Sight_Iron_C
	 * Size -> 0x0020 (FullSize[0x0460] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Sight_Iron_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FActiveGameplayEffectHandle                         GE_Skill_Sight_Iron;                                     // 0x0448(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AUpGunBaseCharacter*                                 Character_UpGun;                                         // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         GE_Skill_Sight_BulletBoost;                              // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void MultiplySensibility(float Multiplier);
		void OnRelease_C172A5A248A5057F148D79B631780B96(float TimeHeld);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Skill_Sight_Iron(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
