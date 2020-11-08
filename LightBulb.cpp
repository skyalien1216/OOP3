#include "LightBulb.h"

int LightBulb::numberLights = 0;


LightBulb::LightBulb() {
	color_light = " ";
}

void LightBulb::AddNumberLight() {
	numberLights++;
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