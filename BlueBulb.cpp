#include "BlueBulb.h"

BlueBulb::BlueBulb() : LightBulb() {
	color_light = "синий";
}

BlueBulb::~BlueBulb() {}

std::string BlueBulb::Light() {
	std::string str = color_light + " кружочек";
	return str;
}

