

#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int hour;
    std::cout << "Который час? Введите число до 12 включительно: ";
    std::cin >> hour;

    if (hour < 0 || hour > 12) {
    std::cout << "Введено некорректное значение!";
    }
    else {
        int count = 0;
        while (count != hour) {
            std::cout << "Ку-ку!\n";
            ++count;
        }
    }
}

