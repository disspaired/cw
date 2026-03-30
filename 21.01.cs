1
using System;

class ToDoList
{
    private string[] tasks = new string[5];

    public string this[int index]
    {
        get
        {
            if (index >= 0 && index < 5)
            {
                return tasks[index];
            }
            else
            {
                return "Задача не найдена";
            }
        }
        set
        {
            if (index >= 0 && index < 5)
            {
                tasks[index] = value;
            }
        }
    }
}

2
class WeatherJournal
{
    private double[] temperatures = new double[7];

    public double this[int index]
    {
        get
        {
            return temperatures[index];
        }
        set
        {
            if (value >= -50 && value <= 50)
            {
                temperatures[index] = value;
            }
            else
            {
                temperatures[index] = 0;
            }
        }
    }
}
