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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass WidgetBPLib.WidgetBPLib_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBPLib_C : public UBlueprintFunctionLibrary
	{
	public:
		void FormatTimeNoMinutes(float Seconds, int32_t MinDigits, class UObject* WorldContext, class FText* Text);
		void FormatTime(float Seconds, class UObject* WorldContext, class FText* Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
