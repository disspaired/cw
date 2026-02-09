#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//double f(double x) {
//    return 3 * pow(x, 4) + 8 * pow(x, 3) + 6 * pow(x, 2) - 10;
//}
//
//void bisect(double a, double b, double eps) {
//    if (f(a) * f(b) >= 0) {
//        cout << "Na otrezke [" << a << ", " << b << "] korney net." << endl;
//        return;
//    } 
//
//    double c;
//    while ((b - a) > eps) {
//        c = (a + b) / 2.0;
//        if (f(a) * f(c) < 0) b = c;
//        else a = c;
//    }
//
//    cout << fixed << setprecision(3);
//    cout << "Koren na [" << a << ", " << b << "]: " << (a + b) / 2.0 << endl;
//}
//
//int main() {
//    double eps = 0.001;
//
//    bisect(-2.5, -2.0, eps); 
//    bisect(0.5, 1.0, eps);


    double f(double x) {
        return 2 * std::log(x) + 2 * x - 3;
    }

    void bisect(double a, double b, double eps) {
        if (f(a) * f(b) >= 0) {
            cout << "Na otrezke [" << a << ", " << b << "] korney net." << endl;
            return;
        }

        double c;
        while ((b - a) > eps) {
            c = (a + b) / 2.0;
            if (f(a) * f(c) < 0) b = c;
            else a = c;
        }

        cout << fixed << setprecision(3);
        cout << "Koren na [" << a << ", " << b << "]: " << (a + b) / 2.0 << endl;
    }


    double phi(double x, double k) {
        return x - f(x) / k;
    }

    void solve(double x0, double k, double eps2) {
        double x_next = x0;
        double x_prev;
        int iter = 0;

        do {
            x_prev = x_next;
            x_next = phi(x_prev, k);
            iter++;
        } while (abs(x_next - x_prev) > eps2 && iter < 1000);

        cout << "Koren: " << fixed << setprecision(3) << x_next
            << " (Iteraciy: " << iter << ")" << endl;
    }

    int main() {
        double eps = 0.01;
        double eps2 = 0.001;

        bisect(1.2, 1.4, eps);

        solve(1.2, 1.4, eps2);


    return 0;
}
