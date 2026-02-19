using System.Text.RegularExpressions;

namespace LINQZ
{
    public class Vanya
    {
        public  static void task1()
        {
            List<Item> inventory = new List<Item>
{
                new Item { Name = "Меч", Type = "Оружие", Rarity = "Редкий", Value = 100 },
    new Item { Name = "Щит", Type = "Броня", Rarity = "Обычный", Value = 50 },
    new Item { Name = "Зелье регенирации", Type = "Зелье", Rarity = "Редкий", Value = 250 },
    new Item { Name = "Ботинки Гермеса", Type = "Броня", Rarity = "Эпический", Value = 500 },
    new Item { Name = "Шлем", Type = "Броня", Rarity = "Обычный", Value = 100 },
    new Item { Name = "Лук", Type = "Оружие", Rarity = "Обычный", Value = 50 },
    new Item { Name = "Серпы", Type = "Оружие", Rarity = "Редкий", Value = 150 },
    new Item { Name = "Зелье невидимости", Type = "Зелье", Rarity = "Эпический", Value = 700 },
    new Item { Name = "Нагрудник", Type = "Броня", Rarity = "Обычный", Value = 100 },
    new Item { Name = "Копье", Type = "Оружие", Rarity = "Обычный", Value = 50 },

};
            var RareRarity = inventory.GroupBy(h => h.Rarity);
            foreach (var hero in RareRarity)
            {
                if (hero.Key == "Редкий")
                {
                    Console.WriteLine($"{hero.Key}");
                    foreach (var Item in hero)
                    {
                        Console.WriteLine(Item.Name);
                    }
                }
            }
            var maxValue = inventory.Max(h => h.Value);
            {
                Console.WriteLine($" - Максимальная стоимость: {maxValue}");
            }
            var typeSort = inventory.GroupBy(h => h.Type);
            foreach (var hero in typeSort)
            {
                Console.WriteLine($"Тип: {hero.Key}");
                foreach(var Item in hero)
                {
                    Console.WriteLine($"- {Item.Name}");
                }
            }
            var midCost = inventory.Average(h => h.Value);
            {
                Console.WriteLine($"Средняя стоимость:  {midCost}");
            }
            var biggerMidCost = inventory.Where(h => h.Value > midCost);
            {
                Console.WriteLine($"Цена выше средней: {biggerMidCost}");
            }
        }
    }
    public class Item
    {
        public string Name; public string Type; public string Rarity; public int Value;
    }
}


