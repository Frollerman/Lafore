#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class money
{
private:
    string stroka;
public:
    void str_in()
    {
        cin >> stroka;
    }
    double mstold(string str)
    {
        double number;// , frac;
        char str2[30];// , strfrac[5];
        int count = 0;

        for (int i = 0; i < str.length(); i++)
        {
            //if (str[i] == '0') /*|| '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9' || '.'*/
            if ((str[i] >= 48 && str[i] <= 57) || (str[i] == 46))
            {
                str2[count++] = str[i];
            }
            /*if (str[i] == 46)
            {
                cout << "FRAC" << endl;
                strfrac[0] = '0';
                strfrac[1] = '.';
                strfrac[2] = str[i + 1];
                strfrac[3] = str[i + 2];
                strfrac[4] = '\0';
            }*/
        }
        //cout << endl << "str2 " << str2 << endl;
        number = atof(str2);
        //frac = strtod(strfrac, nullptr);
        //cout << endl << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << "number " << number << endl;
        //cout << endl << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << "frac " << frac << endl;
        return number;
    }
    void input()
    {
        cout << "Enter string: ";
        cin >> stroka;
    }
    void output()
    {
        double chis = mstold(stroka);
        //cout << "Stroka " << stroka << endl;
        cout << setiosflags (ios::fixed) << setiosflags (ios::showpoint) << setprecision (2) << "Number: " << chis << endl;
    }
};

int main()
{
    //setlocale(LC_ALL, "ru");

    money mon;
    mon.input();
    mon.output();
}
