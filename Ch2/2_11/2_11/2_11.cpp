#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setw(10) << "Имя" << setw(20) << "Адрес" << setw(20) << "Город" << endl
        << "------------------------------------------------------------" << endl
        << setw(10) << "Петров" << setw(10) << "Василий" << setw(20) << "Кленовая 16" << setw(20) << "Санкт-Петербург" << endl
        << setw(10) << "Иванов" << setw(10) << "Сергей" << setw(20) << "Осиновая 3" << setw(20) << "Находка" << endl
        << setw(10) << "Сидоров" << setw(10) << "Иван" << setw(20) << "Березовая 21" << setw(20) << "Калининград" << endl;
    return 0;
}
