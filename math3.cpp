#include <iostream>
#include <cmath>   // Для fabs()
#include <cstdio>  // Для printf

using namespace std;
////задание 1
int main() {
//    // 1. Указываем размер системы числом 4
//    double epsilon = 0.0001;
//
//    // 2. Матрица B (только коэффициенты ПЕРЕД иксами). 
//    // В каждой строке ДОЛЖНО БЫТЬ ровно 4 числа.
//    double B[4][4] = {
//        {0.32, -0.13, -0.08,  0.16},
//        {0.17, -0.22,  0.13, -0.21},
//        {0.05, -0.08,  0.0,   0.34}, // Тут 0.0, так как x3 в 3-м уравнении нет
//        {0.12,  0.11, -0.19,  0.06}
//    };
//
//    // 3. Свободные члены (числа, которые прибавляются в конце строк)
//    double g[4] = { 2.42, 1.48, -0.16, 1.64 };
//
//    // 4. Начальные значения (берем их равными g)
//    double x[4] = { 2.42, 1.48, -0.16, 1.64 };
//    double x_next[4];
//
//    printf("Start iterations...\n");
//
//    for (int step = 1; step <= 50; step++) {
//        double max_diff = 0;
//
//        for (int i = 0; i < 4; i++) {
//            x_next[i] = g[i]; // Сначала записываем свободное число
//            for (int j = 0; j < 4; j++) {
//                x_next[i] += B[i][j] * x[j]; // Прибавляем коэффициенты * иксы
//            }
//
//            // Проверка точности
//            double diff = fabs(x_next[i] - x[i]);
//            if (diff > max_diff) max_diff = diff;
//        }
//
//        // передаем каждый элемент массива отдельно через индекс [i]
//        printf("Step %d: x1=%.4f, x2=%.4f, x3=%.4f, x4=%.4f (err:%.6f)\n",
//            step, x_next[0], x_next[1], x_next[2], x_next[3], max_diff);
//
//        // Если точность достигнута — выходим
//        if (max_diff < epsilon) {
//            break;
//        }
//
//        // Обновляем x для следующего шага
//        for (int i = 0; i < 4; i++) {
//            x[i] = x_next[i];
//        }
//    }
//
//    printf("\nFinal Result:\n");
//    printf("x1 = %.5f\nx2 = %.5f\nx3 = %.5f\nx4 = %.5f\n", x[0], x[1], x[2], x[3]);


    //задание 2
    double A[3][3] = {
   {4.5, -2.1, 3.2},
   {2.5, 5.8, -0.5},
   {0.9, 2.7, -3.8}
    };

    // Правая часть (1D массив - просто список чисел)
    double B[3] = { -1.2, 3.5, 2.4 };

    // Массив для иксов
    double x[3] = { 0.0, 0.0, 0.0 };

    double epsilon = 0.001; // Точность
    double max_diff;
    int iteration = 0;

    cout << "Iter.\tx1\t\tx2\t\tx3\t\tError" << endl;
    cout << "------------------------------------------------------------" << endl;

    do {
        iteration++;
        max_diff = 0;

        for (int i = 0; i < 3; i++) {
            double old_xi = x[i];
            double sum = B[i];

            for (int j = 0; j < 3; j++) {
                if (i != j) {
                    // Используем уже обновленные x[j] (суть метода Зейделя)
                    sum -= A[i][j] * x[j];
                }
            }
            x[i] = sum / A[i][i];

            // Проверка точности (разница между текущим и прошлым шагом)
            double current_diff = fabs(x[i] - old_xi);
            if (current_diff > max_diff) {
                max_diff = current_diff;
            }
        }

        // Вывод итерации: выводим каждый элемент массива отдельно
        cout << iteration << "\t" << x[0] << "\t" << x[1] << "\t" << x[2] << "\t" << max_diff << endl;

    } while (max_diff > epsilon && iteration < 100);

    cout << "------------------------------------------------------------" << endl;
    cout << "Result:" << endl;
    cout << "x1 = " << x[0] << endl;
    cout << "x2 = " << x[1] << endl;
    cout << "x3 = " << x[2] << endl;

    return 0;
}
