#pragma once
#include "Utils/ErrorLogger.h"
//#include <Windows.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "DirectXTK.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow)
{
	HRESULT hr = E_INVALIDARG;
	if (FAILED(hr))
	{
		ErrorLogger::Log(hr, "FAILURE");
	}
	return 0;
}