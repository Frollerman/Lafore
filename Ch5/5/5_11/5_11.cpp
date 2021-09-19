#include <iostream>

using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};

sterling input()
{
    sterling st;
    char dot;
    cout << "Введите число фунтов, шиллингов и пенсов: J";
    cin >> st.pounds >> dot >> st.shillings >> dot >> st.pence;

    return st;
}

sterling sum(sterling s1, sterling s2)
{
    sterling s3;
    s3.pounds = s1.pounds + s2.pounds;
    s3.shillings = s1.shillings + s2.shillings;
    s3.pence = s1.pence + s2.pence;
    if (s3.pence > 11)
    {
        s3.shillings++;
        s3.pence -= 12;
    }
    if (s3.shillings > 19)
    {
        s3.pounds++;
        s3.shillings -= 20;
    }
    
    return s3;
}

void show(sterling st)
{
    cout << "Сумма = J" << st.pounds << "." << st.shillings << "." << st.pence << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    sterling one, two, three;
    one = input();
    two = input();
    three = sum(one, two);
    show(one);
    show(two);
    show(three);

    return 0;
}
