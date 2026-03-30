#include <iostream>
#include <clocale>

class Transport {
public:
    virtual void move() = 0;

    virtual ~Transport() {}
};

class Car : public Transport {
public:
    void move() override {
        std::cout << "Машина едет по дороге, вращая колесами." << std::endl;
    }
};

class Bike : public Transport {
public:
    void move() override {
        std::cout << "Велосипед едет, пока вы крутите педали." << std::endl;
    }
};

int main() {

    setlocale(LC_ALL, "Russian");

    Transport* transport1 = new Car();
    Transport* transport2 = new Bike();

    transport1->move(); 
    transport2->move(); 

    delete transport1;
    delete transport2;

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
        std::cout << "Собака: Гав-гав!" << std::endl;
    }
};

class Cow : public Animal {
public:
    void sound() override {
        std::cout << "Корова: Му-у-у!" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Animal* myDog = new Dog();
    Animal* myCow = new Cow();

    myDog->sound();
    myCow->sound();

    delete myDog;
    delete myCow;

    return 0;
}


#include <iostream>
#include <clocale>

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Shape* s = new Square(5.0);
    Shape* t = new Triangle(4.0, 3.0);

    std::cout << "Площадь квадрата: " << s->area() << std::endl;
    std::cout << "Площадь треугольника: " << t->area() << std::endl;

    delete s;
    delete t;

    return 0;
}

#include <iostream>
#include <clocale>

class Device {
public:
    virtual void turnOn() = 0;
    virtual ~Device() {}
};

class Phone : public Device {
public:
    void turnOn() override {
        std::cout << "Телефон включается: загорается экран и логотип." << std::endl;
    }
};

class Laptop : public Device {
public:
    void turnOn() override {
        std::cout << "Ноутбук включается: шумят кулеры и загружается система." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Device* myPhone = new Phone();
    Device* myLaptop = new Laptop();

    myPhone->turnOn();
    myLaptop->turnOn();

    delete myPhone;
    delete myLaptop;

    return 0;
}


#include <iostream>
#include <clocale>

class Drink {
public:
    virtual void prepare() = 0;
    virtual ~Drink() {}
};

class Tea : public Drink {
public:
    void prepare() override {
        std::cout << "Завариваем чай: заливаем листья кипятком и настаиваем." << std::endl;
    }
};

class Coffee : public Drink {
public:
    void prepare() override {
        std::cout << "Готовим кофе: перемалываем зерна и варим в турке." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Drink* t = new Tea();
    Drink* c = new Coffee();

    t->prepare();
    c->prepare();

    delete t;
    delete c;

    return 0;
}


#include <iostream>
#include <clocale>

class Payment {
public:
    virtual void pay() = 0;
    virtual ~Payment() {}
};

class Card : public Payment {
public:
    void pay() override {
        std::cout << "Оплата картой проведена." << std::endl;
    }
};

class Cash : public Payment {
public:
    void pay() override {
        std::cout << "Оплата наличными принята." << std::endl;
    }
};

class Crypto : public Payment {
public:
    void pay() override {
        std::cout << "Транзакция в блокчейне подтверждена." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Payment* payments[3];
    payments[0] = new Card();
    payments[1] = new Cash();
    payments[2] = new Crypto();

    for (int i = 0; i < 3; i++) {
        payments[i]->pay();
    }

    for (int i = 0; i < 3; i++) {
        delete payments[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Employee {
public:
    virtual void salary() = 0;
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void salary() override {
        std::cout << "Зарплата менеджера: оклад + премия за выполнение плана." << std::endl;
    }
};

class Developer : public Employee {
public:
    void salary() override {
        std::cout << "Зарплата разработчика: оклад + бонусы за закрытые задачи." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Employee* staff[2];
    staff[0] = new Manager();
    staff[1] = new Developer();

    for (int i = 0; i < 2; i++) {
        staff[i]->salary();
    }

    for (int i = 0; i < 2; i++) {
        delete staff[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class File {
public:
    virtual void open() = 0;
    virtual ~File() {}
};

class TextFile : public File {
public:
    void open() override {
        std::cout << "Текстовый файл открыт в редакторе." << std::endl;
    }
};

class ImageFile : public File {
public:
    void open() override {
        std::cout << "Изображение открыто в просмотрщике." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    File* files[2];
    files[0] = new TextFile();
    files[1] = new ImageFile();

    for (int i = 0; i < 2; i++) {
        files[i]->open();
    }

    for (int i = 0; i < 2; i++) {
        delete files[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Message {
public:
    virtual void send() = 0;
    virtual ~Message() {}
};

class Email : public Message {
public:
    void send() override {
        std::cout << "Email отправлен по протоколу SMTP." << std::endl;
    }
};

class SMS : public Message {
public:
    void send() override {
        std::cout << "SMS отправлено через мобильную сеть." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Message* msgs[2];
    msgs[0] = new Email();
    msgs[1] = new SMS();

    for (int i = 0; i < 2; i++) {
        msgs[i]->send();
    }

    for (int i = 0; i < 2; i++) {
        delete msgs[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Enemy {
public:
    virtual void attack() = 0;
    virtual ~Enemy() {}
};

class Zombie : public Enemy {
public:
    void attack() override {
        std::cout << "Зомби кусает и царапает цель." << std::endl;
    }
};

class Alien : public Enemy {
public:
    void attack() override {
        std::cout << "Пришелец стреляет из бластера." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Enemy* enemies[2];
    enemies[0] = new Zombie();
    enemies[1] = new Alien();

    for (int i = 0; i < 2; i++) {
        enemies[i]->attack();
    }

    for (int i = 0; i < 2; i++) {
        delete enemies[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Account {
public:
    virtual void calculateInterest() = 0;
    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    void calculateInterest() override {
        std::cout << "Начисление процентов по сберегательному счету: ежемесячный расчет." << std::endl;
    }
};

class FixedDeposit : public Account {
public:
    void calculateInterest() override {
        std::cout << "Начисление процентов по срочному вкладу: выплата в конце срока." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Account* accounts[2];
    accounts[0] = new SavingsAccount();
    accounts[1] = new FixedDeposit();

    for (int i = 0; i < 2; i++) {
        accounts[i]->calculateInterest();
    }

    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>
#include <cmath>

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override { return width * height; }
    double perimeter() override { return 2 * (width + height); }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override { return 3.14159 * radius * radius; }
    double perimeter() override { return 2 * 3.14159 * radius; }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Shape* shapes[2];
    shapes[0] = new Rectangle(5.0, 10.0);
    shapes[1] = new Circle(7.0);

    for (int i = 0; i < 2; i++) {
        std::cout << "Площадь: " << shapes[i]->area() << std::endl;
        std::cout << "Периметр: " << shapes[i]->perimeter() << std::endl;
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Media {
public:
    virtual void play() = 0;
    virtual ~Media() {}
};

class Audio : public Media {
public:
    void play() override {
        std::cout << "Воспроизведение аудио: вывод звука через динамики." << std::endl;
    }
};

class Video : public Media {
public:
    void play() override {
        std::cout << "Воспроизведение видео: запуск изображения и звуковой дорожки." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Media* playlist[2];
    playlist[0] = new Audio();
    playlist[1] = new Video();

    for (int i = 0; i < 2; i++) {
        playlist[i]->play();
    }

    for (int i = 0; i < 2; i++) {
        delete playlist[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Notification {
public:
    virtual void notify() = 0;
    virtual ~Notification() {}
};

class Push : public Notification {
public:
    void notify() override {
        std::cout << "Отправлено Push-уведомление на мобильное устройство." << std::endl;
    }
};

class EmailNotification : public Notification {
public:
    void notify() override {
        std::cout << "Отправлено письмо на электронную почту." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Notification* list[2];
    list[0] = new Push();
    list[1] = new EmailNotification();

    for (int i = 0; i < 2; i++) {
        list[i]->notify();
    }

    for (int i = 0; i < 2; i++) {
        delete list[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Robot {
public:
    virtual void work() = 0;
    virtual ~Robot() {}
};

class CleanerRobot : public Robot {
public:
    void work() override {
        std::cout << "Робот-уборщик: чистка пола и сбор мусора." << std::endl;
    }
};

class BuilderRobot : public Robot {
public:
    void work() override {
        std::cout << "Робот-строитель: возведение конструкций и сварка." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Robot* robots[2];
    robots[0] = new CleanerRobot();
    robots[1] = new BuilderRobot();

    for (int i = 0; i < 2; i++) {
        robots[i]->work();
    }

    for (int i = 0; i < 2; i++) {
        delete robots[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Flyable {
public:
    virtual void fly() = 0;
    virtual ~Flyable() {}
};

class Swimmable {
public:
    virtual void swim() = 0;
    virtual ~Swimmable() {}
};

class Duck : public Flyable, public Swimmable {
public:
    void fly() override {
        std::cout << "Утка летит, махая крыльями." << std::endl;
    }

    void swim() override {
        std::cout << "Утка плывет по воде." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Duck* myDuck = new Duck();

    myDuck->fly();
    myDuck->swim();

    delete myDuck;

    return 0;
}


#include <iostream>
#include <clocale>

class Logger {
public:
    virtual void log() = 0;
    virtual ~Logger() {}
};

class FileLogger : public Logger {
public:
    void log() override {
        std::cout << "Запись лога в файл лог.txt завершена." << std::endl;
    }
};

class ConsoleLogger : public Logger {
public:
    void log() override {
        std::cout << "Лог выведен в стандартный поток консоли." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Logger* loggers[2];
    loggers[0] = new FileLogger();
    loggers[1] = new ConsoleLogger();

    for (int i = 0; i < 2; i++) {
        loggers[i]->log();
    }

    for (int i = 0; i < 2; i++) {
        delete loggers[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Delivery {
public:
    virtual void deliver() = 0;
    virtual ~Delivery() {}
};

class Courier : public Delivery {
public:
    void deliver() override {
        std::cout << "Курьер доставляет заказ пешком или на авто." << std::endl;
    }
};

class Drone : public Delivery {
public:
    void deliver() override {
        std::cout << "Дрон доставляет заказ по воздуху." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Delivery* list[2];
    list[0] = new Courier();
    list[1] = new Drone();

    for (int i = 0; i < 2; i++) {
        list[i]->deliver();
    }

    for (int i = 0; i < 2; i++) {
        delete list[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Course {
public:
    virtual void start() = 0;
    virtual ~Course() {}
};

class OnlineCourse : public Course {
public:
    void start() override {
        std::cout << "Онлайн-курс запущен: подключение к платформе и запуск трансляции." << std::endl;
    }
};

class OfflineCourse : public Course {
public:
    void start() override {
        std::cout << "Очный курс начат: сбор студентов в аудитории." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Course* courses[2];
    courses[0] = new OnlineCourse();
    courses[1] = new OfflineCourse();

    for (int i = 0; i < 2; i++) {
        courses[i]->start();
    }

    for (int i = 0; i < 2; i++) {
        delete courses[i];
    }

    return 0;
}


#include <iostream>
#include <clocale>

class Product {
public:
    virtual double getPrice() = 0;
    virtual ~Product() {}
};

class Book : public Product {
private:
    double price;
public:
    Book(double p) : price(p) {}
    double getPrice() override { return price; }
};

class Electronics : public Product {
private:
    double price;
public:
    Electronics(double p) : price(p) {}
    double getPrice() override { return price; }
};

class Clothing : public Product {
private:
    double price;
public:
    Clothing(double p) : price(p) {}
    double getPrice() override { return price; }
};

int main() {
    setlocale(LC_ALL, "Russian");

    const int count = 3;
    Product* cart[count];

    cart[0] = new Book(500.0);
    cart[1] = new Electronics(25000.0);
    cart[2] = new Clothing(3000.0);

    double total = 0;

    for (int i = 0; i < count; i++) {
        double currentPrice = cart[i]->getPrice();
        std::cout << "Товар " << i + 1 << ": Цена = " << currentPrice << std::endl;
        total += currentPrice;
    }

    std::cout << "----------------------" << std::endl;
    std::cout << "Общая сумма: " << total << std::endl;

    for (int i = 0; i < count; i++) {
        delete cart[i];
    }

    return 0;
}
