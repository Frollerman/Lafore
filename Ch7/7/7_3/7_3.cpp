﻿#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {feet = 0; inches = 0;}
    Distance(int ft, float in)
    {feet = ft; inches = in;}
    void getdist()
    {
        cout << "\nВведите футы: "; cin >> feet;
        cout << "Введите дюймы: "; cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << "\"";
    }
    void add_dist(Distance, Distance);
    void div_dist(Distance, int);
};

void Distance::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet + d3.feet;
}

void Distance::div_dist(Distance d2, int divisor)
{
    float fltfeet = static_cast<float>(d2.feet + d2.inches / 12.0);
    fltfeet /= divisor;
    feet = int(fltfeet);
    inches = (fltfeet - feet) * 12.0;
}

int main()
{
    setlocale(LC_ALL, "ru");

    Distance arr[100];

    Distance total(0, 0.0), average;
    int count = 0;
    char ch;
    do
    {
        cout << "\nВведите расстояние ";
        arr[count++].getdist();
        cout << "\nПродолжить (y/n)?";
        cin >> ch;
    } while (ch != 'n');

    for (int j = 0; j < count; j++)
    {
        total.add_dist(total, arr[j]);
    }
    average.div_dist(total, count);
    cout << "\nСреднее: ";
    average.showdist();
    cout << endl;
    return 0;
}
