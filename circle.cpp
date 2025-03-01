#include <iostream>

using namespace std;

float circle_length(int R){ // функция для расчета длины окружности
    return 2 * 3.14 * R;
}

float circle_area(int R){ // функция для расчета площади окружности
    return 3.14 * R * R;
}

float circle_sector_area(int R, float angle){ // функция для расчета площади сектора окружности
    return (angle / 360) * circle_area(R);
}

int main() 
{
    short int choice = 0; // переменная для выбора действия

    while(1){ // бесконечный цикл меню
        cout << "\nВыберите действие с окружностью:\n";
        cout << "1: Вычислить длину окружности\n";
        cout << "2: Вычислить площадь круга\n";
        cout << "3: Вычислить площадь круогового сектора\n";
        cout << "4: Выход из программы\n";

        cin >> choice;

        if(choice == 1){
            int R;
            cout << "Введите радиус окружности в сантиметрах: ";
            cin >> R;
            cout << "Длина окружности равна: " << circle_length(R) << endl;
        }

        if(choice == 2){
            int R;
            cout << "Введите радиус круга в сантиметрах: ";
            cin >> R;
            cout << "Площадь круга равна: " << circle_area(R) << endl;
        }

        if(choice == 3){
            int R;
            float angle;
            cout << "Введите радиус круга в сантиметрах: ";
            cin >> R;
            cout << "Введите угол в градусах: ";
            cin >> angle;
            cout << "Площадь кругового сектора равна: " << circle_sector_area(R, angle) << endl;
        }

        if(choice == 4){
            return 0;
        }

        else if (choice > 4 || choice < 1){ // если пользователь ввел не существующий номер
            cout << "Несуществующий выбор. Пожалуйста, повторите попытку\n";
        }
    }

    return 0;
}