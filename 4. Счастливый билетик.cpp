

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
    int current;

    
    while (number != 0) {
        oneDigit = number % 10;
        rightSum += oneDigit;
        number /= 10;
        if (number < 1000) break;
        current = number;
    }
    std::cout << "Сумма цифр справа: " << rightSum << "\n";
   
    while (number != 0) {
        oneDigit = number % 10;
        leftSum += oneDigit;
        number /= 10;
        current = number;
    }
    std::cout << "Сумма цифр слева: " << leftSum << "\n";

    if (rightSum == leftSum) {
        std::cout << "Билетик счастливый!!!";
    }
    else {
        std::cout << "Повезёт в следующий раз!";
    }
}


