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
	 * Function Button_Compteur.Button_Compteur_C.SetValue
	 */
	struct UButton_Compteur_C_SetValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5Z2G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.FormatText
	 */
	struct UButton_Compteur_C_FormatText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.PreConstruct
	 */
	struct UButton_Compteur_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn+_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UButton_Compteur_C_BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.BndEvt__Button_Compteur_Btn-_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UButton_Compteur_C_BndEvt__Button_Compteur_Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.ExecuteUbergraph_Button_Compteur
	 */
	struct UButton_Compteur_C_ExecuteUbergraph_Button_Compteur_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Compteur.Button_Compteur_C.ClickedOnButtons__DelegateSignature
	 */
	struct UButton_Compteur_C_ClickedOnButtons__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
