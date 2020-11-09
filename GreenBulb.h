#pragma once

#include "LightBulb.h"

class GreenBulb : public LightBulb
{
public:
	
	GreenBulb();
	~GreenBulb();
	virtual std::string Light();
};