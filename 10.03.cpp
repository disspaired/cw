1
1. Конструктор в C++ — это специальный метод класса, который автоматически вызывается при создании объекта. Его задача — инициализировать поля объекта и выполнить начальную настройку.
2. Конструктор вызывается в момент создания объекта: при объявлении переменной типа класса, выделении памяти через new или создании экземпляра в контейнере.
3. Конструктор по умолчанию — конструктор без параметров либо с параметрами, имеющими значения по умолчанию. Компилятор может создать его автоматически, если пользователь не определил ни одного конструктора.
4. Да, можно создать несколько конструкторов в одном классе (перегрузка конструкторов). Они должны отличаться типами и/или количеством параметров.
5. Деструктор используется для освобождения ресурсов, занятых объектом (память, файлы, сетевые соединения), и выполнения завершающих операций перед уничтожением объекта.

3
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() : name("Unknown"), age(0) {}

    Student(string n, int a) : name(n), age(a) {}

    ~Student() {
        cout << "Student object deleted" << endl;
    }

    void print() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Alex", 20);

    s1.print();
    s2.print();

    return 0;
}

4
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    Book(string t, int p) : title(t), pages(p) {
        cout << "Book created" << endl;
    }

    ~Book() {
        cout << "Book deleted" << endl;
    }
};

int main() {
    Book book1("C++ Programming", 300);
    Book book2("Data Structures", 450);

    return 0;
}

5
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car() : brand("Unknown"), year(0) {}

    Car(string b, int y) : brand(b), year(y) {}

    void info() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car cars[3] = {
        Car("Toyota", 2020),
        Car("BMW", 2018),
        Car()
    };
    for (int i = 0; i < 3; i++) {
        cars[i].info();
    }

    return 0;
}
