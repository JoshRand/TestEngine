#pragma once
#include "Object.h"

#include "Component.h"

void Object::Initialize()
{

}

void Object::Update(double delta_time)
{
	for (auto it = component_list_.begin(); it != component_list_.end(); ++it)
		(*it)->Update(delta_time);
}

void Object::Exit()
{

}

const char*& Object::GetObjectName()
{
	return this->object_name_;
}


Object::Object()
{

}

Object::~Object() 
{

}