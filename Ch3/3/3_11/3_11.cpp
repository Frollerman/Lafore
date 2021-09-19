#include <iostream>

using namespace std;
//3_4

int main()
{
    setlocale(LC_ALL, "ru");

    int p1, p2, resp, s1, s2, ress, pen1, pen2, respen;
    double dec1, dec2, dec3, decfrac;
    char operation, cont, dot, J;

    do
    {
        system("CLS");
        cont = '0';
        cout << "Введите первый операнд, операцию и второй операнд: ";
        cin >> J >> p1 >> dot >> s1 >> dot >>  pen1 >> operation >> J >> p2 >> dot >> s2 >> dot >> pen2;

        dec1 = static_cast<double>((p1 * 20 + s1) * 12 + pen1) / 240;
        dec2 = static_cast<double>((p2 * 20 + s2) * 12 + pen2) / 240;

        switch (operation)
        {
        case '+':
            dec3 = dec1 + dec2;
            break;
        case '-':
            dec3 = dec1 - dec2;
            break;
        case '*':
            dec3 = dec1 * dec2;
            break;
        case '/':
            cout << "Деление невозможно!" << endl;
            break;
        default:
            cout << "Введите корректную операцию!" << endl;
            continue;
        }

        resp = static_cast<int>(dec3);
        decfrac = dec3 - resp;
        ress = decfrac * 20;
        respen = (decfrac * 20 - ress) * 12;

        cout << "Результат равен " << "J" << resp << dot << ress << dot << respen << endl << endl
            << "Выполнить еще одну операцию (y/n)? ";
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
