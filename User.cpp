#include "User.h"

#include "RedBulb.h"
#include "BlueBulb.h"
#include "GreenBulb.h"

#include <iostream>
#include <windows.h>

User::User(int numberOfLamps) {

	lamp = new LightBulb[numberOfLamps];

	for (int i = 0; i < numberOfLamps; i++)
	{
		if (i % 3 == 0)
			lamp[i] = RedBulb();

		if (i % 3 == 1)
			lamp[i] = BlueBulb();

		if (i % 3 == 2)
			lamp[i] = GreenBulb();
	}
}

void User::TurnOnOneLight(std::string color_choice)
{
	for (int i = 0; i < lamp->GetNumberLights(); i++)
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
			for (int i = 0; i < lamp->GetNumberLights(); i++)
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
			for (int i = 0; i < lamp->GetNumberLights(); i++)
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
	for (int i = 0; i < lamp->GetNumberLights(); i++)
	{
		std::cout << std::endl;
		std::cout << lamp[i].Light() << std::endl;
	}
}

