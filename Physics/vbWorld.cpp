#include "vbWorld.h"

vbWorld::vbWorld()
{

}

void vbWorld::AddRigidBody(vbPhysicsObject* object)
{
	m_worldObjects.push_back(object); 
}

void vbWorld::RemoveRigidBody(vbPhysicsObject* object)
{
	auto iter = std::find(m_worldObjects.begin(), m_worldObjects.end(), object); 
	m_worldObjects.erase(iter); 
}

void vbWorld::StepWorld()
{

}