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
	 * BlueprintGeneratedClass BPC_ShouldDispawn.BPC_ShouldDispawn_C
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UBPC_ShouldDispawn_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnNewRound;                                              // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable
		float                                                      CallEventChance;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6O1Y[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNewRoundWithChance;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable

	public:
		void ReceiveBeginPlay();
		void OnNewRound_Delegate(unsigned char OldRound, unsigned char NewRound);
		void ExecuteUbergraph_BPC_ShouldDispawn(int32_t EntryPoint);
		void OnNewRoundWithChance__DelegateSignature(unsigned char Round);
		void OnNewRound__DelegateSignature(unsigned char Round);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
