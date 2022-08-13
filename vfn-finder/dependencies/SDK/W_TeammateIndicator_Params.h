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
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateVisibility
	 */
	struct UW_TeammateIndicator_C_UpdateVisibility_Params
	{	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.UpdateColor
	 */
	struct UW_TeammateIndicator_C_UpdateColor_Params
	{	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.Get_PS
	 */
	struct UW_TeammateIndicator_C_Get_PS_Params
	{
	public:
		class AUpGunBasePlayerState*                               UpGun_PS;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.Construct
	 */
	struct UW_TeammateIndicator_C_Construct_Params
	{	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.Initialized
	 */
	struct UW_TeammateIndicator_C_Initialized_Params
	{	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.OnCharacterKilled
	 */
	struct UW_TeammateIndicator_C_OnCharacterKilled_Params
	{	};

	/**
	 * Function W_TeammateIndicator.W_TeammateIndicator_C.ExecuteUbergraph_W_TeammateIndicator
	 */
	struct UW_TeammateIndicator_C_ExecuteUbergraph_W_TeammateIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
