#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance x;
    Distance y;
    Distance z;
};

int main()
{
    setlocale(LC_ALL, "ru");

    float x, y, z;

    Volume vol = { {3, 4}, {5, 7}, {7, 3} };
    /*cout << "Введите длину: ";
    cin >> vol.x.feet >> vol.x.inches;
    cout << "Введите ширину: ";
    cin >> vol.y.feet >> vol.y.inches;
    cout << "Введите высоту: ";
    cin >> vol.z.feet >> vol.z.inches;*/

    x = vol.x.feet + (vol.x.inches / 12);
    y = vol.y.feet + (vol.y.inches / 12);
    z = vol.z.feet + (vol.z.inches / 12);

    cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl;

    cout << "Объем равен " << x * y * z << " кубических футов" << endl;

    return 0;
}
