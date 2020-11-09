#pragma once

#include "LightBulb.h"

class RedBulb:public LightBulb 
{
public:

	RedBulb();
	~RedBulb();

	std::string Light();
};
