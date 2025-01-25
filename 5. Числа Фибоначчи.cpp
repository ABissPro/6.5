﻿#include <iostream>

int main()
{
	system("chcp 1251"); // Установить кодировку
	int number;
	std::cout << "Введите номер последовательности: ";
	std::cin >> number;
	int a = 1; //первое число в последовательности Фибоначчи
	int b = 1; //второе число в последовательности Фибоначчи

	if (number <= 0) {
		std::cout << "Ошибка!";
	}
	if (std::cin.fail()) { //fail - ошибка в преобразовании введенных данных, в данном случае в тип int
		std::cout << "Ошибка: введенное значение не соответствует типу int." << "\n";
	}
	else {
		int count = 0;
		while (count != number) {
			int next = a + b;
			++count;
			if (count == number) break; //без выхода из цикла программа выводит следующую цифру после нужной
			a = b;
			b = next; //сдвиг значений
		}
		std::cout << "Число в последовательности: " << a;
	}
				
}

