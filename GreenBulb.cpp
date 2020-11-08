#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "зеленый";
	LightBulb::AddNumberLight();
}

GreenBulb::GreenBulb(int timeOfLight) : GreenBulb() {
	SetTimeOfLight(timeOfLight);
}

GreenBulb::~GreenBulb() {}