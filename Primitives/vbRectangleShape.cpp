#include "vbRectangleShape.h"


vbRectangleShape::vbRectangleShape(vbVec2 min, vbVec2 max)
{
	m_minimum = min; 
	m_maximum = max; 
	m_type = vbCollisionType::RECTANGLE; 
}