#include <iostream>
#include <string>
#include <windows.h>

#include "User.h"

void Info();
std::string ColorPicker();
int EnteringNumberOfLights();
int EnteringTime();

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 

	User user(EnteringNumberOfLights());

	std::cout << user.ToString();
	
	while (1) {

		int user_choce;
		std::cout << std::endl;

		Info();
		
		std::cin >> user_choce;
		system("cls");


		switch (user_choce)
		{
		case 1:

			std::cout << "1. �������" << std::endl;
			std::cout << std::endl;

			user.TurnOnManyLight();
			break;

		case 2:

			std::cout << "2. ���������� ����" << std::endl;
			std::cout << std::endl;
			
			user.TurnOnConstantLight();
			std::cin.ignore();
			std::cin.get();
			system("cls");
			break;

		case 3:

			std::cout << "3. ���� ���� ���������� ����" << std::endl;
			std::cout << std::endl;

			user.TurnOnOneLight(ColorPicker());
			std::cin.ignore();
			std::cin.get();
			system("cls");
			break;

		case 4:
		{
			std::cout << "4. ���� ���� �������" << std::endl;
			std::cout << std::endl;

			user.TurnOnOneFlickeringLight(ColorPicker());
			system("cls");
		}
			  break;

		case 5:
		{
			std::cout << "5. ���� ���� ��������" << std::endl;
			std::cout << std::endl;

			user.TurnOnOneSlowlyFlickeringLight(ColorPicker());
			system("cls");
		}
		break;

		case 6:
			std::cout << "6. ��������" << std::endl;
			std::cout << std::endl;
		
			user.TurnOnManySlowlyLight();
			break;

		case 7:
			std::cout << "7. ���� ������� �� ��������� �����" << std::endl << std::endl;

			std::cout << user.InfoAboutBreaking(EnteringTime());
			break;
		default:
			return 0;

		}
	}
	return 0;
}


void Info() {
	std::cout << "1. �������" << std::endl;
	std::cout << "2. ���������� ����" << std::endl;
	std::cout << "3. ���� ���� ���������� ����" << std::endl;
	std::cout << "4. ���� ���� �������" << std::endl;
	std::cout << "5. ���� ���� ��������" << std::endl;
	std::cout << "6. ��������" << std::endl;
	std::cout << "7. ���� ������� �� ��������� �����" << std::endl;
	std::cout << "����� ������ ������ - ��������� ������" << std::endl;
	std::cout << std::endl;
	std::cout << "������� �����: " << std::endl << "> ";
}

std::string ColorPicker() {
	std::string user_color;
	std::cout << "������� ���� (�������, �������, �����):" << std::endl;
	std::cin >> user_color;

	while (user_color != "�������" && user_color != "�������" && user_color != "�����") {
		std::cout << "��� ������ �����!!\n";
		std::cout << "������� ���� (�������, �������, �����):" << std::endl;
		std::cin >> user_color;
	}
	system("cls");
	return user_color;
}

int EnteringNumberOfLights() {
	std::cout << "������� ����� ��� ��������� ���������� �������� : " << std::endl;
	int numberOfLamps;
	std::cin >> numberOfLamps;

	if (numberOfLamps <= 0 || numberOfLamps > 30) {
		std::cout << "������������ �����!\n";
		EnteringNumberOfLights();
	}
	return numberOfLamps;
}

int EnteringTime() {
	int time;
	std::cout << "������� �����:" << std::endl;
	std::cin >> time;

	while (time < 0 || time > 11) {
		std::cout << "������������ �����!\n";
		std::cout << "������� �����:" << std::endl;
		std::cin >> time;
	}
	system("cls");
	return time;
}