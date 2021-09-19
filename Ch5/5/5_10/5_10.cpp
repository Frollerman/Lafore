#include <iostream>

using namespace std;

unsigned int count_global = 0;

void func()
{
    /*static unsigned int count_local = 0;
    cout << "Функция была вызвана " << count_local << " раз(а)" << endl;
    count_local++;*/

    cout << "Функция была вызвана " << count_global << " раз(а)" << endl;
    count_global++;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int iter = 0;
    do
    {
        func();
        iter++;
    } while (iter < 15);

    return 0;
}
