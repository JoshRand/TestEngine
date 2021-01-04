#pragma once
#include <vector>
class Component;
class Object {
	// size_t index_;
	// component based architecture - an object can have many different components
	std::vector<Component*> component_list_;
	const char* object_name_;
	friend class Core;
public:
	void Initialize();
	void Update(double);
	void Exit();
	const char*& GetObjectName();
	Object();
	~Object();

};