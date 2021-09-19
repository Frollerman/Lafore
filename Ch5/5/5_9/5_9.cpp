#include <iostream>

using namespace std;

struct mytime
{
    int hours;
    int minutes;
    int seconds;
};

void swap(mytime& n1, mytime& n2)
{
    mytime temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    setlocale(LC_ALL, "ru");

    mytime time1, time2;
    char doubledot;

    cout << "Введите первое время: ";
    cin >> time1.hours >> doubledot >> time1.minutes >> doubledot >> time1.seconds;
    cout << "Введите второе время: ";
    cin >> time2.hours >> doubledot >> time2.minutes >> doubledot >> time2.seconds;

    cout << "Первое время - " << time1.hours << doubledot << time1.minutes << doubledot << time1.seconds << endl 
         << "Второе время - " << time2.hours << doubledot << time2.minutes << doubledot << time2.seconds << endl;
    swap(time1, time2);
    cout << "Первое время - " << time1.hours << doubledot << time1.minutes << doubledot << time1.seconds << endl
         << "Второе время - " << time2.hours << doubledot << time2.minutes << doubledot << time2.seconds << endl;

    return 0;
}
