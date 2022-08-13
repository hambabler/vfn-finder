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
	 * WidgetBlueprintGeneratedClass Custom_Parent_Button.Custom_Parent_Button_C
	 * Size -> 0x006D (FullSize[0x02CD] - InheritedSize[0x0260])
	 */
	class UCustom_Parent_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover_Parent;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Rot_3;                                                   // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Rot;                                                     // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Bump;                                                    // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Appear;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GameInstance;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ACharacterePrevisCustom_C*                           PrevizMesh;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FUpGunInventoryItem                                 Item;                                                    // 0x02A0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    Index;                                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsButton;                                                // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void VisualsOnButtonClicked();
		void IsCosmeticEquiped(bool* IsEquiped);
		void PlayAnimOnPrevis(EUpGunCosmeticType Index);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Construct();
		void AppearBlend();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_Custom_Parent_Button(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
