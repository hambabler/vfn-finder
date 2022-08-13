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
	 * WidgetBlueprintGeneratedClass SkillToAdd.SkillToAdd_C
	 * Size -> 0x00D8 (FullSize[0x0338] - InheritedSize[0x0260])
	 */
	class USkillToAdd_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Clicked;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Hover;                                                   // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Skill;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_131;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_206;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SkillName;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider_96;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUpGunSkill*                                         Skill;                                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              Level;                                                   // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7387[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Material_progressBar;                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Material_Icon;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunGameModeSettings*                              GameMode;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdatedSkill;                                            // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Skills_Capacity[0x50];                                   // 0x02E8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void SpareLevelsToAdd(int32_t* SpareLevels);
		void CanAddCapacity(bool* CanAdd);
		void Can_Add_Secondary_Weapons(bool* CanAddExtention);
		void IsSkillCompatible(bool* Available);
		void Add_Skill_to_Array();
		void RemoveAbilityFromArray();
		void Is_Available(bool* CanBeEdited, bool* IsAvailableToAdd);
		void CountSkillsLevelsToAdd(int32_t* Levels);
		void UpdateColor();
		void InitVisuals();
		float GetPercent_1();
		void Construct();
		void BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SkillToAdd_Slider_95_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature();
		void Update_Availability();
		void BndEvt__SkillToAdd_Button_0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_SkillToAdd(int32_t EntryPoint);
		void UpdatedSkill__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
