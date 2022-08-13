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
	 * BlueprintGeneratedClass BP_Trophy.BP_Trophy_C
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ABP_Trophy_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Trophy;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              AchievementName;                                         // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Trophy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
