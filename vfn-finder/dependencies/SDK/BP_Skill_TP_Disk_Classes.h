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
	 * BlueprintGeneratedClass BP_Skill_TP_Disk.BP_Skill_TP_Disk_C
	 * Size -> 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
	 */
	class ABP_Skill_TP_Disk_C : public AUpGunSkillTPDisk
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara;                                                 // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void BP_Destroyed();
		void ExecuteUbergraph_BP_Skill_TP_Disk(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
