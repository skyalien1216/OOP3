#pragma once

#include <string>

class LightBulb
{
	int timeOfLight;
	static int numberLights;

protected:

	std::string color_light;
	static void AddNumberLight();

public:
	LightBulb();

	static void DeleteNumberLight();

	void SetNumberLights(int numberLights);
	void SetTimeOfLight(int timeOfLight);

	int GetNumberLights();
	int GetTimeOfLight();

	std::string Light();

};
