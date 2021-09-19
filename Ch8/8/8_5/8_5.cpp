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
    void check()
    {
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
    mytime operator++ (); // prefix ++
    mytime operator++ ( int ); // postfix++
    mytime operator-- (); // prefix--
    mytime operator-- ( int ); //postfix--
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

    mytime mytime::operator++ () // prefix ++
    {
        ++s;
        check();
        return mytime(h, m, s);
    }
    mytime mytime::operator++ ( int ) // postfix++
    {
        return mytime(h, m, s++);
    }
    mytime mytime::operator-- () // prefix--
    {
        --s;
        check();
        return mytime(h, m, s);
    }
    mytime mytime::operator-- (int) //postfix--
    {
        return mytime(h, m, s--);
    }

int main()
{
    mytime time1(12, 40, 59), time2(5, 25, 34);
    mytime time3 = time1 + time2;
    //--time1;
    time1++.show();
    time1.show();
    time3.show();

    return 0;
}