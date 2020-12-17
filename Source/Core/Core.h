#include <iostream>
#include <vector>
#include "Object.h"
class Core {

	bool engine_running_ = true;

	float total_time_;
	float test_time_;
	double delta_time_;
	long long initial_time_;
	long long final_time_;

	std::vector<Object*> objects_;

public:
	
	void Initialize();
	void Exit();
	void Update();
	Object* CreateObject();

};

extern Core core;