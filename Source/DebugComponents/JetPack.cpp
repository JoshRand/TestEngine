#include "JetPack.h"

void JetPack::Initialize()
{

}
void JetPack::Update(double delta_time) 
{
	time_ += delta_time;
	if (time_ >= 1.0f)
	{
		time_ -= 1.0f;
		if (fuel_ >= 0 && toggle_jetpack_)
		{
			fuel_ -= fuel_loss_rate_;
			std::cout << "SWOOSH! PRRFFFFF!" << std::endl;
		}
		
	}
	
}
void JetPack::Exit() 
{

}