using System;

public class Car
{
    // Поля
    public string Brand;
    public string Model;
    public int Year;
    public double EngineVolume;
    public bool IsRunning;
    public int CurrentSpeed;

    // Конструктор
    public Car(string brand, string model, int year, double engineVolume)
    {
        Brand = brand;
        Model = model;
        Year = year;
        EngineVolume = engineVolume;
        IsRunning = false; // По умолчанию заглушен
        CurrentSpeed = 0;  // По умолчанию стоит
    }

    // Методы
    public void StartEngine()
    {
        IsRunning = true;
    }

    public void StopEngine()
    {
        IsRunning = false;
        CurrentSpeed = 0;
    }

    public void Accelerate(int speed)
    {
        if (IsRunning)
        {
            CurrentSpeed += speed;
            Console.WriteLine($"Current Speed: {CurrentSpeed} km/h");
        }
        else
        {
            Console.WriteLine("Cannot accelerate. Start the engine first!");
        }
    }

    public void DisplayInfo()
    {
        Console.WriteLine($"Brand: {Brand}");
        Console.WriteLine($"Model: {Model}");
        Console.WriteLine($"Year: {Year}");
        Console.WriteLine($"Engine Volume: {EngineVolume} L");
        Console.WriteLine($"Is Running: {IsRunning}");
    }
}

class Program
{
    static void Main()
    {
        // Создание объектов
        Car car1 = new Car("Toyota", "Corolla", 2020, 1.8);
        Car car2 = new Car("Tesla", "Model 3", 2022, 0.0);
        Car car3 = new Car("BMW", "M5", 2023, 4.4);

        // Демонстрация работы (как в примере)
        car1.DisplayInfo();

        Console.WriteLine();
        car1.StartEngine();
        car1.DisplayInfo();

        Console.WriteLine();
        car1.StopEngine();
        car1.DisplayInfo();

        Console.WriteLine();
        car1.StartEngine();
        car1.Accelerate(50);
    }
}
