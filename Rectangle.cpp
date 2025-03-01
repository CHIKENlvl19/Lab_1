#include <iostream>

int perimeterRectangle(int a, int b) {
    return (a + b) * 2 ;
}

int areaRectangle(int a, int b) {
    return a * b;
}

double diagonalRectangle(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    std::cout << "Выберите действие с прямоугольником:" << std::endl;
    std::cout << "1) Вычисление периметра" << std::endl;
    std::cout << "2) Вычисление площади" << std::endl;
    std::cout << "3) Вычесление длины диагонали" << std::endl;
    int num;
    std::cin >> num;

    std::cout << "Введите значение длины стороны a:" << std::endl;
    int a;
    std::cin >> a;

    std::cout << "Введите значение длины стороны b:" << std::endl;
    int b;
    std::cin >> b;

    if (num == 1) {
        std::cout <<"Периметр равен:"<< perimeterRectangle(a, b);
    } else if (num == 2) {
        std::cout <<"Площадь равна:"<< areaRectangle(a, b);
    } else if (num == 3) {
        std::cout <<"Длина диагонали равна:"<< diagonalRectangle(a, b);
    }

}
