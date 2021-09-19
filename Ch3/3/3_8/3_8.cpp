#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    char dot, J, cont;
    int pound1, pound2, shil1, shil2, pens1, pens2, respound, resshil, respens;

    do
    {
        system("CLS");
        cout << "Введите первую сумму: ";
        cin >> J >> pound1 >> dot >> shil1 >> dot >> pens1;
        cout << "Введите вторую сумму: ";
        cin >> J >> pound2 >> dot >> shil2 >> dot >> pens2;

        respound = pound1 + pound2;
        resshil = shil1 + shil2;
        respens = pens1 + pens2;

        if (respens > 11)
        {
            respens -= 12;
            resshil++;
        }

        if (resshil > 19)
        {
            resshil -= 20;
            respound++;
        }

        cout << "Всего: " << J << respound << dot << resshil << dot << respens << endl;

        cout << "Продолжить (y/n)? ";
        cin >> cont;
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
