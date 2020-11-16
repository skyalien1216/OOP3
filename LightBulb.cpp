#include "LightBulb.h"
#include <time.h>

LightBulb::LightBulb() {
	color_light = " ";
}

LightBulb::~LightBulb()
{

}

double LightBulb::ChanceOfBreaking(int time)
{
	return 0;
}

std::string LightBulb::Light() {
	return color_light;
}

