#include "vbCircleShape.h"

vbCircleShape::vbCircleShape(vbVec2 pos, float radius)
{
	m_position = pos; 
	m_radius = radius; 
	m_type = vbCollisionType::CIRCLE; 
}