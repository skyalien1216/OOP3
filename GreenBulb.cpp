#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "�������";
	LightBulb::AddNumberLight();
}

GreenBulb::GreenBulb(int timeOfLight) : GreenBulb() {
	SetTimeOfLight(timeOfLight);
}

GreenBulb::~GreenBulb() {}