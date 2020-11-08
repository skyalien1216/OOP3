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

void User::TurnOnOneLight(LightBulb* light)
{
	for (int i = 0; i < light->GetNumberLights()-1; i++)
	{
		std::cout << std::endl;
		std::cout << light->Light() << std::endl;
	}

}

void User::TurnOnOneFlickeringLight(std::string user_color)
{
	if (user_color == "красный")
	{
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) {
				std::cout << std::endl;
				User::TurnOnOneLight(new RedBulb());
				LightBulb::DeleteNumberLight();
			}
			Sleep(500);
			system("cls");
		}
	}
	else
		if (user_color == "зеленый")
		{
			for (int i = 0; i < 10; i++) {
				if (i % 2 == 0) {
					std::cout << std::endl;
					User::TurnOnOneLight(new GreenBulb());
					LightBulb::DeleteNumberLight();
				}
				Sleep(500);
				system("cls");
			}
		}
		else
			if (user_color == "синий")
			{
				for (int i = 0; i < 10; i++) {
					if (i % 2 == 0) {
						std::cout << std::endl;
						User::TurnOnOneLight(new BlueBulb());
						LightBulb::DeleteNumberLight();
					}
					Sleep(500);
					system("cls");
				}
			}
			else std::cout << "Нет такого цвета\n";

}

void User::TurnOnOneSlowlyFlickeringLight(std::string user_color)
{
	if (user_color == "красный")
	{
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) {
				std::cout << std::endl;
				User::TurnOnOneLight(new RedBulb());
				LightBulb::DeleteNumberLight();
			}
			Sleep(1200);
			system("cls");
		}
	}
	else
		if (user_color == "зеленый")
		{
			for (int i = 0; i < 10; i++) {
				if (i % 2 == 0) {
					std::cout << std::endl;
					User::TurnOnOneLight(new GreenBulb());
					LightBulb::DeleteNumberLight();
				}
				Sleep(1200);
				system("cls");
			}
		}	
		else 
			if (user_color == "синий")
			{
				for (int i = 0; i < 10; i++) {
					if (i % 2 == 0) {
						std::cout << std::endl;
						User::TurnOnOneLight(new BlueBulb());
						LightBulb::DeleteNumberLight();
					}
					Sleep(1200);
					system("cls");
				}
			}
			else std::cout << "Нет такого цвета\n";
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

