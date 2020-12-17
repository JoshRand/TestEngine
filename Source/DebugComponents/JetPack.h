#pragma once
#include "../Core/Component.h"
#include <iostream>

class JetPack : public Component {
	bool toggle_jetpack_ = true;
	float fuel_ = 100.0f;
	float fuel_loss_rate_ = 0.05f;
	double time_ = 0;

public:
	void Initialize() override;
	void Update(double delta_time) override;
	void Exit() override;

};
