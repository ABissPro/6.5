

#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int hour;
    std::cout << "Который час? Введите число до 12 включительно: ";
    std::cin >> hour;

    int count = 0;
    while (count != hour) {
        std::cout << "Ку-ку!\n";
        ++count;
    }
}

