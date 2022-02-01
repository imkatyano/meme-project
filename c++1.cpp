// c++1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <string>
// #include "summa.h"
#include "apples.h"

int apple_programm::AppleFunction();

int main()

{

    int fruits { apple_programm::AppleFunction() };
    std::cout << "But if you gave me 2, you will have " << fruits - 2 << ".\n";

/*
    int apples;

    std::cout << "How many apples do you have? " << std::endl;
    std::cin >> apples;
    std::cout << '\n';

    std::cout << "How many apples had you ate? " << std::endl;
    int eaten_apples;
    std::cin >> eaten_apples;
    eaten_apples = apples - eaten_apples;

    int available_apples;
    available_apples = eaten_apples + 1;
    std::cout << '\n';


    std::cout << "Now you have " << eaten_apples << " apples. Take another one. Now you have "
        << available_apples << " apples." << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << '\n';
    }
    */

    return 0;
}


    /* if (apples > 3)
    std::cout << "It's so much for you! Stop eating apples. Now take an allergy pill. You can buy it here: https://www.eapteka.ru/goods/id266618/";
    
    if (apples <= 3)
    std::cout << "Thank you for your answer! Don't eat it too much. Bye!"; 

    // summ::summochka();
    
    std::cout << rand();

    return 0;
}*/
