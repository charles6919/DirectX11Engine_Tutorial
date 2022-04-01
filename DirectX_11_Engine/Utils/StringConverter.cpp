#include "StringConverter.h"

wstring StringConverter::StringToWide(string str)
{
	wstring wideStr(str.begin(), str.end());
	return wideStr;
}
