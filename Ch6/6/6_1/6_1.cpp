#include <iostream>

using namespace std;

class Int
{
private:
    int num;
public:
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
    void add(Int a, Int b)
    {
        num = a.num + b.num;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    Int n1, n2, n3;
    //n1.setZero();
    n1.setNum(7);
    n2.setNum(5);
    n3.add(n1, n2);

    n1.showNum();
    n2.showNum();
    n3.showNum();

    return 0;
}
