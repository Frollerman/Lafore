#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int number, mnoj;
    cout << "Введите число: ";
    cin >> number;
    mnoj = 1;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << setw(6) << number * mnoj;
            mnoj++;
        }
        cout << endl;
    }
}

