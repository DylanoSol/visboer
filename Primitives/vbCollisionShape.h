#pragma once

#include "..\Math\vbVec2.h"

enum class vbCollisionType
{
	UNDEFINED = 1 << 0,
	RECTANGLE = 1 << 1, 
	CIRCLE = 1 << 2, 
};

class vbCollisionShape
{
public: 
	vbCollisionType GetCollisionType();

protected: 
	vbCollisionType m_type = vbCollisionType::UNDEFINED; 

private: 

};

