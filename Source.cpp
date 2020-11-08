#include <iostream>
#include <string>
#include <windows.h>

#include "LightBulb.h"

#include "RedBulb.h"
#include "BlueBulb.h"
#include "GreenBulb.h"

#include "User.h"

void Info();
std::string ColorPicker();

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите число для установки количества лампочек : " << std::endl;
	int numberOfLamps;
	std::cin >> numberOfLamps;

	while (numberOfLamps <= 0 || numberOfLamps > 30) {
		std::cout << "Некорректное число!Введите заново: ";
		std::cin >> numberOfLamps;
	}
		
	std::cout << std::endl;

	LightBulb* lamps = new LightBulb[numberOfLamps];

	User::CreatingLamp(lamps, numberOfLamps);
	
	while (1) {

		int user_choce;
		std::cout << std::endl;

		Info();
		
		std::cin >> user_choce;
		system("cls");

		switch (user_choce)
		{
		case 1:

			std::cout << "1. Мигание" << std::endl;
			std::cout << std::endl;

			User::TurnOnManyLight(lamps);
			break;

		case 2:

			std::cout << "2. Постоянный свет" << std::endl;
			std::cout << std::endl;
			
			User::TurnOnConstantLight(lamps);
			std::cin.ignore();
			std::cin.get();
			break;

		case 3:

			std::cout << "3. Один цвет постоянный свет" << std::endl;
			std::cout << std::endl;

			User::TurnOnOneLight(lamps, ColorPicker());
			break;

		case 4:
		{
			std::cout << "4. Один цвет мигание" << std::endl;
			std::cout << std::endl;

			User::TurnOnOneFlickeringLight(lamps, ColorPicker());
		}
			  break;

		case 5:
		{
			std::cout << "5. Один цвет мерцание" << std::endl;
			std::cout << std::endl;

			User::TurnOnOneSlowlyFlickeringLight(lamps, ColorPicker());
		}
		break;

		case 6:
			std::cout << "6. Мерцание" << std::endl;
			std::cout << std::endl;
		
			User::TurnOnManySlowlyLight(lamps);
			break;

		case 7:
			system("cls");
			break;

		default:
			return 0;

		}
	}
	return 0;
}



void Info() {

	std::cout << "1. Мигание" << std::endl;
	std::cout << "2. Постоянный свет" << std::endl;
	std::cout << "3. Один цвет постоянный свет" << std::endl;
	std::cout << "4. Один цвет мигание" << std::endl;
	std::cout << "5. Один цвет мерцание" << std::endl;
	std::cout << "6. Мерцание" << std::endl;
	std::cout << "7. Очистить экран" << std::endl;
	std::cout << "Любой другой символ - закончить работу" << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цифру: " << std::endl << "> ";
}

std::string ColorPicker() {
	std::string user_color;
	std::cout << "Введите цвет (красный, зеленый, синий):" << std::endl;
	std::cin >> user_color;
	std::cout << std::endl;
	return user_color;
}