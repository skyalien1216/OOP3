#include "GreenBulb.h"

GreenBulb::GreenBulb() : LightBulb() {
	color_light = "�������";
}


GreenBulb::~GreenBulb() {}

std::string GreenBulb::Light() {
	std::string str = color_light + " ��������";
	return str;
}
