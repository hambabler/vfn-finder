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
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyVisualSettingsAtLaunch
	 */
	struct UGI_BP_Upgun_C_ApplyVisualSettingsAtLaunch_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.CheckCosmeticOwnership
	 */
	struct UGI_BP_Upgun_C_CheckCosmeticOwnership_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.ApplyKeyMappingFromSave
	 */
	struct UGI_BP_Upgun_C_ApplyKeyMappingFromSave_Params
	{
	public:
		bool                                                       FallBackOnAZERTY;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.ResetMapping
	 */
	struct UGI_BP_Upgun_C_ResetMapping_Params
	{
	public:
		bool                                                       UseAZERTY;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.RemoveMapping
	 */
	struct UGI_BP_Upgun_C_RemoveMapping_Params
	{
	public:
		bool                                                       ResetSavedValues;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HNF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.AjustVolumesAtLauch
	 */
	struct UGI_BP_Upgun_C_AjustVolumesAtLauch_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.SaveData
	 */
	struct UGI_BP_Upgun_C_SaveData_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.CreateSaveSlot
	 */
	struct UGI_BP_Upgun_C_CreateSaveSlot_Params
	{
	public:
		bool                                                       WasSlotCreated;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SSYW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.Load Saved Data
	 */
	struct UGI_BP_Upgun_C_Load_Saved_Data_Params
	{
	public:
		class UBP_SAVE_C*                                          Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.ReceiveInit
	 */
	struct UGI_BP_Upgun_C_ReceiveInit_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnNetworkError
	 */
	struct UGI_BP_Upgun_C_BP_OnNetworkError_Params
	{
	public:
		ENetworkFailure                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4MUX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Msg;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.BP_OnInitialInventoryReady
	 */
	struct UGI_BP_Upgun_C_BP_OnInitialInventoryReady_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.ExecuteUbergraph_GI_BP_Upgun
	 */
	struct UGI_BP_Upgun_C_ExecuteUbergraph_GI_BP_Upgun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VE01[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateKeyMapping__DelegateSignature
	 */
	struct UGI_BP_Upgun_C_UpdateKeyMapping__DelegateSignature_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.OnCosmeticsUpdated__DelegateSignature
	 */
	struct UGI_BP_Upgun_C_OnCosmeticsUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function GI_BP_Upgun.GI_BP_Upgun_C.UpdateCrossHair__DelegateSignature
	 */
	struct UGI_BP_Upgun_C_UpdateCrossHair__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
