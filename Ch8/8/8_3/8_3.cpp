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
    mytime operator+ (mytime t2) const;
};

mytime mytime::operator+ (mytime t2) const
{
    int h1 = h + t2.h;
    int m1 = m + t2.m;
    int s1 = s + t2.s;
    if (s1 > 59)
    {
        m1++;
        s1 -= 60;
    }
    if (m1 > 59)
    {
        h1++;
        m1 -= 60;
    }
    while (h1 > 12) h1 -= 12;
    mytime temp(h1, m1, s1);
    return temp;
}

int main()
{
    const mytime time1(12, 40, 56), time2(5, 25, 34);
    mytime time3 = time1 + time2;
    time3.show();

    return 0;
}