#pragma once
#include <Windows.h>
#include "StringConverter.h"
using namespace std;

class ErrorLogger
{
public:
	static void Log(string message);
	static void Log(HRESULT hr, string message);
};

