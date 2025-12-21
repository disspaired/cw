using System.Diagnostics.SymbolStore;


//Задача 1
int num1;
int num2;
char sym;
Console.WriteLine("Enter first number: ");
Int32.TryParse(Console.ReadLine(), out num1);
Console.WriteLine("Enter second number: ");
Int32.TryParse(Console.ReadLine(), out num2);
Console.WriteLine("Enter some sym: ");
char.TryParse(Console.ReadLine(), out sym);
if (sym == '/')
{
    if (num2 == 0)
    {
        Console.WriteLine("Error!");
    }
    else
    {
        Console.WriteLine(num1 / num2);
    }
        
}
else if (sym == '+')
{
    Console.WriteLine(num1 + num2);
}
else if (sym == '-')
{
    Console.WriteLine(num1 + num2);
}
else if (sym == '*')
{
    Console.WriteLine(num1 * num2);
}



//задача 1.1

double cymma;
double procent;
Console.WriteLine("Enter cymma: ");
double.TryParse(Console.ReadLine(), out cymma);
Console.WriteLine("Enter procent: ");
double.TryParse(Console.ReadLine(), out procent);
if (procent == 0){
   Console.WriteLine(cymma);
}
else{
   Console.WriteLine(cymma * (procent / 100));
}


//Задание 2: Цикл for, массивы


int[] arr = new int[10];
Random rnd = new Random();

for (int i = 0; i < 10; i++)
{
   arr[i] = rnd.Next(-50, 51);
}

Console.WriteLine("Mas: " + string.Join(" ", arr));

Console.Write("4etnoe 4uclo: ");
for (int i = 0; i < 10; i++)
{
   if (arr[i] > 0 && arr[i] % 2 == 0)
   {
       Console.Write(arr[i] + " ");
   }
}

int sym = 0;
for (int i = 0; i < 10; i++)
{
   if (arr[i] < 0) sym += arr[i];
}
Console.WriteLine($"\nSym of negative: {sym}");

int min = arr[0], max = arr[0];
for (int i = 1; i < 10; i++)
{
   if (arr[i] < min) min = arr[i];
   if (arr[i] > max) max = arr[i];
}
Console.WriteLine($"Min: {min}, Max: {max}");
