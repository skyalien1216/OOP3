#include "LightBulb.h"
#include <time.h>

LightBulb::LightBulb() {
	color_light = " ";
}

LightBulb::~LightBulb()
{

}

std::string LightBulb::Light() {
	return color_light;
}

//std::string LightBulb::SetRandomForm()
//{
//	srand(time(NULL));
//
//	std::string form;
//	int num = abs(rand() % 3);
//
//	switch (num) {
//	case 0:
//		form = "���������";
//		break;
//
//	case 1:
//		form = "��������";
//		break;
//
//	case 2:
//		form = "��������";
//		break;
//	}
//
//	return form;
//}