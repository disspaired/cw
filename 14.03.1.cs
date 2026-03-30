using System;

class Book
{
    public string Title;
    public string Author;
    public int Year;

    public Book()
    {
        Title = "Неизвестно";
        Author = "Неизвестно";
        Year = DateTime.Now.Year;
    }

    public Book(string title, string author, int year)
    {
        Title = title;
        Author = author;
        Year = year;
    }

    public void PrintInfo()
    {
        Console.WriteLine($"Книга: {Title}, Автор: {Author}, Год: {Year}");
    }

    public bool IsOld()
    {
        return (DateTime.Now.Year - Year) > 20;
    }
}

class Program
{
    static void Main()
    {
        Book b1 = new Book("Преступление и наказание", "Ф. Достоевский", 1866);
        Book b2 = new Book();
        Book b3 = new Book { Title = "Мастер и Маргарита", Author = "М. Булгаков", Year = 1967 };

        b1.PrintInfo();
        Console.WriteLine($"Старая: {b1.IsOld()}");

        b2.PrintInfo();
        Console.WriteLine($"Старая: {b2.IsOld()}");

        b3.PrintInfo();
        Console.WriteLine($"Старая: {b3.IsOld()}");
    }
}
