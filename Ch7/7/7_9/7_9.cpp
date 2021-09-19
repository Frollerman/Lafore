// stakaray.cpp
// класс стек
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class queue
{
private:
    enum { MAX = 10 }; // немного нестандартный синтаксис
    int q[MAX];    // queue
    int head, tail;           // queue first and end
public:
    queue() // конструктор
    {
        head = 0;
        tail = -1;
    }
    void put(int var) // queue input
    {
        if (tail == MAX - 1)
        {
            tail = -1;
        }
        q[++tail] = var;
    }
    int get() // queue output
    {
        int temp = q[head];
        for (int i = 0; i < tail; i++)
        {
            q[i] = q[i + 1];
        }
        tail--;
        return temp;
    }
};
///////////////////////////////////////////////////////////
int main()
{
    queue q1;

    q1.put(11);
    q1.put(22);
    cout << "1: " << q1.get() << endl;
    cout << "2: " << q1.get() << endl;
    q1.put(33);
    q1.put(44);
    q1.put(55);
    q1.put(66);
    cout << "3: " << q1.get() << endl;
    cout << "4: " << q1.get() << endl;
    cout << "5: " << q1.get() << endl;
    cout << "6: " << q1.get() << endl;
    return 0;
}


