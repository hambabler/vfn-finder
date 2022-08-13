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
	 * BlueprintGeneratedClass BP_Lib_Utils.BP_Lib_Utils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_Lib_Utils_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetPlayersInRange(const struct FVector& SpherePos, float SphereRadius, class AUpGunBaseCharacter** Character, bool TeamDoesntMatter, bool ShouldShareTeam, bool TestVisibility, class UObject* WorldContext, TArray<class AUpGunBaseCharacter*>* Players);
		void GetArmorColor(class AActor* Chara, class UObject* WorldContext, struct FLinearColor* Color);
		void GetRelevantColorForPlayer(class AUpGunBasePlayerState* PS, class UObject* WorldContext, bool* Use_Team_Colors_for_Armors, struct FLinearColor* Color);
		void Custom_Knife(const class FName& RowName, class USkeletalMeshComponent** Mesh, class UObject* WorldContext);
		void Custom_Screen_Player_UI(const struct FUpGunScreen& FaceID, const struct FLinearColor& Face_Tint, class UImage** UI, class UObject* WorldContext);
		void Achievement_CheckCombo(class AUpGunBasePlayerState** PS, TMap<struct FGameplayTag, unsigned char> DesiredSkills, bool RelevantLevels, const class FString& Achievement_ID, class UObject* WorldContext, bool* HasUnlocked);
		void Count_EquippedSkills(class AUpGunBasePlayerState** State, class UObject* WorldContext, int32_t* SkillAndLevels);
		void CountDroppableSkills(class UObject* WorldContext, int32_t* Available_Skills);
		void Custom_Screen_UI(const struct FUpGunScreen& ScreenStruct, class UObject* WorldContext, class UMaterialInstanceDynamic** Material);
		void Custom_Screen(class UPrimitiveComponent** Mesh, const class FName& RowName, int32_t MatIndex, const struct FUpGunScreen& RowScreen, class UObject* WorldContext);
		void Custom_Hat_For_Debug(const class FName& RowName, class UStaticMeshComponent** Hat, bool CheckHatPosition, bool Robot, class UObject* WorldContext);
		void Custom_Rifle(const class FName& RowName, class USkeletalMeshComponent** Mesh, const struct FUpGunWeaponSkin& RowRifle, class UObject* WorldContext);
		void Custom_Armor(const class FName& RowName, class UPrimitiveComponent** Mesh, int32_t MaterialIndex, const struct FUpGunArmor& Armor_Row, class UObject* WorldContext);
		void SelectBadge(class UImage** Image, class AUpGunBasePlayerState** PS, class UObject* WorldContext);
		void Cut_Text(class FText* Text, int32_t MaxCharacters, class UEditableText** EditableTextRef, class UObject* WorldContext);
		void DamageMultiplier(float* Damage, TMap<struct FGameplayTag, float> Multiplier, const struct FGameplayTag& DamageTags, class UObject* WorldContext, float* DamageOut);
		void TraceSemiSphere(const struct FVector& Location, float MinDistanceBtwPoints, int32_t MaxDrawDistance, TArray<class AActor*> ActorsToIgnore, class UObject* WorldContext, TArray<struct FVector>* ValidLocations);
		void GetRandomMask(class UObject* WorldContext, class UMaterialInterface** Mask);
		void GetLocRelativeTo(class USceneComponent* Component, int32_t Forward, int32_t Up, int32_t Right, class UObject* WorldContext, struct FVector* Location);
		void FastForward(class USceneComponent* Component, int32_t Distance, class UObject* WorldContext, struct FVector* StartLocation, struct FVector* EndLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
