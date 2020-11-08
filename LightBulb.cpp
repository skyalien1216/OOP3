#include "LightBulb.h"

int LightBulb::numberLights = 0;

void LightBulb::AddNumberLight() {
	numberLights++;
}

LightBulb::LightBulb() {
	color_light = " ";
	timeOfLight = 0;
}

void LightBulb::DeleteNumberLight(){
	numberLights--;
}

void LightBulb::SetNumberLights(int numberLights) {
	this->numberLights = numberLights;
}

void LightBulb::SetTimeOfLight(int timeOfLight) {
	this->timeOfLight = timeOfLight;
}

int  LightBulb::GetNumberLights() {
	return numberLights;
}

int LightBulb::GetTimeOfLight() {
	return timeOfLight;
}

std::string LightBulb::Light() {
	return color_light;
}