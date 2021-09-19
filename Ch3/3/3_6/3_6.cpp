#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    unsigned int numb;
    unsigned long fact = 1;
    
    do
    {
        cout << "Введите целое число: ";
        cin >> numb;
        for (int j = numb; j > 0; j--)
            fact *= j;
        if (numb)
            cout << "Факториал числа " << numb << " равен " << fact << endl;
    } while (numb);
    

    return 0;
}
