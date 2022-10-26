#pragma once

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
	vbPhysicsObject(); 

private: 
	vbObjectType m_objectType = vbObjectType::UNDEFINED; 
};

