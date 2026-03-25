using System;
using System.Data;

public interface IPaymentMethod
{
    bool Pay(decimal amount);
}

public class CardPayment : IPaymentMethod
{
    public bool Pay(decimal amount)
    {
        Console.WriteLine("Оплата картой прошла");
        return true;
    }
}

public class CryptoPayment : IPaymentMethod
{
    public bool Pay(decimal amount)
    {
        Console.WriteLine("Транзакция в блокчейне подтверждена");
        return true;
    }
}

public class Order
{
    private string _status;

    public string OrderNumber { get; set; }
    public decimal Amount { get; set; }

    public string Status
    {
        get => _status;
        private set
        {
            _status = value;
            OnStatusChanged?.Invoke(this);
        }
    }
    public event Action<Order> OnStatusChanged;

    public Order(string orderNumber, decimal amount)
    {
        OrderNumber = orderNumber;
        Amount = amount;
        Status = "Создан";
    }

    public void Process(IPaymentMethod method)
    {
        Console.WriteLine($"\nОбработка заказа №{OrderNumber} на сумму {Amount} руб.");

        bool paymentSuccess = method.Pay(Amount);

        if (paymentSuccess)
        {
            Status = "оплачен";
            Console.WriteLine($"Статус заказа №{OrderNumber} изменен на: {Status}");
        }
        else
        {
            Console.WriteLine("Оплата не удалась");
        }
    }
}

public class EmailService
{
    public void OnOrderStatusChanged(Order order)
    {
        if (order.Status == "Оплачен")
        {
            Console.WriteLine($"Письмо отправлено: ваш заказ №{order.OrderNumber} в пути");
        }
    }
}

public class WarehouseApp
{
    public void OnOrderStatusChanged(Order order)
    {
        if (order.Status == "Оплачен")
        {
            Console.WriteLine($"Склад: товар зарезервирован для заказа №{order.OrderNumber}");
        }
    }
}

class Program
{
    static void Main()
    {
        Order order = new Order("ORD-001", 1500.50m);

        EmailService emailService = new EmailService();
        WarehouseApp warehouseApp = new WarehouseApp();

        order.OnStatusChanged += emailService.OnOrderStatusChanged;
        order.OnStatusChanged += warehouseApp.OnOrderStatusChanged;

        Console.WriteLine("=== Демонстрация оплаты картой ===");

        CardPayment cardPayment = new CardPayment();
        order.Process(cardPayment);

        Console.WriteLine("\n=== Демонстрация оплаты криптовалютой ===");

        Order order2 = new Order("ORD-002", 0.5m);
        order2.OnStatusChanged += emailService.OnOrderStatusChanged;
        order2.OnStatusChanged += warehouseApp.OnOrderStatusChanged;

        CryptoPayment cryptoPayment = new CryptoPayment();
        order2.Process(cryptoPayment);

        Console.WriteLine("\nНажмите любую клавишу для ввода...");
        Console.ReadLine();
    }
}
