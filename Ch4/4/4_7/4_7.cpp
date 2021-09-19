#include <iostream>

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct date
{
    int month;
    int day;
    int year;
};

struct employee
{
    int number;
    float posob;
    etype dol;
    date data;
};

int main()
{
    setlocale(LC_ALL, "ru");

    employee rab1, rab2, rab3;
    char dummychar, dolj;

    cout << "Введите данные первого сотрудника: ";
    cin >> rab1.number >> rab1.posob >> dolj >> rab1.data.day >> dummychar >> rab1.data.month >> dummychar >> rab1.data.year;
    switch (dolj)
    {
        case 'l': { rab1.dol = laborer; break; }
        case 's': { rab1.dol = secretary; break; }
        case 'm': { rab1.dol = manager; break; }
        case 'a': { rab1.dol = accountant; break; }
        case 'e': { rab1.dol = executive; break; }
        case 'r': { rab1.dol = researcher; break; }
        default: cout << "Некорректный ввод";
    }
    cout << "Введите данные второго сотрудника: ";
    cin >> rab2.number >> rab2.posob >> dolj >> rab2.data.day >> dummychar >> rab2.data.month >> dummychar >> rab2.data.year;
    switch (dolj)
    {
        case 'l': { rab2.dol = laborer; break; }
        case 's': { rab2.dol = secretary; break; }
        case 'm': { rab2.dol = manager; break; }
        case 'a': { rab2.dol = accountant; break; }
        case 'e': { rab2.dol = executive; break; }
        case 'r': { rab2.dol = researcher; break; }
        default: cout << "Некорректный ввод";
    }
    cout << "Введите данные третьего сотрудника: ";
    cin >> rab3.number >> rab3.posob >> dolj >> rab3.data.day >> dummychar >> rab3.data.month >> dummychar >> rab3.data.year;
    switch (dolj)
    {
        case 'l': { rab3.dol = laborer; break; }
        case 's': { rab3.dol = secretary; break; }
        case 'm': { rab3.dol = manager; break; }
        case 'a': { rab3.dol = accountant; break; }
        case 'e': { rab3.dol = executive; break; }
        case 'r': { rab3.dol = researcher; break; }
        default: cout << "Некорректный ввод";
    }

    cout << "Сотрудник номер " << rab1.number << " имеет пособие $" << rab1.posob << ", принят на работу "
         << rab1.data.day << dummychar << rab1.data.month << dummychar << rab1.data.year << ", имеет должность ";
    switch (rab1.dol)
    {
        case laborer: {cout << "laborer\n"; break; }
        case secretary: {cout << "secretary\n"; break; }
        case manager: {cout << "manager\n"; break; }
        case accountant: {cout << "accountant\n"; break; }
        case executive: {cout << "executive\n"; break; }
        case researcher: {cout << "researcher\n"; break; }
    }

    cout << "Сотрудник номер " << rab2.number << " имеет пособие $" << rab2.posob << ", принят на работу "
        << rab2.data.day << dummychar << rab2.data.month << dummychar << rab2.data.year << ", имеет должность ";
    switch (rab2.dol)
    {
        case laborer: {cout << "laborer\n"; break; }
        case secretary: {cout << "secretary\n"; break; }
        case manager: {cout << "manager\n"; break; }
        case accountant: {cout << "accountant\n"; break; }
        case executive: {cout << "executive\n"; break; }
        case researcher: {cout << "researcher\n"; break; }
    }

    cout << "Сотрудник номер " << rab3.number << " имеет пособие $" << rab3.posob << ", принят на работу "
        << rab3.data.day << dummychar << rab3.data.month << dummychar << rab3.data.year << ", имеет должность ";
    switch (rab3.dol)
    {
        case laborer: {cout << "laborer\n"; break; }
        case secretary: {cout << "secretary\n"; break; }
        case manager: {cout << "manager\n"; break; }
        case accountant: {cout << "accountant\n"; break; }
        case executive: {cout << "executive\n"; break; }
        case researcher: {cout << "researcher\n"; break; }
    }

    return 0;
}
