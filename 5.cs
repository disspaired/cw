
using System;

class Person
{
    public string Name { get; set; }
    public int Age { get; set; }

    public Person(string name, int age)
    {
        Name = name;
        Age = age;
    }

    public void ShowInfo()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}");
    }

    public void SayHello()
    {
        Console.WriteLine($"Hello, my name is {Name}!");
    }
}

class Student : Person
{
    public string University { get; set; }

    public Student(string name, int age, string university) : base(name, age)
    {
        University = university;
    }

    public void Study()
    {
        Console.WriteLine($"{Name} is studying at {University}.");
    }
}

class Teacher : Person
{
    public string Subject { get; set; }

    public Teacher(string name, int age, string subject) : base(name, age)
    {
        Subject = subject;
    }

    public void Teach()
    {
        Console.WriteLine($"{Name} is teaching {Subject}.");
    }
}

class Doctor : Person
{
    public string Specialization { get; set; }

    public Doctor(string name, int age, string specialization) : base(name, age)
    {
        Specialization = specialization;
    }

    public void Treat()
    {
        Console.WriteLine($"{Name} is treating patients in {Specialization}.");
    }
}

// Дополнительное задание - новый класс Artist
class Artist : Person
{
    public string Style { get; set; }

    public Artist(string name, int age, string style) : base(name, age)
    {
        Style = style;
    }

    public void Paint()
    {
        Console.WriteLine($"{Name} is painting in {Style} style.");
    }
}

class Program
{
    static void Main()
    {
        Student student = new Student("Anna", 20, "Harvard");
        Teacher teacher = new Teacher("John", 50, "Physics");
        Doctor doctor = new Doctor("Maria", 40, "Neurology");
        Artist artist = new Artist("Leo", 30, "Impressionism");

        student.ShowInfo();
        student.SayHello();
        student.Study();

        Console.WriteLine();

        teacher.ShowInfo();
        teacher.SayHello();
        teacher.Teach();

        Console.WriteLine();

        doctor.ShowInfo();
        doctor.SayHello();
        doctor.Treat();

        Console.WriteLine();

        artist.ShowInfo();
        artist.SayHello();
        artist.Paint();
    }
}
