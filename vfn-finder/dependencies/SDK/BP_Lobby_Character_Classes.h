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
	 * BlueprintGeneratedClass BP_Lobby_Character.BP_Lobby_Character_C
	 * Size -> 0x0018 (FullSize[0x0598] - InheritedSize[0x0580])
	 */
	class ABP_Lobby_Character_C : public AUpGunBaseCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UC_ProceduralArmsAnimation_C*                        C_ProceduralArmsAnimation;                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Test_MatArmor;                                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void BP_OnSpawnDefaultPlayerWeapons();
		void ExecuteUbergraph_BP_Lobby_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
