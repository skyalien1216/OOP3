#pragma once

#include "LightBulb.h"

class User
{
	LightBulb* lamp;

public:

	User(int numberOfLamps);

	 void TurnOnOneLight(std::string color_choice);
	 void TurnOnManyLight();
	 void TurnOnManySlowlyLight();
	 void TurnOnConstantLight();
	 void TurnOnOneFlickeringLight(std::string user_color);
	 void TurnOnOneSlowlyFlickeringLight(std::string user_color);

};
