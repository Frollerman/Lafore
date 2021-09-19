#include <iostream>

using namespace std;

long hms_to_secs(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int hours, minutes, seconds;
    char cont;

    do
    {
        cont = 0;
        system("CLS");
        cout << "Введите количество часов: ";
        cin >> hours;
        cout << "Введите количество минут: ";
        cin >> minutes;
        cout << "Введите количество секунд: ";
        cin >> seconds;
        
        cout << "Итого " << hms_to_secs(hours, minutes, seconds) << " секунд" << endl;

        cout << endl << "Еще раз? (y/n)? ";
        while (cont != 'y' && cont != 'n')
        {
            cin >> cont;
            if (cont != 'y' && cont != 'n')
            {
                cout << "Введите y или n! ";
                continue;
            }
        }
    } while (cont == 'y');

    return 0;
}
