#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
//Задание 1
//// Функция f(x) = 3x^4 + 8x^3 + 6x^2 - 10
//double f(double x) {
//    return 3 * std::pow(x, 4) + 8 * std::pow(x, 3) + 6 * std::pow(x, 2) - 10;
//}
//
//// Реализация метода дихотомии
//double bisection(double a, double b, double eps) {
//    double c;
//    while ((b - a) / 2.0 > eps) {
//        c = (a + b) / 2.0;
//
//        // Если f(c) и f(a) разных знаков, корень в левой половине
//        if (f(a) * f(c) < 0) {
//            b = c;
//        }
//        else {
//            a = c;
//        }
//    }
//    return (a + b) / 2.0;
//}
//
//int main() {
//    char* locale = setlocale(LC_ALL, "");
//    double eps = 0.001; // Точность
//
//    // Известные отрезки локализации
//    double a1 = -3.0, b1 = -2.0;
//    double a2 = 0.0, b2 = 1.0;
//
//    std::cout << std::fixed << std::setprecision(4);
//
//    std::cout << "Корень на отрезке [" << a1 << ", " << b1 << "]: "
//        << bisection(a1, b1, eps) << std::endl;
//
//    std::cout << "Корень на отрезке [" << a2 << ", " << b2 << "]: "
//        << bisection(a2, b2, eps) << std::endl;
//
//    return 0;
//}

//Задание 2
// Функция f(x) = 2 ln x + 2x - 3
double f(double x) {
    return 2 * log(x) + 2 * x - 3;
}

// Реализация метода дихотомии
double bisection(double a, double b, double eps) {
    double c;
    while ((b - a) / 2.0 > eps) {
        c = (a + b) / 2.0;

        // Если f(c) и f(a) разных знаков, корень в левой половине
        if (f(a) * f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return (a + b) / 2.0;
}

int main() {
    char* locale = setlocale(LC_ALL, "");
    double eps = 0.001; // Точность

    // Известные отрезки локализации
    double a1 = 1.0, b1 = 2.0;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "Корень на отрезке [" << a1 << ", " << b1 << "]: "
        << bisection(a1, b1, eps) << std::endl;

    double x0 = 1.5;           // Начальная точка на отрезке [1, 2]
    double epsilon = 0.000001; // Точность
    double x_next;
    int step = 0;

    // Настройка вывода без iomanip
    std::cout.precision(6);
    std::cout.setf(std::ios::fixed);

    std::cout << "Step\tValue\n";

    while (true) {
        x_next = f(x0);
        step++;

        std::cout << step << "\t" << x_next << "\n";

        // Проверка условия остановки |x_n - x_{n-1}| < eps
        if (std::abs(x_next - x0) < epsilon) {
            break;
        }

        x0 = x_next;

        // Предохранитель от бесконечного цикла
        if (step > 10) {
            std::cout << "Метод не сходится\n";
            return 1;
        }
    }

    std::cout << "\nКорень на отрезке[1, 2]: " << x_next << "\n";

    return 0;
}
