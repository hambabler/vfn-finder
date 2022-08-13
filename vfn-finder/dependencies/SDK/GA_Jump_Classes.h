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
	 * BlueprintGeneratedClass GA_Jump.GA_Jump_C
	 * Size -> 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
	 */
	class UGA_Jump_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Jump(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
