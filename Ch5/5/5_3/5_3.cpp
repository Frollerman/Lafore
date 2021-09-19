#include <iostream>

using namespace std;

void zeroSmaller(int& n1, int& n2)
{
    if (n1 < n2)
    {
        n1 = 0;
    }
    else if (n2 < n1)
    {
        n2 = 0;
    }
    else
    {
        cout << "Числа равны!" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int number1, number2;

    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    zeroSmaller(number1, number2);

    cout << "Первое число: " << number1 << endl << "Второе число: " << number2 << endl;

    return 0;
}
