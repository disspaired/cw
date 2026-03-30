using System;

class BankAccount
{
    private decimal balance;

    public decimal Balance
    {
        get { return balance; }
    }

    public void Deposit(decimal amount)
    {
        if (amount > 0)
        {
            balance += amount;
            Console.WriteLine($"Пополнение: +{amount}. Баланс: {balance}");
        }
    }

    public void Withdraw(decimal amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            Console.WriteLine($"Снятие: -{amount}. Баланс: {balance}");
        }
        else
        {
            Console.WriteLine("Ошибка: недостаточно средств или некорректная сумма.");
        }
    }
}

class Program
{
    static void Main()
    {
        BankAccount account = new BankAccount();

        account.Deposit(1000);
        account.Withdraw(300);
        account.Withdraw(1500);

        Console.WriteLine($"Итоговый баланс: {account.Balance}");
    }
}
