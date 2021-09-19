#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class tollBooth
{
private:
    unsigned int cars;
    double income;
public:
    tollBooth() : cars(0), income(0)
    {}
    void payingCar()
    {
        cars++;
        income += 0.50;
        cout << "Заплатил" << endl;
    }
    void nopayCar()
    {
        cars++;
        cout << "Не заплатил" << endl;
    }
    void display()const
    {
        cout << "Машин: " << cars << "\tВыручка: $" << income << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    tollBooth booth;
    bool prod = true;

    while (prod)
    {
        if (_kbhit())
        {
            switch (_getch())
            {
                case 13:
                    booth.payingCar();
                    break;
                case 32:
                    booth.nopayCar();
                    break;
                case 27:
                    booth.display();
                    prod = false;
                    break;
            }
        }
    }

    return 0;
}
