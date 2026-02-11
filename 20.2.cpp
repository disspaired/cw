#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

void printEvenNumbers(int N) {
    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void printMessage(string message, int count = 1) {
    for (int i = 0; i < count; ++i) {
        cout << message << endl;
    }
}


int globalCounter = 0;

void incrementGlobal() {
    globalCounter++;
}

int globalVar = 100;

void demonstrateScope() {
    int globalVar = 50;
    cout << "Локальная globalVar: " << globalVar << endl;
    cout << "Глобальная globalVar: " << ::globalVar << endl;
}

void countCalls() {
    static int callCount = 0;
    callCount++;
    cout << "Функция вызвана " << callCount << " раз" << endl;
}


int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int findMin(int arr[], int size) {
    if (size <= 0) return 0;

    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void incrementArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i]++;
    }
}

int diagonalSum(int matrix[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

double maxValue(double a, double b) {
    return (a > b) ? a : b;
}

int maxValue(int arr[], int size) {
    if (size <= 0) return 0;

    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void print(int value) {
    cout << value << endl;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

inline int absValue(int x) {
    return (x < 0) ? -x : x;
}

inline bool isGreater(int a, int b) {
    return a > b;
}


template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T findMax(T arr[], int size) {
    if (size <= 0) return T();

    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swapValues(arr[i], arr[minIndex]);
        }
    }
}


template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T>
T sum(T arr[], int size) {
    T total = T();
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

template <typename T>
void print(T value) {
    cout << value << endl;
}

template <typename T>
void print(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


template <typename T, typename U>
auto addWithAuto(T a, U b) {
    return a + b;
}

void demonstrateDecltype() {
    int a = 5;
    double b = 3.14;
    decltype(a + b) result = a + b;
    cout << "decltype(a + b): " << result << endl;
}


template <typename T, typename U>
auto addWithTrailingReturn(T a, U b) -> decltype(a + b) {
    return a + b;
}


template <typename T>
auto rangeOfArray(T arr[], int size) -> decltype(findMax(arr, size) - findMin(arr, size)) {
    if (size <= 0) return decltype(findMax(arr, size) - findMin(arr, size))();

    return findMax(arr, size) - findMin(arr, size);
}

int main() {
    setlocale(LC_ALL, ("Rus"));
    cout << "Часть 1\n";
    cout << "square(5) = " << square(5) << endl;
    printEvenNumbers(10);
    cout << "average(1, 2, 3) = " << average(1, 2, 3) << endl;
    cout << "isPrime(7) = " << isPrime(7) << endl;
    printMessage("Hello", 2);

    cout << "\nЧасть 2\n";
    incrementGlobal();
    incrementGlobal();
    cout << "globalCounter = " << globalCounter << endl;
    demonstrateScope();
    countCalls();
    countCalls();

    cout << "\nЧасть 3\n";
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    cout << "sumArray = " << sumArray(arr, size) << endl;
    cout << "findMin = " << findMin(arr, size) << endl;
    incrementArray(arr, size);
    cout << "После incrementArray: ";
    print(arr, size);
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "diagonalSum = " << diagonalSum(matrix) << endl;

    cout << "Часть 4\n";
    cout << "maxValue(3, 5) = " << maxValue(3, 5) << endl;
    cout << "maxValue(3.2, 5.7) = " << maxValue(3.2, 5.7) << endl;
    int arr4[] = { 1, 5, 3, 9, 2 };
    int size4 = 5;
    cout << "maxValue(arr4) = " << maxValue(arr4, size4) << endl;
    print(42);
    print(arr4, size4);

    cout << "\nЧасть 5\n";
    cout << "absValue(-8) = " << absValue(-8) << endl;
    cout << "isGreater(5, 3) = " << isGreater(5, 3) << endl;

    cout << "\nЧасть 6\n";
    double arr6[] = { 1.1, 3.3, 2.2, 5.5 };
    int size6 = 4;
    cout << "findMax(arr6) = " << findMax(arr6, size6) << endl;
    selectionSort(arr6, size6);
    cout << "Отсортированный arr6: ";
    print(arr6, size6);

    cout << "\nЧасть 7\n";
    cout << "sum(3, 4) = " << sum(3, 4) << endl;
    cout << "sum(2.5, 1.7) = " << sum(2.5, 1.7) << endl;
    cout << "sum(arr4, 5) = " << sum(arr4, 5) << endl;
    cout << "sum(arr6, 4) = " << sum(arr6, 4) << endl;
    print("Шаблонный вывод строки");
    print(arr4, 5);
    print(arr6, 4);


    return 0;
}
