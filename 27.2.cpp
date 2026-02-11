#include <iostream>
using namespace std;

void checkNullptr() {
    int* ptr = nullptr;
    if (ptr) {
        cout << *ptr << endl;
    }
    else {
        cout << "Pointer is nullptr" << endl;
    }
}

void printArrayAddress() {
    int arr[] = { 10, 20, 30 };
    cout << "Address of first element (arr): " << arr << endl;
    cout << "Address of first element (&arr[0]): " << &arr[0] << endl;
}

void printArrayWithPointer() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int* ptr = arr;
    int size = 5;
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

void demonstrateNullVsNullptr() {
    int* ptr1 = NULL;
    int* ptr2 = nullptr;
    cout << "NULL: " << ptr1 << endl;
    cout << "nullptr: " << ptr2 << endl;
}

void comparePointers() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int* p1 = &arr[1];
    int* p2 = &arr[3];
    if (p1 < p2) {
        cout << "p1 points to earlier element than p2" << endl;
    }
}

int countPositive(int* arr, int size) {
    int count = 0;
    for (int* p = arr; p < arr + size; ++p) {
        if (*p > 0) count++;
    }
    return count;
}

int findMax(int* arr, int size) {
    int max = *arr;
    for (int* p = arr + 1; p < arr + size; ++p) {
        if (*p > max) max = *p;
    }
    return max;
}

int distanceBetween(int* start, int* end) {
    return end - start;
}

void reverseTraverse(int* arr, int size) {
    for (int* p = arr + size - 1; p >= arr; --p) {
        cout << *p << " ";
    }
    cout << endl;
}

bool isInArray(int* ptr, int* arr, int size) {
    return ptr >= arr && ptr < arr + size;
}

void safePrint(int* ptr) {
    if (ptr != nullptr) {
        cout << *ptr << endl;
    }
    else {
        cout << "Null pointer, cannot print" << endl;
    }
}

void copyArray(int* src, int* dst, int size) {
    for (int* s = src, *d = dst; s < src + size; ++s, ++d) {
        *d = *s;
    }
}

void swapMinMax(int* arr, int size) {
    if (size <= 1) return;

    int* minPtr = arr;
    int* maxPtr = arr;

    for (int* p = arr + 1; p < arr + size; ++p) {
        if (*p < *minPtr) minPtr = p;
        if (*p > *maxPtr) maxPtr = p;
    }

    swap(*minPtr, *maxPtr);
}

int countEven(int* arr, int size) {
    int count = 0;
    for (int* p = arr; p < arr + size; ++p) {
        if ((*p % 2) == 0) count++;
    }
    return count;
}

void demonstratePointerComparison() {
    int arr1[] = { 1, 2, 3 };
    int arr2[] = { 4, 5, 6 };

    int* p1 = &arr1[1];
    int* p2 = &arr2[1];

    cout << (p1 > &arr1[0]) << endl;

    cout << (p1 < p2) << endl;
}

void exampleNullToNullptr() {
    int* ptr = nullptr;
    if (!ptr) cout << "Safe nullptr check" << endl;
}

bool areSameAddress(int* a, int* b) {
    return a == b;
}

bool areAdjacent(int* a, int* b) {
    return (a + 1 == b) || (b + 1 == a);
}

int countGreater(int* arr, int size, int value) {
    int count = 0;
    for (int* p = arr; p < arr + size; ++p) {
        if (*p > value) count++;
    }
    return count;
}

void demonstrateArrayBoundsError() {
    int arr[3] = { 1, 2, 3 };
    int* ptr = arr;

    for (int i = 0; i <= 5; ++i) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "1. Проверка nullptr:" << endl;
    checkNullptr();

    cout << "\n2. Адреса первого элемента:" << endl;
    printArrayAddress();

    cout << "\n3. Вывод массива через указатель:" << endl;
    printArrayWithPointer();

    cout << "\n4. NULL vs nullptr:" << endl;
    demonstrateNullVsNullptr();

    cout << "\n5. Сравнение указателей:" << endl;
    comparePointers();

    cout << "\n6. Количество положительных:" << endl;
    int arr[] = { -1, 2, -3, 4, 5 };
    cout << countPositive(arr, 5) << endl;

    cout << "\n7. Максимальный элемент:" << endl;
    cout << findMax(arr, 5) << endl;

    cout << "\n8. Расстояние между элементами:" << endl;
    cout << distanceBetween(&arr[1], &arr[4]) << endl;

    cout << "\n9. Обратный обход:" << endl;
    reverseTraverse(arr, 5);

    cout << "\n10. Проверка вхождения в массив:" << endl;
    cout << isInArray(&arr[2], arr, 5) << endl;

    cout << "\n11. Безопасный вывод:" << endl;
    safePrint(&arr[0]);
    safePrint(nullptr);

    cout << "\n12. Копирование массива:" << endl;
    int src[] = { 1, 2, 3 };
    int dst[3];
    copyArray(src, dst, 3);
    for (int i = 0; i < 3; ++i) cout << dst[i] << " ";
    cout << endl;

    cout << "\n13. Обмен min/max:" << endl;
    swapMinMax(arr, 5);
    for (int i = 0; i < 5; ++i) cout << arr[i] << " ";
    cout << endl;

    cout << "\n14. Количество чётных:" << endl;
    cout << countEven(arr, 5) << endl;

    cout << "\n15. Сравнение указателей:" << endl;
    demonstratePointerComparison();

    cout << "\n16. Замена NULL на nullptr:" << endl;
    exampleNullToNullptr();

    cout << "\n17. Равенство адресов:" << endl;
    cout << areSameAddress(&arr[0], &arr[1]) << endl;

    cout << "\n18. Соседние элементы:" << endl;
    cout << "arr[0] и arr[1] соседние: " << areAdjacent(&arr[0], &arr[1]) << endl;
    cout << "arr[0] и arr[2] соседние: " << areAdjacent(&arr[0], &arr[2]) << endl;


    cout << "\n19. Количество элементов > 3:" << endl;
    cout << countGreater(arr, 5, 3) << endl;


    demonstrateArrayBoundsError();

    return 0;
}
