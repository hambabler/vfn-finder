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
	 * WidgetBlueprintGeneratedClass W_TeammateIndicator.W_TeammateIndicator_C
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UW_TeammateIndicator_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_22;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AUpGunBasePlayerState*                               Owner_PS;                                                // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AUpGunGameStateBase*                                 UpGun_GS;                                                // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AUpGunBasePlayerState*                               Viewer_PS;                                               // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FTimerHandle                                        VisibilityCheckLoop;                                     // 0x0288(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AUpGunBaseCharacter*                                 Owner_Chara;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateVisibility();
		void UpdateColor();
		void Get_PS(class AUpGunBasePlayerState** UpGun_PS);
		void Construct();
		void Initialized();
		void OnCharacterKilled();
		void ExecuteUbergraph_W_TeammateIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
