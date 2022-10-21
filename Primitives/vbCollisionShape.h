#pragma once

#include "..\Math\vbVec2.h"

enum class vbCollisionType
{
	Undefined = 1 << 0,
	Rectangle = 1 << 1, 
	Circle = 1 << 2, 
};

class vbCollisionShape
{
public: 
	vbCollisionType GetCollisionType();

protected: 
	vbCollisionType m_type = vbCollisionType::Undefined; 

private: 

};

