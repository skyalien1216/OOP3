#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "�������";
}


GreenBulb::~GreenBulb() {}

double GreenBulb::ChanceOfBreaking(int time) {
	return 0.000055 * time + 0.0006;
}