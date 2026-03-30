using System;

static class MathUtils
{
    public static bool IsEven(int n)
    {
        return n % 2 == 0;
    }

    public static long Factorial(int n)
    {
        if (n < 0) return 0;
        long result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }

    public static double Power(double a, int b)
    {
        double result = 1;
        int exponent = b < 0 ? -b : b;

        for (int i = 0; i < exponent; i++)
        {
            result *= a;
        }

        return b < 0 ? 1 / result : result;
    }

    public static int Clamp(int value, int min, int max)
    {
        if (value < min) return min;
        if (value > max) return max;
        return value;
    }
}

class Program
{
    static void Main()
    {
        Console.WriteLine($"IsEven(10): {MathUtils.IsEven(10)}");
        Console.WriteLine($"Factorial(5): {MathUtils.Factorial(5)}");
        Console.WriteLine($"Power(2, 3): {MathUtils.Power(2, 3)}");
        Console.WriteLine($"Clamp(15, 1, 10): {MathUtils.Clamp(15, 1, 10)}");
    }
}
