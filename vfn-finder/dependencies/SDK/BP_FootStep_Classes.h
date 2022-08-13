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
	 * BlueprintGeneratedClass BP_FootStep.BP_FootStep_C
	 * Size -> 0x0031 (FullSize[0x0251] - InheritedSize[0x0220])
	 */
	class ABP_FootStep_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class APawn*                                               Pawn;                                                    // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   NS_Step;                                                 // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Skeletal;                                                // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTimerHandle                                        TimerDestroy;                                            // 0x0248(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           SurfaceType;                                             // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlaySound(const class FName& InSocketName, float VolumeMultiplier);
		bool TraceFloor(const class FName& Bone);
		void DestroyTest();
		void Particle(const class FName& Bone);
		void Step(const class FName& Name, float VolumeMultiplier);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void Jump();
		void Land();
		void ExecuteUbergraph_BP_FootStep(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
