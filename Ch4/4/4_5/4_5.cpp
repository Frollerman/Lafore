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

    char dummychar;
    date d;

    cout << "Введите день, месяц и год в формате ДД/ММ/ГГГГ: ";
    cin >> d.day >> dummychar >> d.month >> dummychar >> d.year;

    cout << "Вы ввели дату: " << d.day << dummychar << d.month << dummychar << d.year << endl;

    return 0;
}
