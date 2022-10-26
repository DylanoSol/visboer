#pragma once

#include "../Primitives/vbCollisionShape.h"

enum class vbObjectType
{
	UNDEFINED = 1 << 0,
	TRIGGER_VOLUME = 1 << 1,
	DYNAMIC_OBJECT = 1 << 2,
	STATIC_OBJECT = 1 << 3
};

class vbPhysicsObject
{
public: 
	//Make sure to pass a shape and a mass. Read the documentation to see what certain masses do. 
	vbPhysicsObject(vbCollisionShape* shape, float mass); 

	vbCollisionShape* m_shape = nullptr;
	float m_mass = 0.f; 

	//This function solely exists as a safeguard. Do not use this to create dynamic objects. 
	void SetObjectType(vbObjectType type); 

private: 
	vbObjectType m_objectType = vbObjectType::UNDEFINED; 
};

