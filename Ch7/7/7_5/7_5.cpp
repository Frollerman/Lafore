#include <iostream>

using namespace std;

class fraction
{
private:
    int chis;
    int znam;
public:
    fraction()
    { }
    fraction(int ch, int zn) : chis(ch), znam(zn)
    { }
    int get_znam()
    {
        return znam;
    }
    void chis_incr()
    {
        chis++;
    }
    void input_znam()
    {
        cout << "Введите знаменатель: ";
        cin >> znam;
        chis = 1;
    }
    void input()
    {
        char dummychar;
        cout << "Введите дробь: ";
        cin >> chis >> dummychar >> znam;
    }
    void output()
    {
        cout << chis << "/" << znam;
    }
    void add(fraction d1, fraction d2)
    {
        chis = d1.chis * d2.znam + d1.znam * d2.chis;
        znam = d1.znam * d2.znam;
    }
    void sub(fraction d1, fraction d2)
    {
        chis = d1.chis * d2.znam - d1.znam * d2.chis;
        znam = d1.znam * d2.znam;
    }
    void mul(fraction d1, fraction d2)
    {
        chis = d1.chis * d2.chis;
        znam = d1.znam * d2.znam;
    }
    void div(fraction d1, fraction d2)
    {
        chis = d1.chis * d2.znam;
        znam = d1.znam * d2.chis;
    }
    void div(fraction d1, int d2)
    {
        chis = d1.chis * 1;
        znam = d1.znam * d2;
    }
    void lowterms();
};

void fraction::lowterms() //сокращение дроби
{
    long tnum, tden, temp, gcd;
    tnum = labs(chis); //используем неотрицательные значения
    tden = labs(znam); //(нужен cmath)
    if (tden == 0) //проверка знаменателя на 0
    {
        cout << "Недопустимый знаменатель!";
        exit(1);
    }
    else if (tnum == 0) // проверка числителя на 0
    {
        chis = 0;
        znam = 1;
        return;
    }
    //нахождение наибольшего общего делителя
    while (tnum != 0)
    {
        if (tnum < tden) //если числитель больше знаменателя, меняем их местами
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum = tnum - tden;
    }
    gcd = tden; //делим числитель и знаменатель на полученный наибольший общий делитель
    chis = chis / gcd;
    znam = znam / gcd;
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 3;

    int count = 0;
    fraction arr[SIZE], total(0,1), average;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i].input();
        total.add(total, arr[i]);
        count++;
    }
    average.div(total, count);
    average.lowterms();
    average.output();
}
