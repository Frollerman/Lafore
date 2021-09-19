#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <algorithm>

using namespace std;

class bMoney
{
private:
    string stroka;
    long double money;
public:
    //bMoney();
    //bMoney(char s[]);
    void madd(bMoney m1, bMoney m2)
    {
        cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << "Sum is $" << m1.money + m2.money << endl;
    }
    void getmoney()
    {
        int cont = 1;
        do
        {
            cout << endl << "Enter sum: " << endl;
            cin >> money;
            if (money > 9999999999999990.00)
            {
                cout << "\nError! Try again" << endl << endl;
            }
            else
            {
                cont = 0;
            }
        } while (cont == 1);
        
    }
    void putmoney()
    {
        //double chis = mstold(stroka);
        strings();
        cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << "Number: " << stroka << endl;
    }
    void strings()
    {
        string doll("$");
        stroka = to_string(money);
        stroka = doll + stroka;
        for (int i = stroka.size() - 6; i > 1; i -= 3)
            stroka.insert(i, ",");
    }
    void ldtoms()
    {
        stringstream conv;
        conv << fixed << setprecision(2) << money;
        conv >> stroka;
    }
    double mstold(string str)
    {
        double number;
        char str2[30];
        int count = 0;

        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] >= 48 && str[i] <= 57) || (str[i] == 46))
            {
                str2[count++] = str[i];
            }
        }
        number = atof(str2);
        return number;
    }
};

int main()
{
    //setlocale(LC_ALL, "ru");
    
    bMoney m1, m2, m3;
    m1.getmoney();
    m2.getmoney();
    m1.ldtoms();
    m2.ldtoms();
    m1.strings();
    m2.strings();
    m3.madd(m1, m2);
    m1.putmoney();
    m2.putmoney();
    return 0;
}
