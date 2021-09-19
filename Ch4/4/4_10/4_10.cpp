#include <iostream>

using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    setlocale(LC_ALL, "ru");

    sterling st;
    double decpounds, decfrac;

    cout << "Введите число десятичных фунтов: ";
    cin >> decpounds;

    st.pounds = static_cast<int>(decpounds);
    decfrac = decpounds - st.pounds;
    st.shillings = decfrac * 20;
    st.pence = (decfrac * 20 - st.shillings) * 12;

    cout << "Введенная сумма: " << st.pounds << " фунтов, " << st.shillings << " шиллингов, " << st.pence << " пенсов." << endl;

    return 0;
}
