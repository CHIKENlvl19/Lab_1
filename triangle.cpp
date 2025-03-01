#include <iostream>
#include <cmath>

float Perimeter(float a, float b, float c) {
    return a + b + c;
}

float Area(float a, float b, float c) {
    float s = Perimeter(a, b, c) / 2; // Полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool isIsosceles(float a, float b, float c) {
    return (a == b || b == c || a == c);
}

int main() {
    setlocale(LC_ALL, "Russian");
    float side1, side2, side3;

    std::cout << "Введите длины сторон треугольника: ";
    std::cin >> side1 >> side2 >> side3;

    float perimeter = Perimeter(side1, side2, side3);
    float area = Area(side1, side2, side3);

    std::cout << "Периметр треугольника: " << perimeter << std::endl;
    std::cout << "Площадь треугольника: " << area << std::endl;

    if (isIsosceles(side1, side2, side3)) {
        std::cout << "Треугольник является равнобедренным." << std::endl;
    }
    else {
        std::cout << "Треугольник не является равнобедренным." << std::endl;
    }

    return 0;
}
