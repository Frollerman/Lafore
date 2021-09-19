#include <iostream>

using namespace std;
//3_4

int main()
{
    setlocale(LC_ALL, "ru");

    float a, b, result;
    char operation, cont;

    do
    {
        system("CLS");
        cont = '0';
        cout << "Введите первый операнд, операцию и второй операнд: ";
        cin >> a >> operation >> b;
        switch (operation)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "Введите корректную операцию!" << endl;
            continue;
        }
        cout << "Результат равен " << result << endl << endl
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
