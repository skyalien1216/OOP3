#include "RedBulb.h"


RedBulb::RedBulb() : LightBulb() {
	color_light = "красный";
}

RedBulb::~RedBulb() {

}

double RedBulb::ChanceOfBreaking(int time) {
	return 0.0000000025 * time + 0.03;
}
