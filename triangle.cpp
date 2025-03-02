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

bool isValidTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    setlocale(LC_ALL, "Russian");
    float side1, side2, side3;

    std::cout << "Введите длины сторон треугольника: ";
    std::cin >> side1 >> side2 >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        std::cout << "Стороны должны быть положительными!" << std::endl;
    } else if (!isValidTriangle(side1, side2, side3)) {
        std::cout << "Стороны не могут образовать треугольник!" << std::endl;
    } else {
        float perimeter = Perimeter(side1, side2, side3);
        float area = Area(side1, side2, side3);

        std::cout << "Периметр треугольника: " << perimeter << std::endl;
        std::cout << "Площадь треугольника: " << area << std::endl;

        if (isIsosceles(side1, side2, side3)) {
            std::cout << "Треугольник является равнобедренным." << std::endl;
        } else {
            std::cout << "Треугольник не является равнобедренным." << std::endl;
        }
    }

    return 0;
}
