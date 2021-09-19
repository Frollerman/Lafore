#include <iostream>

using namespace std;

void swap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Первое число - " << num1 << endl << "Второе число - " << num2 << endl;
    swap(num1, num2);
    cout << "Первое число - " << num1 << endl << "Второе число - " << num2 << endl;

    return 0;
}
