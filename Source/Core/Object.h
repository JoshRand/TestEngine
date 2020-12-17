#pragma once
#include "Core.h"
#include <vector>
#include "Component.h"
class Object {
	// size_t index_;
	// component based architecture - an object can have many different components
	std::vector<Component*> component_list_;
	const char* object_name_;
	friend Core;
public:
	void Initialize();
	void Update(double);
	void Exit();
	const char*& GetObjectName();
	Object();
	~Object();

};