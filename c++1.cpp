// c++1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    char a;

    cout << "give the number of the meme: ";
    cin >> x;

    cout << "explain the meme: ";
    cin >> a;

    cout << x << " meme is a meme that means " << a;

    return 0;
}
// как и сказано в учебнике, все буквы после первой буквы введёного пользователем значеия char не воспринимаются программой, поэтому на консоли их нет
