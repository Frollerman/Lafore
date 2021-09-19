#include <iostream>

using namespace std;

const int LIMIT = 10;

class matrix
{
private:
    int sarr[LIMIT][LIMIT];
public:
    void putel(unsigned int index1, unsigned int index2, int value)
    {
        if (index1 >= 0 && index1 < LIMIT)
        {
            if (index2 >= 0 && index2 < LIMIT)
            {
                sarr[index1][index2] = value;
            }
        }
        else
        {
            cout << endl << "OUTSIDE ARRAY" << endl;
        }
    }
    int getel(unsigned int index1, unsigned int index2)
    {
        if (index1 >= 0 && index1 < LIMIT)
        {
            if (index2 >= 0 && index2 < LIMIT)
            {
                return sarr[index1][index2];
            }
        }
        else
        {
            cout << endl << "OUTSIDE ARRAY" << endl;
        }
    }
};

int main()
{
    matrix m1;
    int temp = 12345;
    m1.putel(4, 3, temp);
    temp = 54321;
    cout << "temp = " << temp << endl;
    temp = m1.getel(4, 3);
    cout << "temp = " << temp << endl;
}

