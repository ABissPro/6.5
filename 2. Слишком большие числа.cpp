
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;
    //посчитать количество цифр в числе
    int count = 0;

    while (number != 0) {
        number /= 10;
        ++count;
    }
    
    std::cout << "Количество цифр в числе: " << count;
}

