#include "User.h"

#include "RedBulb.h"
#include "BlueBulb.h"
#include "GreenBulb.h"

#include <iostream>
#include <windows.h>
#include <sstream>


User::User(int numberOfLamps) {

	numberLights = numberOfLamps;
	lamp = new LightBulb[numberLights];

	for (int i = 0; i < numberLights; i++)
	{
		if (i % 3 == 0)
			lamp[i] = RedBulb();

		if (i % 3 == 1)
			lamp[i] = BlueBulb();

		if (i % 3 == 2)
			lamp[i] = GreenBulb();
	}
}

User::~User()
{
	delete[] lamp;
}

void User::TurnOnOneLight(std::string color_choice)
{
	for (int i = 0; i < numberLights; i++)
	{
		std::cout << std::endl;
		if (lamp[i].Light() == color_choice)
			std::cout << lamp[i].Light() << std::endl;
		else 
			std::cout << " > "  << std::endl;
	}

}

void User::TurnOnOneFlickeringLight(std::string user_color)
{
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			std::cout << std::endl;
			User::TurnOnOneLight(user_color);
		}
		Sleep(500);
		system("cls");
	}
}

void User::TurnOnOneSlowlyFlickeringLight(std::string user_color)
{
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			std::cout << std::endl;
			User::TurnOnOneLight(user_color);
		}
		Sleep(1200);
		system("cls");
	}
}

void User::TurnOnManyLight()
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < numberLights; i++)
			{
				std::cout << std::endl;
				std::cout << lamp[i].Light() << std::endl;
			}
		}
		Sleep(500);
		system("cls");
	}
}

void User::TurnOnManySlowlyLight()
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < numberLights; i++)
			{
				std::cout << std::endl;
				std::cout << lamp[i].Light() << std::endl;
			}
		}
		Sleep(1200);
		system("cls");
	}
}

void User::TurnOnConstantLight() 
{
	for (int i = 0; i < numberLights; i++)
	{
		std::cout << std::endl;
		std::cout << lamp[i].Light() << std::endl;
	}
}

void User::AddNumberLight() {
	numberLights++;
}

void User::DeleteNumberLight() {
	numberLights--;
}

void User::SetNumberLights(int numberLights) {
	this->numberLights = numberLights;
}

int User::GetNumberLights() {
	return numberLights;
}

std::string User::ToString()
{
	std::stringstream s;

	s << "Количество лампочек в гирлянде: " << numberLights << std::endl << "Цвета гирлянды: \n";
	for (int i = 0; i < numberLights; i++)
		s << lamp[i].Light() << std::endl;

	return s.str();
}

std::string User::InfoAboutBreaking(int time)
{
	std::stringstream s;

	RedBulb red;
	s << "Красный:" << std::endl
		<< red.ChanceOfBreaking(time) << std::endl;

	BlueBulb blue;
	s << "Синий:" << std::endl
		<< blue.ChanceOfBreaking(time) << std::endl;

	GreenBulb green;
	s << "Зеленый:" << std::endl
		<< green.ChanceOfBreaking(time) << std::endl;

	return s.str();
}
