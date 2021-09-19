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

    fraction dr1(2, 5), dr2(3, 10), answer;
    char dummychar, operation, cont;

    do
    {
        cont = 0;
        system("CLS");
        dr1.input();
        cout << "Введите операцию: ";
        cin >> operation;
        dr2.input();

        switch (operation)
        {
        case '+':
            answer.add(dr1, dr2);
            break;
        case '-':
            answer.sub(dr1, dr2);
            break;
        case '*':
            answer.mul(dr1, dr2);
            break;
        case '/':
            answer.div(dr1, dr2);
            break;
        default:
            cout << "Введите корректную операцию!" << endl;
            continue;
        }
        answer.lowterms();
        cout << "Ответ: ";
        answer.output();
        cout << endl << endl << "Выполнить еще одну операцию (y/n)? ";
        while (cont != 'y' && cont != 'n')
        {
            cin >> cont;
            if (cont != 'y' && cont != 'n')
            {
                cout << "Введите y или n! ";
                continue;
            }
        }
    } while (cont == 'y');

    return 0;
}
