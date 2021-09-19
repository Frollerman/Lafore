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

double power(char n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

double power(int n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

double power(long n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

double power(float n, int p = 2)
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

    double numdouble = 2.1, answer = 0;
    int numint = 4, pwr;
    char numchar = 12, yesorno = 0;
    long numlong = 512;
    float numfloat = 3.4;

    answer = power(numdouble);
    cout << "Полученное число: " << answer << endl;

    answer = power(numint);
    cout << "Полученное число: " << answer << endl;

    answer = power(numchar);
    cout << "Полученное число: " << answer << endl;

    answer = power(numlong);
    cout << "Полученное число: " << answer << endl;

    answer = power(numfloat);
    cout << "Полученное число: " << answer << endl;

    return 0;
}