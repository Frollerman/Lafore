#include <iostream>

using namespace std;

class date
{
private:
    int month;
    int day;
    int year;
public:
    void getdate()
    {
        char dummychar;
        cout << "Введите день, месяц и год в формате ММ/ДД/ГГГГ: ";
        cin >> month >> dummychar >>  day >> dummychar >> year;
    }
    void showdate()
    {
        cout << "Вы ввели дату: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    date d;

    d.getdate();
    d.showdate();

    return 0;
}
