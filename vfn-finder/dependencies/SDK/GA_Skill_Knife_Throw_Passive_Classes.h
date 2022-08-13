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
	 * BlueprintGeneratedClass GA_Skill_Knife_Throw_Passive.GA_Skill_Knife_Throw_Passive_C
	 * Size -> 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
	 */
	class UGA_Skill_Knife_Throw_Passive_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventReceived_9B2D6F3D4FD26150E1A5AA91ABE296B8(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Skill_Knife_Throw_Passive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
