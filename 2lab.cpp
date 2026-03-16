#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

// Функция f(x) = 3x^4 + 8x^3 + 6x^2 - 10
double f(double x) {
    return 3 * std::pow(x, 4) + 8 * std::pow(x, 3) + 6 * std::pow(x, 2) - 10;
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
    double a1 = -3.0, b1 = -2.0;
    double a2 = 0.0, b2 = 1.0;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "Корень на отрезке [" << a1 << ", " << b1 << "]: "
        << bisection(a1, b1, eps) << std::endl;

    std::cout << "Корень на отрезке [" << a2 << ", " << b2 << "]: "
        << bisection(a2, b2, eps) << std::endl;

    return 0;
}
