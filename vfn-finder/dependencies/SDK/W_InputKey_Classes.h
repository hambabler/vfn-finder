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
	 * WidgetBlueprintGeneratedClass W_InputKey.W_InputKey_C
	 * Size -> 0x00C0 (FullSize[0x0320] - InheritedSize[0x0260])
	 */
	class UW_InputKey_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Image_57;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_40;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      Game_Instance;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FKey                                                Key;                                                     // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x0298(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateColor                                         In_Color_and_Opacity;                                    // 0x02F0(0x0028) Edit, BlueprintVisible
		class FName                                                Input_Pin;                                               // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Texture(class UTexture2D** Texture, bool HasImage, const struct FKey& Key);
		void Construct();
		void DisplayKey(const class FName& InputPin);
		void PreConstruct(bool IsDesignTime);
		void RefreshDisplay();
		void InputsChanged(bool bIsGamepad);
		void KeyMapChanged();
		void ExecuteUbergraph_W_InputKey(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
