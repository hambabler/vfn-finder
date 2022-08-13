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
	 * BlueprintGeneratedClass GA_Knife.GA_Knife_C
	 * Size -> 0x0011 (FullSize[0x0451] - InheritedSize[0x0440])
	 */
	class UGA_Knife_C : public UUpGunGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUpGunBaseCharacter*                                 Character;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       HasKnife;                                                // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Stab_Visual();
		void GetRange(int32_t* Range);
		void GetFPSAnimInfo(class UAnimMontage** Anim);
		void Get_TPSAnim_Info(float* Speed, class UAnimMontage** Anim);
		void Stab();
		void OnEvent_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnInterrupted_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnBlendOut_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCancelled_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnCompleted_3A0F1F794EA404FE5C9E578CF0F044F7(class UAnimMontage* Montage, const struct FGameplayTag& Tag, const struct FGameplayEventData& EventData);
		void OnNotifyEnd_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName);
		void OnNotifyBegin_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName);
		void OnInterrupted_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName);
		void OnBlendOut_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName);
		void OnCompleted_E85F3E7E40CCA8B9DCEE919B54AFC3C0(const class FName& NotifyName);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void RPC_Visuals();
		void ExecuteUbergraph_GA_Knife(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
