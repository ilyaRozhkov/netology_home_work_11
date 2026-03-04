#include <iostream>
#include <windows.h>

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string firstName;
	std::string lastName;

	std::cout << "Введите имя : ";
	std::cin >> firstName;

	std::cout << "Введите фамилию: ";
	std::cin >> lastName;

	std::cout << "Здравствуйте, " << firstName << " " << lastName << "!";


}
