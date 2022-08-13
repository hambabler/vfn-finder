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
	 * BlueprintGeneratedClass GA_Ghost_Bouh.GA_Ghost_Bouh_C
	 * Size -> 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
	 */
	class UGA_Ghost_Bouh_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACharacter*                                          As_Character;                                            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TZAW[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AUpGunBaseCharacter*>                         ScaredPlayers;                                           // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        TimerScaredPlayerCount;                                  // 0x0468(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void CountScaredPlayers();
		void OnFinish_DEABB5B6479F5D91E7EEE3AE0C2C7780();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Ghost_Bouh(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
