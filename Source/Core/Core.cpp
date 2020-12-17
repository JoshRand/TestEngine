#pragma once
#include <chrono>
#include "Core.h"
#define TIME_NOW std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()

Core core;

void Core::Initialize()
{
	initial_time_ = TIME_NOW;
	test_time_ = 0;
}
void Core::Exit()
{

}
void Core::Update()
{
	// (tf - ti) / 1000 = our delta time in seconds
	final_time_ = TIME_NOW;
	delta_time_ = (double(final_time_ - initial_time_) / 1000.0);
	initial_time_ = final_time_;

	total_time_ += delta_time_;
	test_time_ += delta_time_;

	for (auto it = objects_.begin(); it != objects_.end(); ++it)
		(*it)->Update(delta_time_);

	if (test_time_ >= 1.0f)
	{
		test_time_ -= 1.0f;
		std::cout << "Core frame " << total_time_ << std::endl;

	}
}
Object* Core::CreateObject() {

}
