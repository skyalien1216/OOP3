#pragma once

#include "LightBulb.h"

class RedBulb:public LightBulb 
{
public:

	RedBulb();
	RedBulb(int timeOfLight);
	~RedBulb();
};
