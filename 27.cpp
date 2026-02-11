#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;
    cout << "Value: " << var << endl;
    cout << "Address: " << &var << endl;
    cout << "Via pointer (value): " << *ptr << endl;
    cout << "Via pointer (address): " << ptr << endl;

    *ptr = 25;
    cout << "New value: " << var << endl;

    int* ptr2 = &var;
    *ptr = 40;
    cout << "Value via ptr2: " << *ptr2 << endl;

    int* nullPtr = nullptr;
    if (nullPtr) {
        cout << *nullPtr << endl;
    }
    else {
        cout << "Pointer is nullptr, cannot dereference" << endl;
    }

    int arr[5] = { 1, 2, 3, 4, 5 };
    int* arrPtr = arr;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << " address: " << (arrPtr + i) << endl;
    }

    return 0;
}

void multiplyByThree(int* num) {
    *num *= 3;
}

void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sumArray(int* arr, int size) {
    int sum = 0;
    for (int* p = arr; p < arr + size; ++p) {
        sum += *p;
    }
    return sum;
}

int findMax(int* arr, int size) {
    int max = *arr;
    for (int* p = arr + 1; p < arr + size; ++p) {
        if (*p > max) {
            max = *p;
        }
    }
    return max;
}

void replaceNegatives(int* arr, int size) {
    for (int* p = arr; p < arr + size; ++p) {
        if (*p < 0) {
            *p = 0;
        }
    }
}

int countEven(int* arr, int size) {
    int count = 0;
    for (int* p = arr; p < arr + size; ++p) {
        if ((*p % 2) == 0) {
            count++;
        }
    }
    return count;
}

int findMin(int* arr, int size) {
    int min = *arr;
    for (int* p = arr + 1; p < arr + size; ++p) {
        if (*p < min) {
            min = *p;
        }
    }
    return min;
}

void printReverse(int* arr, int size) {
    for (int* p = arr + size - 1; p >= arr; --p) {
        cout << *p << " ";
    }
    cout << endl;
}

void modifyViaDoublePtr(int** ptr) {
    **ptr = 100;
}

void nullifyPointer(int** ptr) {
    *ptr = nullptr;
}

bool areEqual(int* a, int* b) {
    return *a == *b;
}

void copyArray(int* src, int* dst, int size) {
    for (int* s = src, *d = dst; s < src + size; ++s, ++d) {
        *d = *s;
    }
}

void swapFirstLast(int* arr, int size) {
    if (size > 1) {
        int temp = *arr;
        *arr = *(arr + size - 1);
        *(arr + size - 1) = temp;
    }
}

int countGreater(int* arr, int size, int value) {
    int count = 0;
    for (int* p = arr; p < arr + size; ++p) {
        if (*p > value) {
            count++;
        }
    }
    return count;
}


void demonstratePointerTypes() {
    int val = 42;
    const int* ptrToConst = &val;
    int* const constPtr = &val;

    *constPtr = 100;

    cout << "ptrToConst: " << *ptrToConst << endl;
    cout << "constPtr: " << *constPtr << endl;
}
