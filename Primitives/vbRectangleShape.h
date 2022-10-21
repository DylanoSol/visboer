#pragma once
#include "vbCollisionShape.h"

class vbRectangleShape :
    public vbCollisionShape
{
public: 
    vbRectangleShape(vbVec2 min, vbVec2 max); 

private: 
    vbVec2 m_minimum; 
    vbVec2 m_maximum; 

};

