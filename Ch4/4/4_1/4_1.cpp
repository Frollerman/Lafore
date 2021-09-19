#include <iostream>

using namespace std;

struct phone
{
    int city;
    int station;
    int abonent;
};

int main()
{
    setlocale(LC_ALL, "ru");

    phone ph1 = { 212, 767, 8900 }, ph2;

    cout << "Введите код города, номер станции и номер абонента: " << endl;
    cin >> ph2.city >> ph2.station >> ph2.abonent;

    cout << "Мой номер (" << ph1.city << ") " << ph1.station << "-" << ph1.abonent << endl
         << "Ваш номер (" << ph2.city << ") " << ph2.station << "-" << ph2.abonent << endl;

    return 0;
}
