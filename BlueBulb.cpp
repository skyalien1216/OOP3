#include "BlueBulb.h"

BlueBulb::BlueBulb() : LightBulb() {
	color_light = "�����";
}

BlueBulb::~BlueBulb() {}

std::string BlueBulb::Light() {
	std::string str = color_light + " ��������";
	return str;
}

