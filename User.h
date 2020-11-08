#pragma once

#include "LightBulb.h"

class User
{
public:
	static void CreatingLamp(LightBulb lamps[], int numberOfLamps);
	static void TurnOnOneLight(LightBulb* light);
	static void TurnOnManyLight(LightBulb light[]);
	static void TurnOnManySlowlyLight(LightBulb light[]);
	static void TurnOnConstantLight(LightBulb lamps[]);
	static void TurnOnOneFlickeringLight(std::string user_color);
	static void TurnOnOneSlowlyFlickeringLight(std::string user_color);

};
