#include <iostream>
#include <math.h> 
#include <cmath>

inline int sqr(int a) {
    return a * a;
}

inline int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else  {
        return b;
    }
}

inline int mod(int a) {
    if (a > 0) {
        return a;
    }
    else  {
        return a * (-1);
    }
}

inline int pos(int a) {
    if (a > 0) {
        return true;
    }
    else  {
        return false;
    }
}

inline int sum(int a, int b) {
    return a + b;
}

inline int six(int a, int b) {
    return (a + b) / 2;
}

inline int even(int a) {
    if (a % 2 == 0) {
        return true;
    }
    else {
       return false;
    }
}

inline int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }
    else if (b < a && b < c) {
        return c;
    }
    else if (c < a && c < b) {
        return c;
    }
}

inline int treangle(int a, int b) {
    return 2 * a + b;
}
int a[5] = { 1, 2, 3, 4, 5 };
inline int mass(int a[5]) {
    return a[0] + a[1];
}

int b[5] = { 1, 2, 3, 4, 5 };
inline int div(int b[5]) {
    return b[5] - b[1];
}

int c[3] = { 1, 2, 3 };
inline int neg(int c[3]) {
    for (int i = 0; i < 3; i++) {
        if (a[i] < 0) {
            return true;
        }
        else {
            return false;
        }
    }
}

int d[3] = { 1, 2, 3 };
inline int equal(int d[3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (d[i] == d[j]) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

inline int modl(int x) {
    return x < 0 ? -x : x;
}
inline int modl(double x) {
    return x < 0 ? -x : x;
}

inline int max1(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return c;
    }
    else if (c > a && c > b) {
        return c;
    }
}

inline int diz(int a) {
    if (0 > a > 10) {
        return true;
    }
    else {
        return false;
    }
}

int arrg[2][2] = {
    {1,2},
    {3,4}
};
inline int sumDiag(int arr[2][2]) {
    return arr[0][0] - arr[1][1];
}

int main() {
    std::cout<<sqr(5)<<std::endl;
    std::cout << max(3, 9) << std::endl;
    std::cout << mod(-5) << std::endl;
    std::cout << pos(3) << std::endl;
    std::cout << sum(4, 5) << std::endl;
    std::cout << six(6, 8) << std::endl;
    std::cout << even(52) << std::endl;
    std::cout << min(5, 2, 6) << std::endl;
    std::cout << treangle(3, 5) << std::endl;
    std::cout << mass(a) << std::endl;
    std::cout << div(b) << std::endl;
    std::cout << neg(c) << std::endl;
    std::cout << modl(4) << std::endl;
    std::cout << modl(3.14) << std::endl;
    std::cout << max1(2, 6, 42) << std::endl;
    std::cout << diz(7) << std::endl;
    std::cout << sumDiag(arrg) << std::endl;
    return 0;
}

//Функция слишком тяжелая и коампилятор просто проигнорирует inline.
