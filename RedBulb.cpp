#include "RedBulb.h"


RedBulb::RedBulb() : LightBulb() {
	color_light = "красный";
}

RedBulb::~RedBulb() {

}

std::string RedBulb::Light() {
	std::string str = color_light + " кружочек";
	return str;
}
