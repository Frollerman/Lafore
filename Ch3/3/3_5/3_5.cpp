#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int space = 20, num_of_x = 1;
    
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < num_of_x; j++)
        {
            cout << "X";
        }
        cout << endl;
        space--;
        num_of_x += 2;
    }
    
}
