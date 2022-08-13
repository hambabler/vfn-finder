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
	 * BlueprintGeneratedClass BP_Fire_Zone.BP_Fire_Zone_C
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ABP_Fire_Zone_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     FakeLight;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                FireLight;                                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UNiagaraComponent*                                   Fire;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Noise_Light_54535A684BA6A237C4451F9C7CA7B1AC;            // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Noise__Direction_54535A684BA6A237C4451F9C7CA7B1AC;       // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DRIL[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Noise;                                                   // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      FadeLight_Alpha_BC837AF147AE9BB7C1B9C2BB527912E3;        // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         FadeLight__Direction_BC837AF147AE9BB7C1B9C2BB527912E3;   // 0x0274(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3VC[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeLight;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x0280(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      DangerTime;                                              // 0x0284(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class AActor*>                                      ActorToIgnore;                                           // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		struct FTimerHandle                                        Timer;                                                   // 0x0298(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnFakeLightDecal();
		void SpawnDecal();
		void SetParticleParam();
		void TestRange();
		void UserConstructionScript();
		void FadeLight__FinishedFunc();
		void FadeLight__UpdateFunc();
		void Noise__FinishedFunc();
		void Noise__UpdateFunc();
		void ReceiveBeginPlay();
		void BndEvt__BP_Fire_Zone_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round);
		void ExecuteUbergraph_BP_Fire_Zone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
