using System;
using System.Collections.Generic;

class Task
{
    public int Id { get; set; }
    public string Description { get; set; }
    public bool IsCompleted { get; set; }

    public Task(int id, string description)
    {
        Id = id;
        Description = description;
        IsCompleted = false;
    }

    public override string ToString()
    {
        return $"[{Id}] {Description} [{(IsCompleted ? "Выполнено" : "Не выполнено")}]";
    }
}

class Program
{
    private static List<Task> tasks = new List<Task>();
    private static int nextId = 1;

    static void Main(string[] args)
    {
        Console.WriteLine("Список задач. Выберите действие:");

        while (true)
        {
            Console.WriteLine("\n1. Добавить задачу");
            Console.WriteLine("2. Просмотреть задачи");
            Console.WriteLine("3. Редактировать задачу");
            Console.WriteLine("4. Удалить задачу");
            Console.WriteLine("5. Отметить задачу как выполненную");
            Console.WriteLine("6. Выход");

            Console.Write("Ваш выбор: ");
            string input = Console.ReadLine();

            switch (input)
            {
                case "1":
                    AddTask();
                    break;
                case "2":
                    ViewTasks();
                    break;
                case "3":
                    EditTask();
                    break;
                case "4":
                    DeleteTask();
                    break;
                case "5":
                    MarkTaskAsCompleted();
                    break;
                case "6":
                    Console.WriteLine("До свидания!");
                    return;
                default:
                    Console.WriteLine("Неверный ввод. Попробуйте снова.");
                    break;
            }
        }
    }

    static void AddTask()
    {
        Console.Write("Введите описание задачи: ");
        string description = Console.ReadLine();

        if (string.IsNullOrWhiteSpace(description))
        {
            Console.WriteLine("Описание не может быть пустым.");
            return;
        }

        Task newTask = new Task(nextId++, description);
        tasks.Add(newTask);
        Console.WriteLine("Задача добавлена!");
    }

    static void ViewTasks()
    {
        if (tasks.Count == 0)
        {
            Console.WriteLine("Список задач пуст.");
            return;
        }

        Console.WriteLine("\nСписок задач:");
        foreach (Task task in tasks)
        {
            Console.WriteLine(task);
        }
    }

    static void EditTask()
    {
        if (tasks.Count == 0)
        {
            Console.WriteLine("Список задач пуст.");
            return;
        }

        Console.Write("Введите ID задачи для редактирования: ");
        if (!int.TryParse(Console.ReadLine(), out int id))
        {
            Console.WriteLine("Неверный формат ID.");
            return;
        }

        Task task = tasks.Find(t => t.Id == id);
        if (task == null)
        {
            Console.WriteLine("Задача с таким ID не найдена.");
            return;
        }

        Console.Write("Новое описание задачи: ");
        string newDescription = Console.ReadLine();

        if (string.IsNullOrWhiteSpace(newDescription))
        {
            Console.WriteLine("Описание не может быть пустым.");
            return;
        }

        task.Description = newDescription;
        Console.WriteLine("Задача обновлена!");
    }

    static void DeleteTask()
    {
        if (tasks.Count == 0)
        {
            Console.WriteLine("Список задач пуст.");
            return;
        }

        Console.Write("Введите ID задачи для удаления: ");
        if (!int.TryParse(Console.ReadLine(), out int id))
        {
            Console.WriteLine("Неверный формат ID.");
            return;
        }

        Task task = tasks.Find(t => t.Id == id);
        if (task == null)
        {
            Console.WriteLine("Задача с таким ID не найдена.");
            return;
        }

        tasks.Remove(task);
        Console.WriteLine("Задача удалена!");
    }

    static void MarkTaskAsCompleted()
    {
        if (tasks.Count == 0)
        {
            Console.WriteLine("Список задач пуст.");
            return;
        }

        Console.Write("Введите ID задачи для отметки как выполненной: ");
        if (!int.TryParse(Console.ReadLine(), out int id))
        {
            Console.WriteLine("Неверный формат ID.");
            return;
        }

        Task task = tasks.Find(t => t.Id == id);
        if (task == null)
        {
            Console.WriteLine("Задача с таким ID не найдена.");
            return;
        }

        task.IsCompleted = true;
        Console.WriteLine("Задача отмечена как выполненная!");
    }
}
