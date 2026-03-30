using System;

class Program
{
    delegate decimal CheckCalculator(decimal price);

    static CheckCalculator CreateCalculator(decimal discountPercent)
    {
        return delegate (decimal price)
        {
            return price * (1 - discountPercent / 100);
        };
    }

    static void Main()
    {
        CheckCalculator beginnerCalc = CreateCalculator(5);
        CheckCalculator vipCalc = CreateCalculator(20);

        decimal price = 1000;

        Console.WriteLine($"Цена для Новичка (5%): {beginnerCalc(price)}");
        Console.WriteLine($"Цена для VIP (20%): {vipCalc(price)}");
    }
}
