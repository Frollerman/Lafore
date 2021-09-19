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

    mytime t1, t2, t3;
    char doubledot;

    cout << "Введите время 1 в формате 12:59:59 ";
    cin >> t1.hours >> doubledot >> t1.minutes >> doubledot >> t1.seconds;
    cout << "Введите время 2 в формате 12:59:59 ";
    cin >> t2.hours >> doubledot >> t2.minutes >> doubledot >> t2.seconds;

    long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds + t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    t3.hours = totalsecs / 3600;
    while (t3.hours > 12)
    {
        t3.hours -= 12;
    }
    t3.minutes = totalsecs / 60;
    while (t3.minutes > 59)
    {
        t3.minutes -= 60;
    }
    t3.seconds = totalsecs;
    while (t3.seconds > 59)
    {
        t3.seconds -= 60;
    }

    cout << "Полученное время "; 
    if (t3.hours < 10) cout << "0";
    cout << t3.hours << doubledot;
    if (t3.minutes < 10) cout << "0";
    cout << t3.minutes << doubledot;
    if (t3.seconds < 10) cout << "0";
    cout << t3.seconds << endl;

    return 0;
}
