#include "dependencies/SDK.h"
using namespace CG;

// Example used on: UpGun-Win64-Shipping.exe

void FindVFunction(UObject* _this, uint64_t address)
{

	uint64_t funcAddr = (uint64_t)GetModuleHandle(0) + address;

	if (!funcAddr)
	{
		printf("failed to find func address\n");
		return;
	}

	void** vtable = *reinterpret_cast<void***>(_this);
	for (int i = 0; i < 100; ++i)
	{
		if ((uintptr_t)vtable[i] == funcAddr)
		{
			printf("vfunction found at address (%p) index at (%d)\n", vtable[i], i);
			return;
		}
	}
	printf("failed to find vfunction & index.. most likely function address is incorrect\n");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	AllocConsole();
	FILE* stream;
	freopen_s(&stream, "CONOUT$", "w", stdout);

	// Initializing GObjects so we can find the function address

	if (!CG::InitSdk()) {
		printf("failed to initialize gobjects, gnames, gworld\n");
		return TRUE;
	}

	UWorld* World = (*UWorld::GWorld);

	if (World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.Count())
	{
		UGameViewportClient* Viewport = World->OwningGameInstance->LocalPlayers[0]->ViewportClient;
		if (Viewport)
		{
			FindVFunction(Viewport, 0x10B0CC0); // in this case I want to find ProcessEvent
		}
	}

	return TRUE;
}