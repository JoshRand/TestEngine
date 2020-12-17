#pragma once
class Component {
	const char* component_name_;

public:
	const char*& GetComponentName();
	void Initialize();
	void Update();
	void Exit();
};