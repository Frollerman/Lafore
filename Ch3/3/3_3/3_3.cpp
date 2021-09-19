#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    long number = 0;

    cout << "Введите число: ";
    for (int i = 0; i < 6; i++)
    {
        char newch = _getche();
        number = number * 10 + newch - '0';
    }
    cout << endl << "Вы ввели число " << number << endl;

    /*char ch;
    unsigned long total = 0;
    cout << "\nВведите число: ";
    while ((ch = _getche()) != '\r')
        total = total * 10 + ch - '0';
    cout << "\nПолучилось число: " << total << endl;*/

    return 0;
}

