#include "ecsComponent.hpp"
Array<std::tuple<ECSComponentCreateFunction, ECSComponentFreeFunction, size_t>>* BaseECSComponent::componentTypes;

uint32 BaseECSComponent::registerComponentType(ECSComponentCreateFunction createFn, ECSComponentFreeFunction freeFn, size_t size)
{
	if (componentTypes == nullptr) {
		componentTypes = new Array<std::tuple<ECSComponentCreateFunction, ECSComponentFreeFunction, size_t>>;
	}

	uint32 componentID = componentTypes->size();
	componentTypes->push_back(std::tuple<ECSComponentCreateFunction, ECSComponentFreeFunction, size_t>(createFn, freeFn, size));
	return componentID;
}