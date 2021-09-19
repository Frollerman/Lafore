#include <iostream>

using namespace std;

struct employee
{
    int number;
    float posob;
};

int main()
{
    setlocale(LC_ALL, "ru");

    employee rab1, rab2, rab3;

    cout << "Введите номер и величину пособия первого сотрудника: ";
    cin >> rab1.number >> rab1.posob;
    cout << "Введите номер и величину пособия второго сотрудника: ";
    cin >> rab2.number >> rab2.posob;
    cout << "Введите номер и величину пособия третьего сотрудника: ";
    cin >> rab3.number >> rab3.posob;

    cout << "Сотрудник номер " << rab1.number << " имеет пособие $" << rab1.posob << endl;
    cout << "Сотрудник номер " << rab2.number << " имеет пособие $" << rab2.posob << endl;
    cout << "Сотрудник номер " << rab3.number << " имеет пособие $" << rab3.posob << endl;

    return 0;
}
