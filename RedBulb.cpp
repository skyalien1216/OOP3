#include "RedBulb.h"

RedBulb::RedBulb() : LightBulb() {
	color_light = "красный";
	LightBulb::AddNumberLight();
}

RedBulb::RedBulb(int timeOfLight) : RedBulb() {
	SetTimeOfLight(timeOfLight);
}

RedBulb::~RedBulb() {

}