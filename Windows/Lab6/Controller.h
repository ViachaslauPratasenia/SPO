#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "TypeEnum.h"
#include "Model.h"
#include <sstream>

class Controller
{
private:
	Controller(const Controller&) = delete;
	Controller& operator=(const Controller&) = delete;

public:
	Model* GetModel();
	void PushNewObject(TYPE type, int size);
	void AddReference(TYPE type, int index);
	void RemoveReference(TYPE type, int index);
	void AllocateTo(TYPE type, int index, size_t size);
	void FreeFrom(TYPE type, int index);
	void InitializeAt(TYPE type, int index, std::string str);

public:
	Controller();
	explicit Controller(Model* model);
	~Controller();

private:
	Model* model_;
};

#endif
