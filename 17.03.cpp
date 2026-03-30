#include <iostream>
#include <clocale>

class Vehicle {
protected:
    int speed;
public:
    Vehicle(int s) : speed(s) {}
    void move() {
        std::cout << "Транспорт движется со скоростью " << speed << " км/ч." << std::endl;
    }
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}
    void honk() {
        std::cout << "Машина сигналит: Би-бип!" << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    Bicycle(int s) : Vehicle(s) {}
    void ringBell() {
        std::cout << "Велосипед звенит: Дзинь-дзинь!" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Car myCar(100);
    Bicycle myBike(20);

    myCar.move();
    myCar.honk();

    myBike.move();
    myBike.ringBell();

    return 0;
}


#include <iostream>
#include <clocale>

class Animal {
public:
    virtual void sound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; i++) {
        animals[i]->sound();
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Shape* shapes[2];
    shapes[0] = new Rectangle(5.0, 4.0);
    shapes[1] = new Circle(3.0);

    for (int i = 0; i < 2; i++) {
        std::cout << "Площадь фигуры: " << shapes[i]->area() << std::endl;
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Character {
public:
    virtual void attack() = 0;
    virtual ~Character() {}
};

class Warrior : public Character {
public:
    void attack() override {
        std::cout << "Warrior attacks with sword" << std::endl;
    }
};

class Mage : public Character {
public:
    void attack() override {
        std::cout << "Mage casts spell" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Character* heroes[2];
    heroes[0] = new Warrior();
    heroes[1] = new Mage();

    for (int i = 0; i < 2; i++) {
        heroes[i]->attack();
    }

    for (int i = 0; i < 2; i++) {
        delete heroes[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class BankAccount {
protected:
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    virtual void calculateInterest() = 0;
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double b) : BankAccount(b) {}
    void calculateInterest() override {
        std::cout << "Проценты по сберегательному счету (5%): " << balance * 0.05 << std::endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(double b) : BankAccount(b) {}
    void calculateInterest() override {
        std::cout << "Проценты по текущему счету (2%): " << balance * 0.02 << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    BankAccount* accounts[2];
    accounts[0] = new SavingsAccount(1000.0);
    accounts[1] = new CurrentAccount(1000.0);

    for (int i = 0; i < 2; i++) {
        accounts[i]->calculateInterest();
    }

    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }

    return 0;
}
