using System.Runtime.InteropServices;

//1.
//1.1.Итерфейс это грубо говоря список правил. Если класс реализует какой-либо интерфейс,то под него нужен и метод.

//1.2.Один класс может реализовать несколько интерфейсов. например смартфон реализует IПлеер и IФонарик.

//1.3.Неявная реализация - прото метод делается общим(public). Явная - метод прячется, становится доступным только в момент использования.

//1.4.Из плюсов у него заменяемость(Сломался старый робот-пылесос.при покупке нового не придется перестраивать весь дом, ведь вилка(интерфейс) - такая же). А также удобство - можно создать один список, положить туда лампу, фанарик и т.п, а потом одной командой включить все.

//1.5.Представим, что программа пиет ошибки. Сначала я пишу ее в txt, потом босс говорит "Хочу в телеграм". Если у меня есть интерфейс Ilogger, то я просто создаю новый класс для телеграма. В основном коде ничего менять не надо - она как вызывала метод Log(), так и вызывает.

//2.
//2.1.Класс: class Box<T> { public T Content; } - коробка, хранящая любой тип Т. Метод: void Swap<T>(ref T a, ref T b) - метод, меняющий местами два любых одинаковых объекта.

//2.2.where T : class сылочные типы(классы, интерфейсы). where T : struct - только типы значений. where T : new() - у типа должен быть пустой конструктор. where T : IDisposable - тип обязан реализовать конкретный интрфейс.

//2.3.List<T> - динамический список (замена массиву). Dictionary<TKey, TValue> - словарь (ключ-значение). Queue<T> / stack<T> - очередь и стек.

//2.4.Типобезопасность, производитльнсоть, чистота кода.

//2.5.Представим метод для получения данных из базы. Вызываем его как GetById<User> или GetById<Product>(10), и метод сам понимает, какой объект вернуть.


//1 задание
using System;

class Program
{
    static void Main()
    {
        int maxInt = GetMax(67, 42);
        Console.WriteLine($"Max int: {maxInt}");

        double maxDouble = GetMax(15.5, 7.2);
        Console.WriteLine($"Max double: {maxDouble}");

        string maxString = GetMax("aboba", "mrakobes");
        Console.WriteLine($"Max string: {maxString}");
    }

    static T GetMax<T>(T a, T b) where T : IComparable<T>
    {
        return a.CompareTo(b) > 0 ? a : b;
    }
}

//задание 2
using System;
using System.IO;

class Program
{
    static void Main()
    {
        string filePath = "data.txt";

        try
        {
            using (StreamWriter writer = new StreamWriter(filePath))
            {
                writer.WriteLine("Первая строка данных");
                writer.WriteLine("Вторая строка данных");
                writer.WriteLine("Третья строка данных");
            }
            Console.WriteLine("Запись завершена успешно.\n");

            Console.WriteLine("Содержимое файла:");
            using (StreamReader reader = new StreamReader(filePath))
            {
                string line;
                while ((line = reader.ReadLine()) != null)
                {
                    Console.WriteLine(line);
                }
            }
        }
        catch (FileNotFoundException)
        {
            Console.WriteLine("Ошибка: Файл не найден.");
        }
        catch (UnauthorizedAccessException)
        {
            Console.WriteLine("Ошибка: Нет прав для доступа к файлу.");
        }
        catch (IOException ex)
        {
            Console.WriteLine($"Ошибка ввода-вывода: {ex.Message}");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Произошла непредвиденная ошибка: {ex.Message}");
        }
    }
}
