#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
using usi = unsigned short int;

bool trapezoid_check(usi a, usi b, usi c, usi d)
{
    if ((a+b+c)>d && (a+b+d)>c && (a+c+d)>b && (b+c+d)>a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

usi perimeter(usi a, usi b, usi c, usi d)
{
    return a+b+c+d;
}

float middle_line(usi a, usi b)
{
    return (float)(a+b)/2;
}

float area(usi a, usi b, usi c, usi d)
{
    return ((float)(a+b)/2) * sqrt(pow(c, 2) - pow((((pow(a-b, 2)) + pow(c, 2) - pow(d, 2)) / abs(2*(a-b))), 2));
}


int main()
{
    usi base_a;
    cout << "Введите верхнее основание трапеции: ";
    cin >> base_a;

    usi base_b;
    cout << "Введите нижнее основание трапеции: ";
    cin >> base_b;

    usi left_side;
    cout << "Введите левую сторону трапеции: ";
    cin >> left_side;

    usi right_side;
    cout << "Введите правую сторону трапеции: ";
    cin >> right_side;

    if (trapezoid_check(base_a, base_b, left_side, right_side) == true)
    {
        cout << endl << "Периметр трапеции: " << perimeter(base_a, base_b, left_side, right_side) << endl;
        cout << "Средняя линия трапеции: " << middle_line(base_a, base_b) << endl;
        cout << "Площадь трапеции: " << area(base_a, base_b, left_side, right_side) << endl;
    }
    else
    {
        cout << "Такой трапеции не существует!";
    }

    return 0;
}

