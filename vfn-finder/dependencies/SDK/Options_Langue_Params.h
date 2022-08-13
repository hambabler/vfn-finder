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
	 * Function Options_Langue.Options_Langue_C.EditWidget
	 */
	struct UOptions_Langue_C_EditWidget_Params
	{
	public:
		class ULangue_button_C*                                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLangues                                            langue;                                                  // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Langue.Options_Langue_C.Construct
	 */
	struct UOptions_Langue_C_Construct_Params
	{	};

	/**
	 * Function Options_Langue.Options_Langue_C.ExecuteUbergraph_Options_Langue
	 */
	struct UOptions_Langue_C_ExecuteUbergraph_Options_Langue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
