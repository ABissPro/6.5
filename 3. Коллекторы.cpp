
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    std::string name;
    int creditSum;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите сумму долга: ";
    std::cin >> creditSum;

    if (creditSum == 0) {
        std::cout << "Поздавляем!";
    }
    else if (creditSum < 0) {
        std::cout << "Ошибка! Стоп.";
    }
    else if (creditSum > 0) {
        int current = 0;
        while (current != creditSum) {
            int payment;
            std::cout << "Внесите сумму: ";
            std::cin >> payment;
            if (payment <= 0) {
                std::cout << "Ошибка!\n";
            }
            current += payment;
            if (current >= creditSum) break;

        }
        if (current > creditSum) {
            std::cout << "На вашем счету: +" << current - creditSum;
        }
        else {
            std::cout << "Ваш долг погашен!";
        }
    }

    
}


