#include <iostream>

using namespace std;

class angle
{
private:
    int grad;
    float min;
    char dir;
public:
    angle(int gr, float m, char d) : grad(gr), min(m), dir(d)
    { }
    void input()
    {
        cout << "Введите количество градусов: ";
        cin >> grad;
        cout << "Введите количество минут: ";
        cin >> min;
        cout << "Введите направление: ";
        cin >> dir;
    }
    void output()
    {
        cout << "Координаты: " << grad << '°' << min << "\' " << dir << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    angle coor(140, 44.5, 'N');
    char prod = 'y';
    coor.output();
    do
    {
        coor.input();
        coor.output();
        cout << "Продолжить (y/n)?";
        cin >> prod;
    } while (prod != 'n');


    return 0;
}
