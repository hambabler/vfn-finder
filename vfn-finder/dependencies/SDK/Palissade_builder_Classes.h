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
	 * BlueprintGeneratedClass Palissade_builder.Palissade_builder_C
	 * Size -> 0x0044 (FullSize[0x0264] - InheritedSize[0x0220])
	 */
	class APalissade_builder_C : public AActor
	{
	public:
		class UHierarchicalInstancedStaticMeshComponent*           HCI;                                                     // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Offset;                                                  // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             Object_Size;                                             // 0x0234(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UStaticMesh*                                         Object;                                                  // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Instuctions;                                             // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
