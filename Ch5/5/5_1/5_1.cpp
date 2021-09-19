#include <iostream>

using namespace std;

float circarea(float r)
{
    const float PI = 3.14159F;
    return PI * r * r;
}

int main()
{
    setlocale(LC_ALL, "ru");

    float rad;
    
    cout << "Введите радиус окружности: ";
    cin >> rad;
    float area = circarea(rad);
    cout << "Площадь круга равна " << area << endl;

    return 0;
}
