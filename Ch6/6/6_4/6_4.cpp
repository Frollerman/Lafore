#include <iostream>

using namespace std;

class employee
{
private:
    int number;
    float oklad;
public:
    void setNum()
    {
        cout << "Введите номер сотрудника: ";
        cin >> number;
    }
    void setOklad()
    {
        cout << "Введите оклад сотрудника: $";
        cin >> oklad;
    }
    void getNum()
    {
        cout << "Номер сотрудника: " << number << endl;
    }
    void getOklad()
    {
        cout << "Оклад сотрудника: $" << oklad << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    employee rab1, rab2, rab3;

    rab1.setNum();
    rab1.setOklad();
    rab2.setNum();
    rab2.setOklad();
    rab3.setNum();
    rab3.setOklad();

    rab1.getNum();
    rab1.getOklad();
    rab2.getNum();
    rab2.getOklad();
    rab3.getNum();
    rab3.getOklad();

    return 0;
}
