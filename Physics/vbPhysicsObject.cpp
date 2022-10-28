#include "vbPhysicsObject.h"

vbPhysicsObject::vbPhysicsObject(vbCollisionShape* shape, float mass)
{
	m_shape = shape; 
	m_mass = mass; 

	if (m_mass > 0 + 0.000000001f)
	{
		m_objectType = vbObjectType::DYNAMIC_OBJECT; 
	}
	else if (m_mass < 0 - 0.000000001f)
	{
		m_objectType = vbObjectType::TRIGGER_VOLUME; 
	} 
	else
	{
		m_objectType = vbObjectType::STATIC_OBJECT; 
	}

}


void vbPhysicsObject::SetObjectType(vbObjectType type)
{
	m_objectType = type; 
}

vbObjectType vbPhysicsObject::GetObjectType()
{
	return m_objectType; 
}

vbCollisionType vbPhysicsObject::GetCollisionType()
{
	return m_shape->GetCollisionType();
}

void vbPhysicsObject::Update()
{

}