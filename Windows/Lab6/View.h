#ifndef VIEW_H
#define VIEW_H

#include "TypeEnum.h"
#include "Controller.h"
#include <iostream>
#include <sstream>
#include <conio.h>
#include <cstdlib>

class View
{
public:
	void Run();

private:
	View(const View&) = delete;
	View& operator=(const View&) = delete;

	void AddNewObject();
	void AddNewReference();
	void RemoveOldReference();
	void AllocateMemoryToExisting();
	void FreeAllocatedMemory();
	void InitiazlieAllocated();

private:
	int SelectIndex();
	TYPE SelectType();
	void ShowMenuOptions();
	void ShowModelData();

public:
	View();
	explicit View(Controller* controller);
	~View();

private:
	Controller * controller_;
};

#endif
