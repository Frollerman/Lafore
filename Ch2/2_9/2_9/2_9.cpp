#include <iostream>

using namespace std;
//2_9

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, c, d;
    char dummychar;

    cout << "Введите первую дробь: ";
    cin >> a >> dummychar >> b;
    cout << "Введите вторую дробь: ";
    cin >> c >> dummychar >> d;
    cout << "Сумма равна " << (a * d + b * c) << "/" << (b * d) << endl;
    

    return 0;
}
