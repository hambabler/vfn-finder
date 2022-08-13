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
	 * BlueprintGeneratedClass BP_SAVE.BP_SAVE_C
	 * Size -> 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
	 */
	class UBP_SAVE_C : public USaveGame
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       FancyLights;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V55S[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Volumes;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               Volumes_Mutes;                                           // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          CrossHair;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CrossHair_Color;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ColorBlindMode;                                          // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MotionBlur;                                              // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V7BE[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FInputChord>                      SavedMappings_Keyboard;                                  // 0x0078(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, struct FInputChord>                      SavedMappings_Controller;                                // 0x00C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasFilledInitialSetup;                                   // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SPC[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MapSeen;                                                 // 0x0120(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FOV;                                                     // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sensibility;                                             // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertY;                                                 // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SL1A[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                SkillUsed;                                               // 0x0140(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FUpGunCosmeticSettings                              CosmeticSettings;                                        // 0x0150(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              Name;                                                    // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FUpGunCosmeticSettings                              PreviewCosmetics;                                        // 0x01C0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddMapToList(const class FString& MapName, bool* HasAllMaps);
		void CountDroppableSkills(int32_t* Available_Skills);
		void CheckAchievementSkills(bool* HasAllSkills);
		void CheckAchievementMaps(bool* HasAllMaps);
		void Check();
		void ExecuteUbergraph_BP_SAVE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
