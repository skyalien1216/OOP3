#include "RedBulb.h"


RedBulb::RedBulb() : LightBulb() {
	color_light = "�������";
}

RedBulb::~RedBulb() {

}

std::string RedBulb::Light() {
	std::string str = color_light + " ��������";
	return str;
}
