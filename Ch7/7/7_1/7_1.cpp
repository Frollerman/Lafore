#include <iostream>

using namespace std;

void reversit(char mas[])
{
    int length = strlen(mas);
    for (int i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        char temp = mas[j];
        mas[j] = mas[i];
        mas[i] = temp;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 80;
    char arr[SIZE];

    cout << "Введите строку: ";
    cin.get(arr, SIZE);

    reversit(arr);
    
    cout << "Полученная строка: " << arr << endl;
}
