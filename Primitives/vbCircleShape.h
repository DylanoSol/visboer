#pragma once
#include "vbCollisionShape.h"

class vbCircleShape :
    public vbCollisionShape
{
public:
    vbCircleShape(float radius); 

private: 
    float m_radius = 0.f; 
};

