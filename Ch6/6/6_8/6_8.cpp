#include <iostream>

using namespace std;

class Por
{
private:
    static unsigned int total;
    unsigned int nomer;
public:
    Por() : nomer(++total)
    { }
    void output()
    {
        cout << "Мой порядковый номер: " << nomer << endl;
    }
};

unsigned int Por::total = 0;

int main()
{
    setlocale(LC_ALL, "ru");

    Por nom1, nom2, nom3;

    nom1.output();
    nom2.output();
    nom3.output();

    return 0;
}
