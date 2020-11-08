#include "User.h"

#include "RedBulb.h"
#include "BlueBulb.h"
#include "GreenBulb.h"

#include <iostream>
#include <windows.h>

void User::CreatingLamp(LightBulb lamps[], int numberOfLamps) {
	for (int i = 0; i < numberOfLamps; i++)
	{
		if (i % 3 == 0)
			lamps[i] = RedBulb();

		if (i % 3 == 1)
			lamps[i] = BlueBulb();

		if (i % 3 == 2)
			lamps[i] = GreenBulb();
	}
}

void User::TurnOnOneLight(LightBulb* light, std::string color_choice)
{
	for (int i = 0; i < light->GetNumberLights(); i++)
	{
		std::cout << std::endl;
		if (light[i].Light() == color_choice)
			std::cout << light[i].Light() << std::endl;
		else 
			std::cout << " > "  << std::endl;
	}

}

void User::TurnOnOneFlickeringLight(LightBulb* light, std::string user_color)
{
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			std::cout << std::endl;
			User::TurnOnOneLight(light, user_color);
		}
		Sleep(500);
		system("cls");
	}
}

void User::TurnOnOneSlowlyFlickeringLight(LightBulb* light, std::string user_color)
{
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			std::cout << std::endl;
			User::TurnOnOneLight(light, user_color);
		}
		Sleep(1200);
		system("cls");
	}
}

void User::TurnOnManyLight(LightBulb light[])
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < light->GetNumberLights(); i++)
			{
				std::cout << std::endl;
				std::cout << light[i].Light() << std::endl;
			}
		}
		Sleep(500);
		system("cls");
	}
}

void User::TurnOnManySlowlyLight(LightBulb light[])
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < light->GetNumberLights(); i++)
			{
				std::cout << std::endl;
				std::cout << light[i].Light() << std::endl;
			}
		}
		Sleep(1200);
		system("cls");
	}
}

void User::TurnOnConstantLight(LightBulb lamps[]) 
{
	for (int i = 0; i < lamps->GetNumberLights(); i++)
	{
		std::cout << std::endl;
		std::cout << lamps[i].Light() << std::endl;
	}
}

