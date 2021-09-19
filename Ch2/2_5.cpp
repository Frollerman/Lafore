#include <iostream>
#include <ctype.h>

using namespace std;
//2_5

int main()
{
    char letter;
    cout << "Введите строчную или заглавную букву: ";
    cin >> letter;
    cout << islower(letter) << endl;

    return 0;
}