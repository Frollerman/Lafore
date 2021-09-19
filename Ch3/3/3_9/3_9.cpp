#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int chel, place, rassad = 1;
    cout << "Введите количество человек: ";
    cin >> chel;
    cout << "Введите количество мест: ";
    cin >> place;
    for (int i = 0; i < place; i++)
    {
        rassad *= chel;
        chel--;
    }
    cout << "Число возможных рассадок гостей за столом: " << rassad << endl;

    return 0;
}
