#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "зеленый";
}


GreenBulb::~GreenBulb() {}

std::string GreenBulb::Light() {
	std::string str = color_light + " кружочек";
	return str;
}
