#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance func(Distance d1, Distance d2)
{
    if (d1.feet > d2.feet || (d1.feet == d2.feet && d1.inches > d2.inches))
    {
        return d1;
    }
    else
    {
        return d2;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    Distance dist1, dist2, dist3;

    cout << "Введите количество футов и дюймов (1): ";
    cin >> dist1.feet >> dist1.inches;
    cout << "Введите количество футов и дюймов (2): ";
    cin >> dist2.feet >> dist2.inches;

    dist3 = func(dist1, dist2);

    cout << "Наибольшее - " << dist3.feet << "\'" << dist3.inches << "\"" << endl;

    return 0;
}
