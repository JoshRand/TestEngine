#include "Component.h"
const char* ComponentTypeNames[]
{
	#define REGISTER(Name) #Name,
#include "../Registrations/ComponentMacros.inl"
#undef REGISTER
	"InvalidComponentTypesIndex"
};
ComponentType Component::getType()
{
	return type_;
}