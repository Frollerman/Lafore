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
            cout << (dr1.chis * dr2.znam + dr1.znam * dr2.chis) << "/" << (dr1.znam * dr2.znam) << endl;
            break;
        case '-':
            cout << (dr1.chis * dr2.znam - dr1.znam * dr2.chis) << "/" << (dr1.znam * dr2.znam) << endl;
            break;
        case '*':
            cout << (dr1.chis * dr2.chis) << "/" << (dr1.znam * dr2.znam) << endl;
            break;
        case '/':
            cout << (dr1.chis * dr2.znam) << "/" << (dr1.znam * dr2.chis) << endl;
            break;
        default:
            cout << "Введите корректную операцию!" << endl;
            continue;
        }

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
