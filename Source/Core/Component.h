#pragma once
enum ComponentType
{
#define REGISTER(Name) CT_ ## Name,
	#include "../Registrations/ComponentMacros.inl"
#undef	REGISTER
	NumberOfComponentTypes
};
class Component {
	ComponentType type_;

public:
	virtual void Initialize() = 0;
	virtual void Update(float delta_time);
	virtual void Exit() = 0;

	ComponentType getType();
};