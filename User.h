#pragma once

#include "LightBulb.h"

class User
{
public:
	static void CreatingLamp(LightBulb lamps[], int numberOfLamps);
	static void TurnOnOneLight(LightBulb* light, std::string color_choice);
	static void TurnOnManyLight(LightBulb light[]);
	static void TurnOnManySlowlyLight(LightBulb light[]);
	static void TurnOnConstantLight(LightBulb lamps[]);
	static void TurnOnOneFlickeringLight(LightBulb* light, std::string user_color);
	static void TurnOnOneSlowlyFlickeringLight(LightBulb* light, std::string user_color);

};
