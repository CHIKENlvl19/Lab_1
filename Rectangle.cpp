#include <iostream> //Комментарий для защиты

int perimeterRectangle(int a, int b) { //Функция для вычисления периметра прямоугольника
    return (a + b) * 2 ;
}

int areaRectangle(int a, int b) { //Функция для вычисления площади прямоугольника
    return a * b;
}

double diagonalRectangle(double a, double b) { //Функция для вычисления длины диагонали прямоугольника
    return sqrt(a * a + b * b);
}

int main() { //Основная функция программы
    while(1) {
        std::cout << "Выберите действие с прямоугольником:" << std::endl;
        std::cout << "1) Вычисление периметра" << std::endl;
        std::cout << "2) Вычисление площади" << std::endl;
        std::cout << "3) Вычесление длины диагонали" << std::endl;
        std::cout << "4) Выйти" << std::endl;
        int num;
        std::cin >> num;

        if (num == 4) {
            std::cout <<"Работа программы прекращена"<< std::endl;
            break;
        }else if (num > 3 or num < 1) {
            std::cout <<"Ошибка некорректное значение"<< std::endl;
            continue;
        }

        std::cout << "Введите значение длины стороны a:" << std::endl;
        int a;
        std::cin >> a;

        std::cout << "Введите значение длины стороны b:" << std::endl;
        int b;
        std::cin >> b;

        if (num == 1) {
            std::cout <<"Периметр равен:"<< perimeterRectangle(a, b) << std::endl;
        } else if (num == 2) {
            std::cout <<"Площадь равна:"<< areaRectangle(a, b) << std::endl;
        } else if (num == 3) {
            std::cout <<"Длина диагонали равна:"<< diagonalRectangle(a, b) << std::endl;
        }
    }
}
