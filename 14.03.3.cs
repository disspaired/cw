using System;

class Student
{
    private string name;
    private int age;
    private static int studentCount = 0;

    public Student(string name, int age)
    {
        this.name = name;
        this.age = age;
        studentCount++;
    }

    public static int GetStudentCount()
    {
        return studentCount;
    }

    public void PrintInfo()
    {
        Console.WriteLine($"Студент: {name}, Возраст: {age}");
    }
}

class Program
{
    static void Main()
    {
        Student s1 = new Student("Алексей", 20);
        Student s2 = new Student("Мария", 19);
        Student s3 = new Student("Иван", 21);

        s1.PrintInfo();
        s2.PrintInfo();
        s3.PrintInfo();

        Console.WriteLine($"\nОбщее количество студентов: {Student.GetStudentCount()}");
    }
}
