#include "vbCircleShape.h"

vbCircleShape::vbCircleShape(float radius)
{ 
	m_radius = radius; 
	m_collisionType = vbCollisionType::CIRCLE; 
}