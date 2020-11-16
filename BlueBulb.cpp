#include "BlueBulb.h"

BlueBulb::BlueBulb() : LightBulb() {
	color_light = "синий";
}

BlueBulb::~BlueBulb() {}

double BlueBulb::ChanceOfBreaking(int time) {
	return 0.000012 * time + 0.0005;
}

