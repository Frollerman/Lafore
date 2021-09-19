#include <iostream>

using namespace std;

struct mytime
{
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(mytime mtime)
{
    return mtime.hours * 3600 + mtime.minutes * 60 + mtime.seconds;
}

mytime secs_to_time(long secs)
{
    mytime mtime;
    mtime.hours = secs / 3600;
    //mtime.minutes = (secs - mtime.hours * 3600) / 60;
    mtime.minutes = (secs % 3600) / 60;
    //mtime.seconds = secs - mtime.hours * 3600 - mtime.minutes * 60;
    mtime.seconds = secs % 60;
    return mtime;
}

int main()
{
    setlocale(LC_ALL, "ru");

    mytime t1, t2, t3;
    char doubledot;

    cout << "Введите время 1 в формате 12:59:59 ";
    cin >> t1.hours >> doubledot >> t1.minutes >> doubledot >> t1.seconds;
    cout << "Введите время 2 в формате 12:59:59 ";
    cin >> t2.hours >> doubledot >> t2.minutes >> doubledot >> t2.seconds;

    long totalsecs = time_to_secs(t1) + time_to_secs(t2);

    cout << "Totalsecs = " << totalsecs << endl;

    t3 = secs_to_time(totalsecs);
    while (t3.hours > 12)
    {
        t3.hours -= 12;
    }
    while (t3.minutes > 59)
    {
        t3.minutes -= 60;
    }
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
