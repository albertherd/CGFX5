#pragma once
#include "core/common.hpp"

typedef void* EntityHandle;
#define NULL_ENTITY_HANDLE nullptr

struct BaseECSComponent
{
	static uint32 nextID();
	EntityHandle entity = NULL_ENTITY_HANDLE;
};

template<typename T>
struct ECSComponent : public BaseECSComponent
{
	static const ECSComponentCreateFunction CREATE_FUNCTION;
	static const ECSComponentFreeFunction FREE_FUNCTION;
	static const uint32 ID;
	static const size_t SIZE;
};

template<typename Component>
uint32 ECSComponentCreate(Array<uint8> &memory, EntityHandle entity, BaseECSComponent* comp)
{
	uint32 index = memory.size();
	memory.resize(index+ Component::SIZE)
}

template<typename T>
const uint32 ECSComponent<T>::ID(BaseECSComponent::nextID());

template<typename T>
const uint32 ECSComponent<T>::SIZE(sizeof(T));

struct TestComponent : ECSComponent<TestComponent>
{
	float x;
};