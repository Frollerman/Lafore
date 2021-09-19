#include <iostream>

using namespace std;

class fraction
{
private:
    int chis;
    int znam;
public:
    void input()
    {
        char dummychar;
        cout << "Введите дробь: ";
        cin >> chis >> dummychar >> znam;
    }
    void output()
    {
        cout << chis << "/" << znam << endl;
    }
    void add(fraction d1, fraction d2)
    {
        chis = d1.chis * d2.znam + d1.znam * d2.chis;
        znam = d1.znam * d2.znam;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    fraction dr1, dr2, dr3;
    char prod = 'y';

    do
    {
        dr1.input();
        dr2.input();
        dr3.add(dr1, dr2);
        dr3.output();
        cout << "Продолжить (y/n)?";
        cin >> prod;
    } while (prod != 'n');



    return 0;
}
