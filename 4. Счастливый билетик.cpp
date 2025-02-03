

#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int number;
    std::cout << "Введите номер билетика: ";
    std::cin >> number;
    int leftSum = 0;
    int rightSum = 0;
    int oneDigit;

        while (number != 0) {
            oneDigit = number % 10;
            if (number > 1000) {
                rightSum += oneDigit;
            }
            else {
                leftSum += oneDigit;
            }
            number /= 10;
        }

    std::cout << "Сумма цифр справа: " << rightSum << "\n";
    std::cout << "Сумма цифр слева: " << leftSum << "\n";

    if (rightSum == leftSum) {
        std::cout << "Билетик счастливый!!!";
    }
    else {
        std::cout << "Повезёт в следующий раз!";
    }
}


