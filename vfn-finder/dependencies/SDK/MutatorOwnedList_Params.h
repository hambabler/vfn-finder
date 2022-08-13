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
	 * Function MutatorOwnedList.MutatorOwnedList_C.UpdateList
	 */
	struct UMutatorOwnedList_C_UpdateList_Params
	{	};

	/**
	 * Function MutatorOwnedList.MutatorOwnedList_C.Generate Mutator List
	 */
	struct UMutatorOwnedList_C_Generate_Mutator_List_Params
	{
	public:
		struct FGameplayTagContainer                               Mutators;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       HasMutators;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RD75[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MutatorOwnedList.MutatorOwnedList_C.PreConstruct
	 */
	struct UMutatorOwnedList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MutatorOwnedList.MutatorOwnedList_C.ExecuteUbergraph_MutatorOwnedList
	 */
	struct UMutatorOwnedList_C_ExecuteUbergraph_MutatorOwnedList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
