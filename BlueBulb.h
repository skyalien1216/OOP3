#pragma once

#include "LightBulb.h"

class BlueBulb : public LightBulb
{

public:
	BlueBulb();
	~BlueBulb();
	
	double ChanceOfBreaking(int time) override;
};
