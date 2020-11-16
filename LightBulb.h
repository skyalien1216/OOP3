#pragma once

#include <string>

class LightBulb
{
protected:
	std::string color_light;

public:

	LightBulb();
	~LightBulb();

	virtual double ChanceOfBreaking(int time);
	std::string Light();
	
};
