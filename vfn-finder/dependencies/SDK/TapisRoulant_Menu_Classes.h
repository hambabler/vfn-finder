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
	 * BlueprintGeneratedClass TapisRoulant_Menu.TapisRoulant_Menu_C
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ATapisRoulant_Menu_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInstancedStaticMeshComponent*                       InstancedStaticMesh;                                     // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    Spline;                                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Offset_offset_f_FF241B15480B0B1A46C9B0B64B770351;        // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Offset__Direction_FF241B15480B0B1A46C9B0B64B770351;      // 0x0244(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGMF[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Offset;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    ItemNb;                                                  // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Mesh;                                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Offset__FinishedFunc();
		void Offset__UpdateFunc();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_TapisRoulant_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
