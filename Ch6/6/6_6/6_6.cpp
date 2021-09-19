#include <iostream>

using namespace std;

class mydate
{
private:
    int month;
    int day;
    int year;
    char dummychar;
public:
    void getdate()
    {
        cout << "Введите день, месяц и год в формате ДД/ММ/ГГГГ: ";
        cin >> day >> dummychar >> month >> dummychar >> year;
    }
    void showdate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class employee
{
private:
    int number;
    float oklad;
    enum etype { laborer, secretary, manager, accountant, executive, researcher };
    mydate date;
    char ch;
public:
    void setNum()
    {
        cout << "Введите номер сотрудника: ";
        cin >> number;
    }
    void setOklad()
    {
        cout << "Введите оклад сотрудника: $";
        cin >> oklad;
    }
    void getNum()
    {
        cout << "Номер сотрудника: " << number << endl;
    }
    void getOklad()
    {
        cout << "Оклад сотрудника: $" << oklad << endl;
    }
    void getemploy()
    {
        char first;
        cout << "Введите номер сотрудника: ";
        cin >> number;
        cout << "Введите оклад сотрудника: $";
        cin >> oklad;
        cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
        cin >> first;
        switch (first)
        {
        case 'l':
            ch = 0;
            break;
        case 's':
            ch = 1;
            break;
        case 'm':
            ch = 2;
            break;
        case 'a':
            ch = 3;
            break;
        case 'e':
            ch = 4;
            break;
        case 'r':
            ch = 5;
            break;
        }
        date.getdate();
    }
    void putemploy()
    {
        cout << "Номер сотрудника: " << number << "\nОклад: $" << oklad << "\nНачал работать с ";
        date.showdate();
        cout << "\nДолжность: ";
        switch (ch)
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
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    employee rab1, rab2, rab3;

    rab1.getemploy();
    rab2.getemploy();
    rab3.getemploy();

    rab1.putemploy();
    rab2.putemploy();
    rab3.putemploy();

    return 0;
}
