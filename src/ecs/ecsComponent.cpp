#include "ecsComponent.hpp"

static uint32 componentID = 0;

static uint32 BaseECSComponent::nextID()
{
	return componentID++;
}