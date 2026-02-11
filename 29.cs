using System;

namespace TextTools
{
    public class TextAnalyzer
    {
        public static string ToUpperCase(string text)
        {
            return text.ToUpper();
        }

        public static int GetLength(string text)
        {
            return text.Length;
        }

        public static bool ContainsWord(string text, string word)
        {
            return text.Contains(word);
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        using TextTools;

        string sampleText = "Привет, мир! Это пример текста для анализа.";
        string searchWord = "пример";

        string upperText = TextAnalyzer.ToUpperCase(sampleText);
        int textLength = TextAnalyzer.GetLength(sampleText);
        bool hasWord = TextAnalyzer.ContainsWord(sampleText, searchWord);

        Console.WriteLine("Исходный текст: " + sampleText);
        Console.WriteLine("В верхнем регистре: " + upperText);
        Console.WriteLine("Длина текста: " + textLength);
        Console.WriteLine("Содержит слово '" + searchWord + "': " + hasWord);
    }
}



using System;

namespace MathOperations
{
    public class Calculator
    {
        public int Add(int a, int b)
        {
            return a + b;
        }

        public int Subtract(int a, int b)
        {
            return a - b;
        }

        public int Multiply(int a, int b)
        {
            return a * b;
        }

        public double Divide(int a, int b)
        {
            if (b == 0)
            {
                throw new DivideByZeroException("Деление на ноль невозможно.");
            }
            return (double)a / b;
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Calculator calculator = new Calculator();

        int x = 10;
        int y = 5;

        int addResult = calculator.Add(x, y);
        int subtractResult = calculator.Subtract(x, y);
        int multiplyResult = calculator.Multiply(x, y);
        double divideResult = calculator.Divide(x, y);

        Console.WriteLine($"Сложение ({x} + {y}): {addResult}");
        Console.WriteLine($"Вычитание ({x} - {y}): {subtractResult}");
        Console.WriteLine($"Умножение ({x} * {y}): {multiplyResult}");
        Console.WriteLine($"Деление ({x} / {y}): {divideResult}");
    }
}



using System;

namespace School
{
    public class Student
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public void PrintInfo()
        {
            Console.WriteLine($"Студент: {Name}, Возраст: {Age}");
        }
    }

    public class Teacher
    {
        public string Name { get; set; }
        public string Subject { get; set; }

        public void PrintInfo()
        {
            Console.WriteLine($"Преподаватель: {Name}, Предмет: {Subject}");
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        Student student = new Student
        {
            Name = "Иван Петров",
            Age = 20
        };

        Teacher teacher = new Teacher
        {
            Name = "Анна Смирнова",
            Subject = "Математика"
        };

        student.PrintInfo();
        teacher.PrintInfo();
    }
}
