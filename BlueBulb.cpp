#include "BlueBulb.h"

BlueBulb::BlueBulb() : LightBulb() {
	color_light = "синий";
	LightBulb::AddNumberLight();
}

BlueBulb::~BlueBulb() {}
