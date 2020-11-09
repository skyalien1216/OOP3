#pragma once

#include <string>

class LightBulb
{
protected:
	std::string color_light;
	//std::string form;

public:

	LightBulb();
	~LightBulb();

	 virtual std::string Light();
	//std::string SetRandomForm();
};
