#include <iostream>
#include <iomanip>

using namespace std;
//2_6

int main()
{
    double dollar;
    cout << "Введите количество долларов: ";
    cin >> dollar;
    cout << setw(20) << "Фунтов стерлингов:" << setw(8) << dollar / 1.487 << endl
    << setw(20) << "Франков:" << setw(8) << dollar / 0.172 << endl
    << setw(20) << "Немецких марок:" << setw(8) << dollar / 0.584 << endl
    << setw(20) << "Японских йен:" << setw(8) << dollar / 0.00955 << endl;

    return 0;
}