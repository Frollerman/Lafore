#include <iostream>

using namespace std;

struct fraction
{
    int chis;
    int znam;
};

int main()
{
    setlocale(LC_ALL, "ru");

    fraction dr1, dr2;
    char dummychar;

    cout << "Введите первую дробь: ";
    cin >> dr1.chis >> dummychar >> dr1.znam;
    cout << "Введите вторую дробь: ";
    cin >> dr2.chis >> dummychar >> dr2.znam;
    cout << "Сумма равна " << (dr1.chis * dr2.znam + dr1.znam * dr2.chis) << "/" << (dr1.znam * dr2.znam) << endl;


    return 0;
}
