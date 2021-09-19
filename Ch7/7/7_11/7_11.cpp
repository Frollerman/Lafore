#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;
class Money {
    string mon1;
    string mon2;
    long double sum;
public:
    void ldtoms()
    {
        stringstream conv;
        conv << fixed << setprecision(2) << sum;
        conv >> mon1;
    }
    void getMoney()
    {
        cout << "Введите сумму: " << endl;
        cin >> sum;
        if (sum > 9999999999999990.00)
        {
            cout << "\nОшибка! Попробуйте еще раз.";
            exit(1);
        }
    }
    void strings()
    {
        string doll("$");
        mon2 = mon1;
        mon2 = doll + mon2;
        for (int i = mon2.size() - 6; i > 1; i -= 3)
            mon2.insert(i, ",");
    }
    void diplay() const
    {
        cout << "\n" << mon2 << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "");
    Money m;
    m.getMoney();
    m.ldtoms();
    m.strings();
    m.diplay();
    return 0;
}