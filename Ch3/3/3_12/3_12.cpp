#include <iostream>

using namespace std;
//2_9

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c, d;
    char dummychar, operation, cont;

    do
    {
        cont = 0;
        system("CLS");
        cout << "Введите первую дробь, операцию и вторую дробь: ";
        cin >> a >> dummychar >> b >> operation >> c >> dummychar >> d;

        switch (operation)
        {
        case '+':
            cout << (a * d + b * c) << "/" << (b * d) << endl;
            break;
        case '-':
            cout << (a * d - b * c) << "/" << (b * d) << endl;
            break;
        case '*':
            cout << (a * c) << "/" << (b * d) << endl;
            break;
        case '/':
            cout << (a * d) << "/" << (b * c) << endl;
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
