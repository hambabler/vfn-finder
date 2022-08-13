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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.GenerateVisual
	 */
	struct UMutatorOwnedEntry_C_GenerateVisual_Params
	{
	public:
		class UUpGunMutator*                                       Mutator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseEnter
	 */
	struct UMutatorOwnedEntry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.OnMouseLeave
	 */
	struct UMutatorOwnedEntry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.Construct
	 */
	struct UMutatorOwnedEntry_C_Construct_Params
	{	};

	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.PreConstruct
	 */
	struct UMutatorOwnedEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MutatorOwnedEntry.MutatorOwnedEntry_C.ExecuteUbergraph_MutatorOwnedEntry
	 */
	struct UMutatorOwnedEntry_C_ExecuteUbergraph_MutatorOwnedEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
