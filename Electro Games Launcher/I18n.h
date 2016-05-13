#pragma once
class I18n
{
public:
	I18n();
	~I18n();
	int GetSystemDefaultLocaleName(LPWSTR lpLocaleName, int cchLocaleName);
};

