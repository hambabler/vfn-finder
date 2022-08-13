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
	 * BlueprintGeneratedClass BP_Deathmatch_PlayerController.BP_Deathmatch_PlayerController_C
	 * Size -> 0x0008 (FullSize[0x0660] - InheritedSize[0x0658])
	 */
	class ABP_Deathmatch_PlayerController_C : public AUpGunDeathmatchPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Deathmatch_PlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
