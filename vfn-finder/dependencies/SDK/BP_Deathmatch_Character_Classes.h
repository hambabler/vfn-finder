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
	 * BlueprintGeneratedClass BP_Deathmatch_Character.BP_Deathmatch_Character_C
	 * Size -> 0x0020 (FullSize[0x05A0] - InheritedSize[0x0580])
	 */
	class ABP_Deathmatch_Character_C : public AUpGunDeathmatchCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Indicator;                                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Healthbar;                                               // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UC_ProceduralArmsAnimation_C*                        C_ProceduralArmsAnimation;                               // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void BP_OnSpawnDefaultPlayerWeapons();
		void ShowHealthBar();
		void ExecuteUbergraph_BP_Deathmatch_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
