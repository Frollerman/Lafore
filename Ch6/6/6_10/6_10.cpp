#include <iostream>

using namespace std;

class angle
{
private:
    int grad;
    float min;
    char dir;
public:
    void input()
    {
        cout << "\nВведите количество градусов: ";
        cin >> grad;
        cout << "Введите количество минут: ";
        cin >> min;
        cout << "Введите направление: ";
        cin >> dir;
    }
    void output()
    {
        cout << grad << '°' << min << "\' " << dir;
    }
};

class ship
{
private:
    static unsigned int total;
    unsigned int nomer;
    angle shir;
    angle dolg;
public:
    ship() : nomer(++total)
    { }
    void input()
    {
        cout << "Введите широту: ";
        shir.input();
        cout << "Введите долготу: ";
        dolg.input();
    }
    void output()
    {
        cout << "Мой порядковый номер: " << nomer << endl;
        cout << "Мои координаты: ";
        shir.output();
        cout << ", ";
        dolg.output();
        cout << endl;
    }
};

unsigned int ship::total = 0;

int main()
{
    setlocale(LC_ALL, "ru");

    ship s1, s2, s3;

    s1.input();
    s2.input();
    s3.input();

    s1.output();
    s2.output();
    s3.output();

    return 0;
}
