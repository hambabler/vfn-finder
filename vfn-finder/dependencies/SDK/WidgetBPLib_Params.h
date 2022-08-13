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
	 * Function WidgetBPLib.WidgetBPLib_C.FormatTimeNoMinutes
	 */
	struct UWidgetBPLib_C_FormatTimeNoMinutes_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinDigits;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WidgetBPLib.WidgetBPLib_C.FormatTime
	 */
	struct UWidgetBPLib_C_FormatTime_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IF99[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
