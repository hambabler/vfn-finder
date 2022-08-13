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
	 * BlueprintGeneratedClass BP_Shrapnel.BP_Shrapnel_C
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class ABP_Shrapnel_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FVector>                                     ParticleDirections;                                      // 0x0230(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Shrapnel_Level;                                          // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_P04F[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DispersionAngle;                                         // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             Direction;                                               // 0x0248(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    SeedInt;                                                 // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FRandomStream                                       Seed;                                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		TArray<class AActor*>                                      ActorToIgnore;                                           // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		float                                                      DistanceShrapnel;                                        // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      Damage;                                                  // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       LinearFallOff;                                           // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              ShrapnelPerLevel;                                        // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              TotalShrapnels;                                          // 0x027A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KF9G[0x5];                                   // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Damage_class;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Decals();
		void DoesLinearFallOff(bool ShouldUseLinearFallOff, float Time, float* ReturnDamage);
		void ParticleEffect();
		void ComputeSeed(int32_t Modifier);
		void GenerateDirections();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Shrapnel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
