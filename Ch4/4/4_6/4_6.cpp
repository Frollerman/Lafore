#include <iostream>

using namespace std;

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    setlocale(LC_ALL, "ru");

    char first, word = 123;
    enum etype { laborer, secretary, manager, accountant, executive, researcher };

    cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> first;
    switch (first)
    {
        case 'l':
            word = 0;
            break;
        case 's':
            word = 1;
            break;
        case 'm':
            word = 2;
            break;
        case 'a':
            word = 3;
            break;
        case 'e':
            word = 4;
            break;
        case 'r':
            word = 5;
            break;
    }
    cout << "Полное название должности: ";
    switch (word)
    {
        case 0:
            cout << "laborer" << endl;
            break;
        case 1:
            cout << "secretary" << endl;
            break;
        case 2:
            cout << "manager" << endl;
            break;
        case 3:
            cout << "accountant" << endl;
            break;
        case 4:
            cout << "executive" << endl;
            break;
        case 5:
            cout << "researcher" << endl;
    }

    return 0;
}
