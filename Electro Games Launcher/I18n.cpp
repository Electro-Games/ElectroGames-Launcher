#include "I18n.h"
#include <WinUser.h>


I18n::I18n()
{
}


I18n::~I18n()
{
}

int GetSystemDefaultLocaleName(
	_Out_ LPWSTR lpLocaleName,
	_In_  int    cchLocaleName
);

int GetSystemDefaultLocaleName(LPWSTR lpLocaleName, int cchLocaleName)
{
	return 0;
}
