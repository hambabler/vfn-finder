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
	 * Function Sub_Pseudo.Sub_Pseudo_C.OverrideName
	 */
	struct USub_Pseudo_C_OverrideName_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sub_Pseudo.Sub_Pseudo_C.GenerateWidget
	 */
	struct USub_Pseudo_C_GenerateWidget_Params
	{
	public:
		class AUpGunBasePlayerState*                               PS;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sub_Pseudo.Sub_Pseudo_C.PreConstruct
	 */
	struct USub_Pseudo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sub_Pseudo.Sub_Pseudo_C.Construct
	 */
	struct USub_Pseudo_C_Construct_Params
	{	};

	/**
	 * Function Sub_Pseudo.Sub_Pseudo_C.ExecuteUbergraph_Sub_Pseudo
	 */
	struct USub_Pseudo_C_ExecuteUbergraph_Sub_Pseudo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
