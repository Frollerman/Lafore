#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int var;
    double temp;

    cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта." << endl
        << "2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
    cin >> var;
    if (var == 1)
    {
        cout << "Введите температуру по Цельсию: ";
        cin >> temp;
        cout << "Значение по Фаренгейту: " << temp * 9 / 5 + 32;
    }
    else if (var == 2)
    {
        cout << "Введите температуру по Фаренгейту: ";
        cin >> temp;
        cout << "Значение по Цельсию: " << (temp - 32) * 5 / 9;
    }
}

