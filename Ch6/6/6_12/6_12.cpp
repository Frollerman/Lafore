#include <iostream>
#include <cmath>

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

    fraction f, temp, temp2, temp3;

    int num, den;

    f.input_znam();
    

    int iter = f.get_znam() - 1;

    cout << "0\t";

    temp2 = temp = f;

    for (int i = 0; i < iter; i++)
    {
        temp2 = temp;
        temp2.lowterms();
        temp2.output();
        cout << "\t";
        temp.chis_incr();
    }
    cout << endl << "-----------------------------------------------------" << endl;

    temp3 = temp2 = temp = f;

    for (int i = 0; i < iter; i++)
    {
        f.output();
        cout << " |\t";
        temp2 = temp3;

        for (int j = 0; j < iter; j++)
        {
            temp.mul(f, temp2);
            temp.lowterms();
            temp.output();
            cout << "\t";
            temp2.chis_incr();
        }
        f.chis_incr();
        cout << endl;
    }
    return 0;
}
