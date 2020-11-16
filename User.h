#pragma once

#include "LightBulb.h"

class User
{
	LightBulb* lamp;
	int numberLights;

public:

	User(int numberOfLamps);
	~User();

	 void TurnOnOneLight(std::string color_choice);
	 void TurnOnManyLight();
	 void TurnOnManySlowlyLight();
	 void TurnOnConstantLight();
	 void TurnOnOneFlickeringLight(std::string user_color);
	 void TurnOnOneSlowlyFlickeringLight(std::string user_color);

	 void AddNumberLight();
	 void DeleteNumberLight();

	 void SetNumberLights(int numberLights);
	 int GetNumberLights();

	 std::string ToString();
	 std::string InfoAboutBreaking(int time);
};
