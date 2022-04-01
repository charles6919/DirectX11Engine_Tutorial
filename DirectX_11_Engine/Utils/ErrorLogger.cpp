#include "ErrorLogger.h"
#include <comdef.h>

void ErrorLogger::Log(string message)
{
	string errorMsg = "Error : " + message;
	MessageBoxA(NULL, errorMsg.c_str(), "Error", MB_ICONERROR);
}

void ErrorLogger::Log(HRESULT hr, string message)
{
	_com_error error(hr);
	wstring errorMsg = L"Error : " + StringConverter::StringToWide(message) + L"\n" + error.ErrorMessage();
	MessageBoxW(NULL, errorMsg.c_str(), L"Error", MB_ICONERROR);
}
