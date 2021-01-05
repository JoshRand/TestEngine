
#include <iostream>
#include <vector>
#include "Window.h"
class Object;
class Core {

	bool engine_running_ = true;

	float total_time_;
	float test_time_;
	double delta_time_;
	long long initial_time_;
	long long final_time_;
	Window* window;
	std::vector<Object*> objects_;
	Input* input;
public:
	
	void Initialize();
	void Exit();
	void Update();
	//Object* CreateObject();

};

extern Core core;