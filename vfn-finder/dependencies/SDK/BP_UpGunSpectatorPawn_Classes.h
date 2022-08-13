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
	 * BlueprintGeneratedClass BP_UpGunSpectatorPawn.BP_UpGunSpectatorPawn_C
	 * Size -> 0x0048 (FullSize[0x0310] - InheritedSize[0x02C8])
	 */
	class ABP_UpGunSpectatorPawn_C : public AUpGunSpectatorPawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara4;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara3;                                                // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara2;                                                // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara1;                                                // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara;                                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Drone_Top;                                               // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Drone_neck;                                              // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Drone;                                                   // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Angular_from_Direction(struct FVector* DirectionnalVector, float MaxDesiredRotation, float* DesiredAngle);
		void Orient();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_UpGunSpectatorPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
