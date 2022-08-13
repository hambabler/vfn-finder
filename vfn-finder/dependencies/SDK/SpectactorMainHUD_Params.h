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
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.Text_Map
	 */
	struct USpectactorMainHUD_C_Text_Map_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.Get_TextBlock_MapName_1_Text_1
	 */
	struct USpectactorMainHUD_C_Get_TextBlock_MapName_1_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.PlayerNumbers
	 */
	struct USpectactorMainHUD_C_PlayerNumbers_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.DateText
	 */
	struct USpectactorMainHUD_C_DateText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.RecordColor
	 */
	struct USpectactorMainHUD_C_RecordColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.TimerText
	 */
	struct USpectactorMainHUD_C_TimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.Construct
	 */
	struct USpectactorMainHUD_C_Construct_Params
	{	};

	/**
	 * Function SpectactorMainHUD.SpectactorMainHUD_C.ExecuteUbergraph_SpectactorMainHUD
	 */
	struct USpectactorMainHUD_C_ExecuteUbergraph_SpectactorMainHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76TS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
