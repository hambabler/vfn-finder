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
	 * WidgetBlueprintGeneratedClass Sub_Pseudo.Sub_Pseudo_C
	 * Size -> 0x007C (FullSize[0x02DC] - InheritedSize[0x0260])
	 */
	class USub_Pseudo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_26;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerName;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x0278(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI_Upgun;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      BrushSize;                                               // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideName(const class FText& Text, class UTexture2D* Icon);
		void GenerateWidget(class AUpGunBasePlayerState** PS);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_Sub_Pseudo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
