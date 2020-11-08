#include "LightBulb.h"

int LightBulb::numberLights = 0;

void LightBulb::AddNumberLight() {
	numberLights++;
}

LightBulb::LightBulb() {
	color_light = " ";
}

void LightBulb::DeleteNumberLight(){
	numberLights--;
}

void LightBulb::SetNumberLights(int numberLights) {
	this->numberLights = numberLights;
}

int  LightBulb::GetNumberLights() {
	return numberLights;
}

std::string LightBulb::Light() {
	return color_light;
}