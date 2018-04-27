#include "CSGuard.h"

void CSGuard::enterSection()
{
	if (!this->_in)
	{
		EnterCriticalSection(_criticalSectionPointer);
		this->_in = true;
	}
}

void CSGuard::leaveSection()
{
	if (this->_in)
	{
		LeaveCriticalSection(_criticalSectionPointer);
		this->_in = false;
	}
}

CSGuard::CSGuard(LPCRITICAL_SECTION criticalSectionPointer) :
	_criticalSectionPointer(criticalSectionPointer), _in(false)
{
}

CSGuard::~CSGuard()
{
	if(this->_in)
		LeaveCriticalSection(_criticalSectionPointer);
}

