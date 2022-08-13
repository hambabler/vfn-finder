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
	 * BlueprintGeneratedClass GA_Skill_Crits_Insurance.GA_Skill_Crits_Insurance_C
	 * Size -> 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Crits_Insurance_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnTick_BE416A624FC5D6BCAEE4DC81334742BB(float DeltaTime);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Skill_Crits_Insurance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
