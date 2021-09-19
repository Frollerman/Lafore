#include <iostream>

using namespace std;
//2_7

int main()
{
    double cels;
    cout << "Введите температуру по Цельсию: ";
    cin >> cels;
    cout << "Температура по Фаренгейту: " << cels * 9 / 5 + 32 << endl;

    return 0;
}