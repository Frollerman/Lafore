#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    string name;
    long number;
public:
    void getdata()
    {
        cout << "Введите имя: ";
        cin.get();
        getline(cin, name);
        cout << "Введите номер: ";
        cin >> number;
    }
    void putdata()
    {
        cout << "Сотрудник по имени " << name << ", номер " << number << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    
    const int SIZE = 5;
    employee arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i].getdata();
    }

    for (int i = 0; i < SIZE; i++)
    {
        arr[i].putdata();
    }
}
