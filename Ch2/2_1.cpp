#include <iostream>
using namespace std;
//2_1

int main()
{
    double gallon, cubFoot;
    cout << "Введите число галлонов: ";
    cin >> gallon;
    cubFoot = gallon / 7.481;
    cout << gallon << " галлон(а/ов) - это " << cubFoot << " кубических футов";

    return 0;
}