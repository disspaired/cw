#include <iostream>
#include <string>
using namespace std;

void task1() {
    int number;
    cout << "Enter a number to check for evenness: ";
    cin >> number;
    
    cout << "The number " << number << " is " 
         << (number % 2 == 0 ? "Even" : "Odd") << endl;
}

void task2() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "The maximum number is: " 
         << (a > b ? a : b) << endl;
}

void task3() {
    bool value;
    cout << "Enter true(1) or false(0): ";
    cin >> value;
    
    cout << "Result: " 
         << (value ? "Yes" : "No") << endl;
}

void task4() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The number is " 
         << (number > 0 ? "positive" 
          : (number < 0 ? "negative" : "zero")) << endl;
}

void task5() {
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;
   
    cout << "Result: " 
         << (symbol >= 'a' && symbol <= 'z' ? symbol - 32 : symbol) << endl;
}

void task6() {
    const int LIMIT = 50000;
    int amount;
    
    cout << "Enter the withdrawal amount: ";
    cin >> amount;
    
    cout << ((amount > 0 && amount <= LIMIT && amount % 100 == 0) ? "Operation successful"
        : (amount <= 0) ? "Amount must be positive"
        : (amount % 100 != 0) ? "Amount must be a multiple of 100"
        : "Exceeds withdrawal limit") << endl;
}

void task7() {
    int secretNumber = 42; 
    int guess;
    
    cout << "Guess a number between 1 and 100:" << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess < secretNumber) {
            cout << "Too low" << endl;
        } else if (guess > secretNumber) {
            cout << "Too high" << endl;
        } else {
            cout << "Correct!" << endl;
            break;
        }
    }
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    
    return 0;
    
}
