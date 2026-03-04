#include <iostream>
#include <windows.h>

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string puzzle = "малина";
	std::string userAnswer;

	do {
		std::cout << "Введите имя : ";
		std::cin >> userAnswer;
	} while (userAnswer == puzzle);


	std::cout << "Правильно! Вы победили! Загаданное слово — " << puzzle;


}
