#include <iostream>
class Core {

	bool engine_running_ = true;

	float total_time_;
	float test_time_;
	double delta_time_;
	long long initial_time_;
	long long final_time_;

public:
	
	void Initialize();
	void Exit();
	void Update();


};

extern Core core;