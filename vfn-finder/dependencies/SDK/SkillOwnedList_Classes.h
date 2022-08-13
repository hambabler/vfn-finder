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
	 * WidgetBlueprintGeneratedClass SkillOwnedList.SkillOwnedList_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class USkillOwnedList_C : public UUserWidget
	{
	public:
		class UHorizontalBox*                                      HorizontalBox_SkillList;                                 // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SkillActualIndex;                                        // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_33G3[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer;                                                   // 0x0270(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      BoxSize;                                                 // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BoxPadding;                                              // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FUpGunSkillInstance>                         Skill_List;                                              // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CallWithDelay();
		void FillList(TArray<struct FUpGunSkillInstance>* SkillList);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
