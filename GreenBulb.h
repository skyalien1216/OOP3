#pragma once

#include "LightBulb.h"

class GreenBulb : public LightBulb
{
public:
	
	GreenBulb();
	~GreenBulb();

	double ChanceOfBreaking(int time) override;
};