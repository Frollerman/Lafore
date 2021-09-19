#include <iostream>

using namespace std;

class Int
{
private:
    int num;
public:
    Int(): num(0)
    {

    }
    Int(long long val): num(val)
    {
        
    }
    void check(long long res) const
    {
        if (res > 2147483647 || res < -2147483648)
        {
            cout << "Overflow!" << endl;
            exit(1);
        }
    }
    void setZero()
    {
        num = 0;
    }
    void setNum(int number)
    {
        num = number;
    }
    void showNum()
    {
        cout << num << endl;
    }
    Int operator+ (Int a) const;
    Int operator- (Int a) const;
    Int operator* (Int a) const;
    Int operator/ (Int a) const;
};

Int Int::operator+ (Int a) const
{
    long long number = static_cast<long long>(num) + a.num;
    check(number);
    return static_cast<Int>(number);
}

Int Int::operator- (Int a) const
{
    long long number = static_cast<long long>(num) - a.num;
    check(number);
    return static_cast<Int>(number);
}

Int Int::operator* (Int a) const
{
    long long number = static_cast<long long>(num) * a.num;
    check(number);
    return static_cast<Int>(number);
}

Int Int::operator/ (Int a) const
{
    long long number = static_cast<long long>(num) / a.num;
    check(number);
    return static_cast<Int>(number);
}

int main()
{
    Int n1, n2, n3;
    n1.setNum(-2147483645);
    n2.setNum(5);
    n3 = n1 - n2;

    n1.showNum();
    n2.showNum();
    n3.showNum();

    return 0;
}
