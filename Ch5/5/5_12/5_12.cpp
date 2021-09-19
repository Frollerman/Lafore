#include <iostream>

using namespace std;

struct fraction
{
    int chis;
    int znam;
};

fraction fadd(fraction d1, fraction d2)
{
    fraction d3;
    d3.chis = (d1.chis * d2.znam + d1.znam * d2.chis);
    d3.znam = (d1.znam * d2.znam);
    return d3;
}

fraction fsub(fraction d1, fraction d2)
{
    fraction d3;
    d3.chis = (d1.chis * d2.znam - d1.znam * d2.chis);
    d3.znam = (d1.znam * d2.znam);
    return d3;
}

fraction fmul(fraction d1, fraction d2)
{
    fraction d3;
    d3.chis = (d1.chis * d2.chis);
    d3.znam = (d1.znam * d2.znam);
    return d3;
}

fraction fdiv(fraction d1, fraction d2)
{
    fraction d3;
    d3.chis = (d1.chis * d2.znam);
    d3.znam = (d1.znam * d2.chis);
    return d3;
}

int main()
{
    setlocale(LC_ALL, "ru");

    fraction dr1, dr2, answer;
    char dummychar, operation, cont;

    do
    {
        cont = 0;
        system("CLS");
        cout << "Введите первую дробь, операцию и вторую дробь: ";
        cin >> dr1.chis >> dummychar >> dr1.znam >> operation >> dr2.chis >> dummychar >> dr2.znam;

        switch (operation)
        {
        case '+':
            answer = fadd(dr1, dr2);
            break;
        case '-':
            answer = fsub(dr1, dr2);
            break;
        case '*':
            answer = fmul(dr1, dr2);
            break;
        case '/':
            answer = fdiv(dr1, dr2);
            break;
        default:
            cout << "Введите корректную операцию!" << endl;
            continue;
        }
        cout << "Ответ: " << answer.chis << "/" << answer.znam << endl;
        cout << endl << "Выполнить еще одну операцию (y/n)? ";
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
