#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    float nach_vklad, proc, sum;
    int age = 0;
    cout << "Введите начальный вклад: ";
    cin >> nach_vklad;
    cout << "Введите конечную сумму: ";
    cin >> sum;
    cout << "Введите процентную ставку: ";
    cin >> proc;
    
    while ((sum - nach_vklad) > 0)
    {
        nach_vklad += nach_vklad * (proc / 100);
        age++;
    }
    
    /*for (int i = 0; i < age; i++)
    {
        nach_vklad += nach_vklad * (proc / 100);
    }*/
    cout << "Через " << age << " лет вы получите " << nach_vklad << " доллара. (требовалось " << sum << " доллара)" << endl;


    return 0;
}
