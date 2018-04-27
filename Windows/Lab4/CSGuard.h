#pragma once
#include <windows.h>

class CSGuard
{
public:
	void leaveSection();
	void enterSection();

	CSGuard(LPCRITICAL_SECTION criticalSectionPointer);
	~CSGuard();
	CSGuard(const CSGuard&) = delete;
	CSGuard& operator=(const CSGuard&) = delete;
private:
	LPCRITICAL_SECTION criticalSectionPointer_;
	bool in_;
};
