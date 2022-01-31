#include "apples.h"
#include <iostream>

void apple_programm::AppleFunction(void)
{
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
}