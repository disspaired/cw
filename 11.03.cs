using System;

class Program
{
    delegate string StringFilter(string input);

    static string ToUpperCase(string input)
    {
        return input.ToUpper();
    }

    static string ToStars(string input)
    {
        return new string('*', input.Length);
    }

    static void ProcessString(string input, StringFilter filter)
    {
        string result = filter(input);
        Console.WriteLine(result);
    }

    static void Main()
    {
        string text = "Hello World";
        StringFilter filter;

        filter = ToUpperCase;
        ProcessString(text, filter);

        filter = ToStars;
        ProcessString(text, filter);
    }
}
