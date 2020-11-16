#pragma once

#include "LightBulb.h"

class RedBulb:public LightBulb 
{
public:

	RedBulb();
	~RedBulb();

	double ChanceOfBreaking(int time) override;
};
