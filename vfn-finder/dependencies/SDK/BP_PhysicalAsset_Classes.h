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
	 * BlueprintGeneratedClass BP_PhysicalAsset.BP_PhysicalAsset_C
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABP_PhysicalAsset_C : public AStaticMeshActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Impulse(const struct FVector& Impact_Point, const struct FVector& ImpactNormal, float Force);
		void BndEvt__BP_PhysicalAsset_StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_BP_PhysicalAsset(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
