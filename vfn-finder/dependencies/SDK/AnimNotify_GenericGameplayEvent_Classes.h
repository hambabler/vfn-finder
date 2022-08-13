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
	 * BlueprintGeneratedClass AnimNotify_GenericGameplayEvent.AnimNotify_GenericGameplayEvent_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_GenericGameplayEvent_C : public UAnimNotify
	{
	public:
		struct FGameplayTag                                        Event;                                                   // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
