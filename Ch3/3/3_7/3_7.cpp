#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    float vklad, proc;
    int age;
    cout << "Введите начальный вклад: ";
    cin >> vklad;
    cout << "Введите число лет: ";
    cin >> age;
    cout << "Введите процентную ставку: ";
    cin >> proc;
    for (int i = 0; i < age; i++)
    {
        vklad += vklad * (proc / 100);
    }
    cout << "Через " << age << " лет вы получите " << vklad << " доллара." << endl;


    return 0;
}
