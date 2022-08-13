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
	 * Function WID_MatchEnd.WID_MatchEnd_C.Appear
	 */
	struct UWID_MatchEnd_C_Appear_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.GetTimerText
	 */
	struct UWID_MatchEnd_C_GetTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6
	 */
	struct UWID_MatchEnd_C_OnFailure_DA15FD0A40A8CCBFF286A4A6DAC26EF6_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6
	 */
	struct UWID_MatchEnd_C_OnSuccess_DA15FD0A40A8CCBFF286A4A6DAC26EF6_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.Construct
	 */
	struct UWID_MatchEnd_C_Construct_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature
	 */
	struct UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_ChangeMap_K2Node_ComponentBoundEvent_0_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_Quit_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature
	 */
	struct UWID_MatchEnd_C_BndEvt__WID_MatchEnd_W_button_Replay_K2Node_ComponentBoundEvent_2_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.OnItemDropped
	 */
	struct UWID_MatchEnd_C_OnItemDropped_Params
	{
	public:
		struct FUpGunInventoryItem                                 Item;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WID_MatchEnd.WID_MatchEnd_C.ExecuteUbergraph_WID_MatchEnd
	 */
	struct UWID_MatchEnd_C_ExecuteUbergraph_WID_MatchEnd_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
