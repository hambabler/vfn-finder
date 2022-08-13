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
	 * BlueprintGeneratedClass BP_MainMenu_GameMode.BP_MainMenu_GameMode_C
	 * Size -> 0x0018 (FullSize[0x02D8] - InheritedSize[0x02C0])
	 */
	class ABP_MainMenu_GameMode_C : public AGameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UMain_Menu_C*                                        MainMenu;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailure_545312D845C1C57B4FC1D5902FDDFEC4();
		void OnSuccess_545312D845C1C57B4FC1D5902FDDFEC4();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_MainMenu_GameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
