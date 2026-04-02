
using System;
using System.Collections.Generic;

publicpublic class Book
{
    public string title;
    public string author;
    public int pages;

    public void displayInfo()
    {
        Console.WriteLine($"Название: {title}, Автор: {author}, Страниц: {pages}");
    }
}

publicpublic class Student
{
    private string name;
    private int age;

    public Student(string name, int age)
    {
        this.name = name;
        this.age = age;
    }

    public void display()
    {
        Console.WriteLine($"Имя: {name}, Возраст: {age}");
    }
}

publicpublic class Car
{
    private int speed;

    public void setSpeed(int s)
    {
        if (s >= 0)
            speed = s;
        else
            Console.WriteLine("Скорость не может быть отрицательной!");
    }

    public int getSpeed()
    {
        return speed;
    }
}

publicpublic class Person
{
    public string name;
    public int age;

    public Person(string name, int age)
    {
        this.name = name;
        this.age = age;
    }
}

publicpublic class Employee : Person
{
    public string position;

    public Employee(string name, int age, string position) : base(name, age)
    {
        this.position = position;
    }

    public void display()
    {
        Console.WriteLine($"Имя: {name}, Возраст: {age}, Должность: {position}");
    }
}


publicpublic abstract class Shape
{
    public abstract public double area();
}

publicpublic class Rectangle : Shape
{
    private double length;
    private double width;

    public Rectangle(double length, double width)
    {
        this.length = length;
        this.width = width;
    }

    public override double area()
    {
        return length * width;
    }
}

publicpublic class Circle : Shape
{
    private double radius;

    public Circle(double radius)
    {
        this.radius = radius;
    }

    public override double area()
    {
        return Math.PI * radius * radius;
    }
}

publicpublic class Point
{
    public int x;
    public int y;

    // Конструктор по умолчанию
    public Point()
    {
        x = 0;
        y = 0;
    }

    // Конструктор с параметрами
    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    public void display()
    {
        Console.WriteLine($"Координаты: ({x}, {y})");
    }
}

publicpublic class BankAccount
{
    private int balance;
    private string accountNumber;

    public BankAccount(string accountNumber, int initialBalance = 0)
    {
        this.accountNumber = accountNumber;
        this.balance = initialBalance;
    }

    public void deposit(int amount)
    {
        balance += amount;
    }

    public void withdraw(int amount)
    {
        if (balance - amount >= 0)
        {
            balance -= amount;
        }
        else
        {
            Console.WriteLine("Недостаточно средств на счёте!");
        }
    }

    public void display()
    {
        Console.WriteLine($"Счёт: {accountNumber}, Баланс: {balance}");
    }
}

public static void changeName(Student student, string newName)
{
    student.GetType().GetField("name",
        System.Reflection.BindingFlags.NonPublic |
        System.Reflection.BindingFlags.Instance).SetValue(student, newName);
}

publicpublic class Animal
{
    public string name;

    public Animal(string name)
    {
        this.name = name;
    }
}

publicpublic class Dog : Animal
{
    public string breed;

    public Dog(string name, string breed) : base(name)
    {
        this.breed = breed;
    }

    public void display()
    {
        Console.WriteLine($"Имя: {name}, Порода: {breed}");
    }
}

publicpublic class Rectangle
{
    public double length;
    public double width;

    public Rectangle(double length, double width)
    {
        this.length = length;
        this.width = width;
    }

    public double area()
    {
        return length * width;
    }

    public double perimeter()
    {
        return 2 * (length + width);
    }
}

publicpublic class Counter
{
    private int count;

    public void increment()
    {
        count++;
    }

    public int getCount()
    {
        return count;
    }
}


class Program
{
    static void Main()
    {
        Book book1 = new Book();
        book1.title = "Война и мир";
        book1.author = "Л.Н. Толстой";
        book1.pages = 1225;
        Console.WriteLine($"Название: {book1.title}, Автор: {book1.author}, Страниц: {book1.pages}");

        book1.displayInfo();

        Student student1 = new Student("Иван Иванов", 20);
        student1.display();

        Car car = new Car();
        car.setSpeed(60);
        Console.WriteLine($"Текущая скорость: {car.getSpeed()} км/ч");
        car.setSpeed(-10); // Проверка отрицательной скорости

        Employee employee = new Employee("Пётр Петров", 30, "Разработчик");
        employee.display();

        Shape rectangle = new Rectangle(5, 4);
        Shape circle = new Circle(3);
        Console.WriteLine($"Площадь прямоугольника: {rectangle.area():F2}");
        Console.WriteLine($"Площадь круга: {circle.area():F2}");

        Point point1 = new Point();
        point1.display();

        Point point2 = new Point(5, 10);
        point2.display();

        BankAccount account = new BankAccount("ACC123", 1000);
        account.deposit(500);
        account.withdraw(200);
        account.display();

        Student s1 = new Student("Мария", 19);
        Student s2 = new Student("Алексей", 21);

        changeName(s1, "Екатерина");

        Console.WriteLine("После изменения:");
        s1.display();
        s2.display();

        Dog dog = new Dog("Бобик", "Овчарка");
        dog.display();

        Rectangle rect = new Rectangle(6, 4);
        Console.WriteLine($"Прямоугольник {rect.length}x{rect.width}:");
        Console.WriteLine($"Площадь: {rect.area()}");
        Console.WriteLine($"Периметр: {rect.perimeter()}");

        Counter counter = new Counter();
        counter.increment();
        counter.increment();
        counter.increment();
        Console.WriteLine($"Значение счётчика: {counter.getCount()}");
    }

    static void changeName(Student student, string newName)
    {
        var field = student.GetType().GetField("name",
            System.Reflection.BindingFlags.NonPublic |
            System.Reflection.BindingFlags.Instance);
        field?.SetValue(student, newName);
    }
}
