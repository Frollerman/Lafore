#include <iostream>
#include <string>

using namespace std;

int maxint(int mas[], int size)
{
    int index = 0, max = mas[0];
    for (int i = 1; i < size; i++)
    {
        if (max < mas[i])
        {
            max = mas[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int SIZE = 5;

    int arr[SIZE];

    cout << "Введите числа ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "Наибольший элемент: " << arr[maxint(arr, SIZE)]
        << " с индексом " << maxint(arr, SIZE);

}
