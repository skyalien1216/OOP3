#pragma once

#include <string>

class LightBulb
{
	static int numberLights;

protected:

	std::string color_light;
	static void AddNumberLight();

public:
	LightBulb();

	static void DeleteNumberLight();

	void SetNumberLights(int numberLights);
	int GetNumberLights();

	std::string Light();

};
