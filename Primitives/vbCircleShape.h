#pragma once
#include "vbCollisionShape.h"

class vbCircleShape :
    public vbCollisionShape
{
public:
    vbCircleShape(vbVec2 pos, float radius); 


private: 
    vbVec2 m_position; 
    float m_radius = 0.f; 
};

