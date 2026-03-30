using System;

class Program
{
    static void Main()
    {
        Predicate<string> isNotEmpty = s => !string.IsNullOrEmpty(s);
        Predicate<int> isInRange = n => n >= 1 && n <= 100;

        Validate("Тест", isNotEmpty);
        Validate("", isNotEmpty);
        Validate(null, isNotEmpty);

        Validate(50, isInRange);
        Validate(0, isInRange);
        Validate(101, isInRange);
    }

    static void Validate<T>(T value, Predicate<T> condition)
    {
        bool isValid = condition(value);
        string displayValue = value?.ToString() ?? "null";

        if (isValid)
            Console.WriteLine($"[ОК]: {displayValue} валидно");
        else
            Console.WriteLine($"[Ошибка]: {displayValue} не валидно");
    }
}


using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> numbers = new List<int> { 1, 2, 3, 4, 5 };

        Func<int, int> square = x => x * x;
        Func<int, string> format = x => $"Результат: {x}";
        Action<string> print = s => Console.WriteLine(s);

        ProcessCollection(numbers, square, format, print);
    }

    static void ProcessCollection<T1, T2, T3>(List<T1> items, Func<T1, T2> transform, Func<T2, T3> formatter, Action<T3> output)
    {
        foreach (var item in items)
        {
            T2 processed = transform(item);
            T3 result = formatter(processed);
            output(result);
        }
    }
}
