#include <iostream>

using namespace std;
//2_10

int main()
{
    setlocale(LC_ALL, "ru");

    int pound;
    double shil, pens, decpound;

    cout << "Введите количество фунтов: ";
    cin >> pound;
    cout << "Введите количество шиллингов: ";
    cin >> shil;
    cout << "Введите количество пенсов: ";
    cin >> pens;
    //decpound = (pound + shil / 20 + pens / 240);
    decpound = ((pound * 20 + shil) * 12 + pens) / 240;
    cout << "Десятичных фунтов: J" << decpound <<  endl;

    return 0;
}
