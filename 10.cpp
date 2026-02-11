#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    if (ptr != nullptr && *ptr > 0) {
        std::cout << "Указатель корректен, значение положительное: " << *ptr << std::endl;
    } else {
        std::cout << "Проверка не пройдена" << std::endl;
    }

    return 0;
}


#include <iostream>

int main() {
    int* ptr = nullptr;

    if (ptr == nullptr && *ptr > 0) {
        std::cout << "Это не выполнится" << std::endl;
    } else {
        std::cout << "Первое условие истинно, второе не проверялось" << std::endl;
    }

    return 0;
}


#include <iostream>

int main() {
    int a = 10, b = -5, c = 0, d = 7;
    int* arr[] = {&a, &b, &c, &d, nullptr};
    int size = 5;

    for (int i = 0; i < size; ++i) {
        if (arr[i] != nullptr && *arr[i] > 0) {
            std::cout << "Элемент " << i << ": " << *arr[i] << std::endl;
        }
    }

    return 0;
}


int* ptr = nullptr;
if (ptr != nullptr & *ptr > 0) {
    std::cout << *ptr << std::endl;
}


#include <iostream>

void changeByValue(int x) {
    x = x + 10;
    std::cout << "Внутри функции (по значению): " << x << std::endl;
}

int main() {
    int num = 5;
    std::cout << "До вызова: " << num << std::endl;
    changeByValue(num);
    std::cout << "После вызова: " << num << std::endl;
    return 0;
}


void changeByReference(int& x) {
    x = x + 10;
    std::cout << "Внутри функции (по ссылке): " << x << std::endl;
}


void changeByPointer(int* x) {
    *x = *x + 10;
    std::cout << "Внутри функции (по указателю): " << *x << std::endl;
}


int main() {
    int num = 5;

    std::cout << "Исходное значение: " << num << std::endl;

    changeByReference(num);
    std::cout << "После ссылки: " << num << std::endl;

    changeByPointer(&num);
    std::cout << "После указателя: " << num << std::endl;

    return 0;
}


void incrementArrayByPointer(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) += 1;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "До: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl;

    incrementArrayByPointer(arr, 5);
    std::cout << "После указателя: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl;

    incrementArrayByReference(arr);
    std::cout << "После ссылки: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}


int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}


int main() {
    int (*funcPtr)(int, int);

    funcPtr = max;
    std::cout << "Max: " << funcPtr(10, 5) << std::endl;

    funcPtr = min;
    std::cout << "Min: " << funcPtr(10, 5) << std::endl;

    return 0;
}


int compareAndProcess(int a, int b, int (*cmp)(int, int)) {
    return cmp(a, b);
}


int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    return a / b;
}

int (*operations[4])(int, int) = {add, subtract, multiply, divide};


int performOperation(int a, int b, int opIndex) {
    if (opIndex < 0 || opIndex >= 4) {
        throw std::out_of_range("Invalid operation index!");
    }
    return operations[opIndex](a, b);
}


typedef int (*IntProcessor)(int);

int increment(int x) { return x + 1; }
int decrement(int x) { return x - 1; }

IntProcessor getProcessor(bool increase) {
    return (increase) ? increment : decrement;
}


auto funcPtr = max;
std::cout << funcPtr(20, 15) << std::endl; 


void execute(int a, int b, int (*operation)(int, int)) {
    std::cout << "Result: " << operation(a, b) << std::endl;
}


#include <iostream>
#include <vector>

void option1() { std::cout << "Выбран пункт 1\n"; }
void option2() { std::cout << "Выбран пункт 2\n"; }
void option3() { std::cout << "Выбран пункт 3\n"; }
void exitMenu() { std::cout << "Выход из меню\n"; }

int main() {
    std::vector<void (*)()> menu = {option1, option2, option3, exitMenu};

    int choice;
    do {
        std::cout << "Меню:\n";
        std::cout << "1. Пункт 1\n";
        std::cout << "2. Пункт 2\n";
        std::cout << "3. Пункт 3\n";
        std::cout << "4. Выход\n";
        std::cout << "Выберите пункт (1-4): ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            menu[choice - 1]();
        } else {
            std::cout << "Неверный выбор!\n";
        }
    } while (choice != 4);

    return 0;
}
