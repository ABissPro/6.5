
#include <iostream>

int main()
{
	system("chcp 1251"); // Установить кодировку
	int deposit;
	int rate;
	int wantedSum;
	std::cout << "Введите размер вклада: ";
	std::cin >> deposit;
	std::cout << "Введите процентную ставку: ";
	std::cin >> rate;
	std::cout << "Введите желаемую сумму: ";
	std::cin >> wantedSum;

	int count = 0;
	if (std::cin.fail()) { //fail - ошибка в преобразовании введенных данных, в данном случае в тип int
		std::cout << "Ошибка: введенное значение не соответствует типу int." << "\n";
	}
	if (deposit <= 0 || rate <= 0 || wantedSum <= 0) {
		std::cout << "Ошибка! Введите положительное число" << "\n";
	}
	
			
	while (deposit < wantedSum) {
		deposit += deposit * rate / 100;
		++count;
		if (deposit >= wantedSum) break;
		
	}

	std::cout << "Придется подождать: " << count << " лет.";

}
