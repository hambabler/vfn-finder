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
	 * Function Sub_NewItem.Sub_NewItem_C.GetRarity
	 */
	struct USub_NewItem_C_GetRarity_Params
	{
	public:
		struct FUpGunOSSItemMetadata                               ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Sub_NewItem.Sub_NewItem_C.Construct
	 */
	struct USub_NewItem_C_Construct_Params
	{	};

	/**
	 * Function Sub_NewItem.Sub_NewItem_C.ExecuteUbergraph_Sub_NewItem
	 */
	struct USub_NewItem_C_ExecuteUbergraph_Sub_NewItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K43F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
