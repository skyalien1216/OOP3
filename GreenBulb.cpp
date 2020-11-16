#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "зеленый";
}


GreenBulb::~GreenBulb() {}

double GreenBulb::ChanceOfBreaking(int time) {
	return 0.000055 * time + 0.0006;
}