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
	 * Function ServerCreation.ServerCreation_C.OnLobbyCreated
	 */
	struct UServerCreation_C_OnLobbyCreated_Params
	{
	public:
		bool                                                       bSucceeded;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ServerCreation.ServerCreation_C.GamemodeInfos
	 */
	struct UServerCreation_C_GamemodeInfos_Params
	{
	public:
		TArray<class FString>                                      Options;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Options_out;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerCreation.ServerCreation_C.Construct
	 */
	struct UServerCreation_C_Construct_Params
	{	};

	/**
	 * Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UServerCreation_C_BndEvt__ServerCreation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UServerCreation_C_BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ServerCreation.ServerCreation_C.BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UServerCreation_C_BndEvt__ServerCreation_ServerName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ServerCreation.ServerCreation_C.ExecuteUbergraph_ServerCreation
	 */
	struct UServerCreation_C_ExecuteUbergraph_ServerCreation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LDVA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
