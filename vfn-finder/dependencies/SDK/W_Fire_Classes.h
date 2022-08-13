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
	 * WidgetBlueprintGeneratedClass W_Fire.W_Fire_C
	 * Size -> 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
	 */
	class UW_Fire_C : public UUpGunAbilitySystemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ZoomIn;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_19;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnBurningTagUpdated(int32_t TagCount);
		void Finished_8417E8114AC64806976257986C299219();
		void Construct();
		void EndFire();
		void StartFire();
		void ExecuteUbergraph_W_Fire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
