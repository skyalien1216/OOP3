#pragma once

#include "LightBulb.h"

class BlueBulb : public LightBulb
{

public:
	BlueBulb();
	~BlueBulb();
	virtual std::string Light();
};
