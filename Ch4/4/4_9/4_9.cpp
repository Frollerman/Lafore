#include <iostream>

using namespace std;

struct mytime
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    setlocale(LC_ALL, "ru");

    mytime t1;
    char doubledot;

    cout << "Введите время в формате ЧЧ:ММ:СС ";
    cin >> t1.hours >> doubledot >> t1.minutes >> doubledot >> t1.seconds;
    long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    cout << "Всего секунд: " << totalsecs;

    return 0;
}
