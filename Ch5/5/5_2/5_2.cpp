//#include <iostream>
//
//using namespace std;
//
//double power(double n, int p = 2)
//{
//    double step = n;
//    for (int i = 0; i < p - 1; i++)
//    {
//        step *=  n;
//    }
//    return step;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//
//    double num;
//    int pwr;
//
//    cout << "Введите число: ";
//    cin >> num;
//    cout << "Введите степень: ";
//    cin >> pwr;
//    
//    cout << "Полученное число: " << power(num, pwr) << endl;
//
//    return 0;
//}

#include <iostream>

using namespace std;

double power(double n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");

    double num, answer = 0;
    int pwr;
    char yesorno = 0;

    cout << "Введите число: ";
    cin >> num;
    cout << "Будете вводить степень? (y/n) ";
    while (yesorno != 'y' && yesorno != 'n')
    {
        cin >> yesorno;
        if (yesorno == 'y')
        {
            cout << "Введите степень: ";
            cin >> pwr;
            answer = power(num, pwr);
        }
        else if (yesorno == 'n')
        {
            answer = power(num);
        }
        else
        {
            cout << "Введите y или n!" << endl;
        }
    }
    
    
    cout << "Полученное число: " << answer << endl;

    return 0;
}
