#include <iostream>

using namespace std;

class mytime
{
private:
    int h;
    int m;
    int s;
public:
    mytime() : h(0), m(0), s(0)
    {}
    mytime(int hours, int minutes, int seconds) : h(hours), m(minutes), s(seconds)
    {}
    void show()const
    {
        if (h < 10) cout << "0";
        cout << h << ":";
        if (m < 10) cout << "0";
        cout << m << ":";
        if (s < 10) cout << "0";
        cout << s << endl;
    }
    void add(mytime t1, mytime t2)
    {
        h = t1.h + t2.h;
        m = t1.m + t2.m;
        s = t1.s + t2.s;
        if (s > 59)
        {
            m++;
            s -= 60;
        }
        if (m > 59)
        {
            h++;
            m -= 60;
        }
        while (h > 12) h -= 12;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    const mytime time1(12, 40, 56), time2(5, 25, 34);
    mytime time3;
    time3.add(time1, time2);
    time3.show();

    return 0;
}
