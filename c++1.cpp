// c++1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>



int main()

{

    int apples;
    //std::string a;

    std::cout << "How much apple had you ate? " << std::endl;
    std::cin >> apples;

    if (apples > 3)
    std::cout << "It's so much for you! Stop eating apples. Now take an allergy pill. You can buy it here: https://www.eapteka.ru/goods/id266618/";
    
    if (apples <= 3)
    std::cout << "Thank you for your answer! Don't eat it too much. Bye!";


    return 0;
}
// как и сказано в учебнике, все буквы после первой буквы введеного пользователем значеия char не воспринимаются программой, поэтому на консоли их нет
// ОШИБКА: если присваивать переменной а значение, написанное на кириллице, то оно не выводится