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
	 * BlueprintGeneratedClass BP_DamageNumber.BP_DamageNumber_C
	 * Size -> 0x0032 (FullSize[0x0252] - InheritedSize[0x0220])
	 */
	class ABP_DamageNumber_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Damage;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Damage_Number;                                           // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_PCWG[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Text;                                                    // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UHUD_FloatingDamage_C*                               Floating_Damage;                                         // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsText;                                                  // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsHeadshot;                                              // 0x0251(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_DamageNumber(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
