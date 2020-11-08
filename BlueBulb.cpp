#include "BlueBulb.h"

BlueBulb::BlueBulb() : LightBulb() {
	color_light = "�����";
	LightBulb::AddNumberLight();
}

BlueBulb::BlueBulb(int timeOfLight) : BlueBulb() {
	SetTimeOfLight(timeOfLight);
}

BlueBulb::~BlueBulb() {}
