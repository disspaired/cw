#include <iostream>
using namespace std;

template<typename T>
T maxValue(const T& a, const T& b) {
    return a > b ? a : b;
}

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T square(const T& value) {
    return value * value;
}

template<typename T>
void printValue(const T& value) {
    cout << value << endl;
}

template<typename T>
T minValue(const T& a, const T& b) {
    return a < b ? a : b;
}

template<typename T, size_t N>
T sumArray(const T(&arr)[N]) {
    T sum = T();
    for (size_t i = 0; i < N; ++i) {
        sum += arr[i];
    }
    return sum;
}

template<typename T, size_t N>
int linearSearch(const T(&arr)[N], const T& key) {
    for (size_t i = 0; i < N; ++i) {
        if (arr[i] == key) return i;
    }
    return -1;
}

template<typename T, size_t N>
void bubbleSort(T(&arr)[N]) {
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

template<typename T, size_t N>
T maxElement(const T(&arr)[N]) {
    T maxVal = arr[0];
    for (size_t i = 1; i < N; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}

template<typename T, size_t N>
size_t countGreater(const T(&arr)[N], const T& threshold) {
    size_t count = 0;
    for (size_t i = 0; i < N; ++i) {
        if (arr[i] > threshold) ++count;
    }
    return count;
}

template<typename T, typename U>
auto addAuto(T a, U b) {
    return a + b;
}

template<typename T, typename U>
void useDecltype(T a, U b) {
    decltype(a + b) result = a + b;
    cout << result << endl;
}

template<typename T, typename U>
auto addDifferent(T a, U b) -> decltype(a + b) {
    return a + b;
}

template<typename T, size_t N>
auto averageArray(const T(&arr)[N]) -> decltype(sumArray(arr) / static_cast<double>(N)) {
    return static_cast<decltype(sumArray(arr) / static_cast<double>(N))>(sumArray(arr)) / N;
}

template<typename T>
void print(const T& value) {
    cout << value << endl;
}

template<typename T, size_t N>
void print(const T(&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<typename T>
T maxValue(const T& a, const T& b) {
    return a > b ? a : b;
}

template<typename T>
T maxValue(const T& a, const T& b, const T& c) {
    return maxValue(maxValue(a, b), c);
}

template<typename T, size_t N>
T rangeArray(const T(&arr)[N]) {
    T minVal = arr[0], maxVal = arr[0];
    for (size_t i = 1; i < N; ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal - minVal;
}

template<typename T, size_t N>
void bubbleSortDesc(T(&arr)[N]) {
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

template<typename T, size_t N>
bool compareArrays(const T(&arr1)[N], const T(&arr2)[N]) {
    for (size_t i = 0; i < N; ++i) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

int main() {
    int arrInt[] = { 5, 2, 8, 1, 9 };
    const size_t intSize = 5;

    cout << "int array: ";
    print(arrInt);
    cout << "max of two (3,7): " << maxValue(3, 7) << endl;
    cout << "min of two (3,7): " << minValue(3, 7) << endl;

    int a = 10, b = 20;
    swapValues(a, b);
    cout << "swap a,b: a=" << a << " b=" << b << endl;

    cout << "square(4): " << square(4) << endl;
    cout << "sum array: " << sumArray(arrInt) << endl;
    cout << "search 8: index " << linearSearch(arrInt, 8) << endl;
    cout << "max element: " << maxElement(arrInt) << endl;
    cout << "count >5: " << countGreater(arrInt, 5) << endl;
    cout << "range (max-min): " << rangeArray(arrInt) << endl;

    bubbleSort(arrInt);
    cout << "sorted asc: ";
    print(arrInt);

    bubbleSortDesc(arrInt);
    cout << "sorted desc: ";
    print(arrInt);

    double arrDouble[] = { 3.14, 2.71, 1.41, 0.57 };
    const size_t doubleSize = 4;

    cout << "double array: ";
    print(arrDouble);
    cout << "average: " << averageArray(arrDouble) << endl;

    double x = 2.5, y = 3.7;
    cout << "addDifferent(2.5,3): " << addDifferent(x, 3) << endl;
    useDecltype(2.5, 3);

    cout << "max of three (1.1,2.2,0.5): " << maxValue(1.1, 2.2, 0.5) << endl;

    double arr2[] = { 3.14, 2.71, 1.41, 0.57 };
    cout << "arrays equal: " << (compareArrays(arrDouble, arr2) ? "yes" : "no") << endl;

    auto sum = addAuto(10, 20);
    cout << "addAuto(10,20): " << sum << endl;

    return 0;
}
