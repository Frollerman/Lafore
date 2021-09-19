#include <iostream>

using namespace std;

const int LIMIT = 10;

class safearray
{
private:
    int sarr[LIMIT];
public:
    void putel(unsigned int index, int value)
    {
        if (index >= 0 && index < LIMIT)
        {
            sarr[index] = value;
        }
        else
        {
            cout << endl << "OUTSIDE ARRAY" << endl;
        }
    }
    int getel(unsigned int index)
    {
        if (index >= 0 && index < LIMIT)
        {
            return sarr[index];
        }
        else
        {
            cout << endl << "OUTSIDE ARRAY" << endl;
        }
    }
};

int main()
{
    safearray sa1;
    int temp = 12345;
    sa1.putel(11, temp);
    temp = 54321;
    cout << "temp = " << temp << endl;
    temp = sa1.getel(-1);
    cout << "temp = " << temp << endl;
}

