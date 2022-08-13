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
	 * BlueprintGeneratedClass BP_HealPack.BP_HealPack_C
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ABP_HealPack_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara;                                                 // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Heal;                                                    // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Z_5DE9FB2C416136D1B24532822C44C9B8;           // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_Rot_5DE9FB2C416136D1B24532822C44C9B8;         // 0x025C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_5DE9FB2C416136D1B24532822C44C9B8;  // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U2ZH[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void CheckRange();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void BndEvt__BP_HealPack_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round);
		void ExecuteUbergraph_BP_HealPack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
