using System;
using System.Collections.Generic;
using System.Linq;

class Item
{
    public string Name { get; set; }
    public string Type { get; set; }  
    public string Rarity { get; set; } 
    public int Value { get; set; }   
}

class Quest
{
    public string Name { get; set; }
    public int Level { get; set; }  
    public int Reward { get; set; } 
    public bool IsCompleted { get; set; }
}

class Hero
{
    public string Name { get; set; }
    public string Class { get; set; } 
    public int Level { get; set; }
    public int Health { get; set; }
    public int Attack { get; set; }
    public int Defense { get; set; }
}

class Enemy
{
    public string Name { get; set; }
    public string Type { get; set; }
    public int Health { get; set; }
    public int Attack { get; set; }
    public int Defense { get; set; }
}

class GameSession
{
    public string Player { get; set; }
    public int Level { get; set; }
    public int Kills { get; set; }
    public int Deaths { get; set; }
    public int TimePlayed { get; set; }
}

class Program
{
    static void Main()
    {
        Console.WriteLine("=== Система управления инвентарём ===\n");
        InventoryDemo();

        Console.WriteLine("\n=== Система квестов ===\n");
        QuestsDemo();

        Console.WriteLine("\n=== Система героев ===\n");
        HeroesDemo();

        Console.WriteLine("\n=== Система врагов ===\n");
        EnemiesDemo();

        Console.WriteLine("\n=== Система игровых сессий ===\n");
        SessionsDemo();
    }

    static void InventoryDemo()
    {
        var inventory = new List<Item>
        {
            new Item { Name = "Меч", Type = "Оружие", Rarity = "Редкий", Value = 100 },
            new Item { Name = "Щит", Type = "Броня", Rarity = "Обычный", Value = 50 },
            new Item { Name = "Зелье здоровья", Type = "Зелье", Rarity = "Обычный", Value = 20 },
            new Item { Name = "Лук", Type = "Оружие", Rarity = "Эпический", Value = 200 },
            new Item { Name = "Кольчуга", Type = "Броня", Rarity = "Редкий", Value = 120 },
            new Item { Name = "Мантия мага", Type = "Броня", Rarity = "Эпический", Value = 180 },
            new Item { Name = "Зелье маны", Type = "Зелье", Rarity = "Редкий", Value = 40 },
            new Item { Name = "Кинжал", Type = "Оружие", Rarity = "Обычный", Value = 30 },
            new Item { Name = "Амулет", Type = "Зелье", Rarity = "Эпический", Value = 150 },
            new Item { Name = "Топор", Type = "Оружие", Rarity = "Редкий", Value = 90 }
        };

        var rareItems = inventory.Where(i => i.Rarity == "Редкий");
        Console.WriteLine("Редкие предметы:");
        foreach (var i in rareItems) Console.WriteLine($"- {i.Name} ({i.Value} золота)");

        var mostExpensive = inventory.OrderByDescending(i => i.Value).First();
        Console.WriteLine($"\nСамый дорогой: {mostExpensive.Name} ({mostExpensive.Value} золота)");

        var groupedByType = inventory.GroupBy(i => i.Type);
        Console.WriteLine("\nПо типам:");
        foreach (var g in groupedByType)
