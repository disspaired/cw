using System;
public delegate void massageDelegate(string massage);
public class Program
{
    public static void MassageDelegate(string massage)
    {
        Console.WriteLine(massage);
    }

    public static void PrintMassageSasha(string massage)
    {
        Console.WriteLine(massage + "Sasha");
    }
    static void Main()
    {
        massageDelegate printDelegate;

        if (true)
        {
            printDelegate = MassageDelegate;
        }
        else
        {
            printDelegate=PrintMassageSasha;
        }
        printDelegate("gegegeg");
    }
}



public delegate int CalculateDelegate(int a, int b);
public class Program
{
    public static int Add(int a, int b)
    {
        return a + b;
    }

    public static int Substract(int a, int b)
    {
        return a - b;
    }

    public static int Umnojeniye(int a, int b)
    {
        return a * b;
    }

    public static int Deleniye(int a, int b)
    {
        return a / b;
    }

    public static void Main()
    {
        CalculateDelegate calculate = Add;
        Console.WriteLine(calculate(5, 3));

         calculate = Substract;
        Console.WriteLine(calculate(5, 3));

         calculate = Umnojeniye;
        Console.WriteLine(calculate(5, 3));

         calculate = Deleniye;
        Console.WriteLine(calculate(5, 3));
    }
}



