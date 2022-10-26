#pragma once
#include "vbPhysicsObject.h"
#include <vector>
class vbWorld
{
public: 
	vbWorld(); 

	//An object has to be added to the physics world in order to have physics responses. 
	void AddRigidBody(vbPhysicsObject* object);
	void RemoveRigidBody(vbPhysicsObject* object); 
	void StepWorld(); 

private:
	std::vector<vbPhysicsObject*> m_worldObjects; 
};

