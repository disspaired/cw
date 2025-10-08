#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void task1() {
    std::cout << "Task 1: Division of Two Numbers" << std::endl;
    double num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    if (num2 == 0) {
        std::cout << "Error: division by zero!" << std::endl;
    } else {
        std::cout << "Division result: " << num1 / num2 << std::endl;
    }
}

void task2() {
    std::cout << "Task 2: Check Three-Digit Even Number" << std::endl;
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (number >= 100 && number <= 999) {
        if (number % 2 == 0) {
            std::cout << "Number " << number << " is three-digit and even" << std::endl;
        } else {
            std::cout << "Number " << number << " is three-digit but odd" << std::endl;
        }
    } else {
        std::cout << "Number " << number << " is not three-digit" << std::endl;
    }
    std::cout << std::endl;
}

void task3() {
    std::cout << "Task 3: Season and Days in Month" << std::endl;
    int month;
    std::cout << "Enter month number (1-12): ";
    std::cin >> month;
    
    std::string season;
    int days;
    
    switch (month) {
        case 12: case 1: case 2:
            season = "Winter";
            break;
        case 3: case 4: case 5:
            season = "Spring";
            break;
        case 6: case 7: case 8:
            season = "Summer";
            break;
        case 9: case 10: case 11:
            season = "Autumn";
            break;
        default:
            std::cout << "Error: invalid month number!" << std::endl;
            return;
    }
    
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
    }
    
    std::cout << "Season: " << season << std::endl;
    std::cout << "Number of days: " << days << std::endl;
}

void task4() {
    std::cout << "=== Task 4: Calculator ===" << std::endl;
    double num1, num2;
    char operation;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /, %): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    double result;
    bool error = false;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: division by zero!" << std::endl;
                error = true;
            } else {
                result = num1 / num2;
            }
            break;
        case '%':
            if (num2 == 0) {
               std::cout << "Error: division by zero!" << std::endl;
                error = true;
            } else {
                result = (int)num1 % (int)num2;
            }
            break;
        default:
            std::cout << "Error: invalid operator!" << std::endl;
            error = true;
            break;
    }
    
    if (!error) {
        std::cout << "Result: " << result << std::endl;
    }
}

void task5() {
    std::cout << "Task 5: Leap Year" << std::endl;
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    
    bool isLeap = false;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeap = true;
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
        
     
        int nextLeap = year + 1;
        while (!((nextLeap % 4 == 0 && nextLeap % 100 != 0) || (nextLeap % 400 == 0))) {
            nextLeap++;
        }
        std::cout << "Next leap year: " << nextLeap << std::endl;
    }
}

void task6() {
    std::cout << "Task 6: Smart Home" << std::endl;
    bool isDoorOpen;
    int time;
    
    std::cout << "Is door open? (1 - yes, 0 - no): ";
    std::cin >> isDoorOpen;
    std::cout << "Enter time (0-23): ";
    std::cin >> time;
    
    if (time < 0 || time > 23) {
        std::cout << "Error: invalid time!" << std::endl;
    } else {
        if (isDoorOpen) {
            if (time > 22 || time < 6) {
                std::cout << "Alarm ON - alarm activated!" << std::endl;
            } else {
                std::cout << "Welcome!" << std::endl;
            }
        } else {
            std::cout << "Door closed, alarm deactivated" << std::endl;
        }
    }
}

void task7() {
    std::cout << "Task 7: Rock, Paper, Scissors" << std::endl;     
    srand(time(0));
    
    int computerChoice = rand() % 3; 
    int userChoice;
    
    std::cout << "Make your choice:" << std::endl;
    std::cout << "0 - Rock" << std::endl;
    std::cout << "1 - Scissors" << std::endl;
    std::cout << "2 - Paper" << std::endl;
    std::cout << "Your choice: ";
    std::cin >> userChoice;
    
    if (userChoice < 0 || userChoice > 2) {
        std::cout << "Error: invalid choice!" << std::endl;
        return;
    }
    
    std::string choices[3] = {"Rock", "Scissors", "Paper"};
    
    std::cout << "Your choice: " << choices[userChoice] << std::endl;
    std::cout << "Computer's choice: " << choices[computerChoice] << std::endl;
    
    if (userChoice == computerChoice) {
        std::cout << "Draw!" << std::endl;
    } else if ((userChoice == 0 && computerChoice == 1) || 
               (userChoice == 1 && computerChoice == 2) || 
               (userChoice == 2 && computerChoice == 0)) {
        std::cout << "You won!" << std::endl;
    } else {
        std::cout << "Computer won!" << std::endl;
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
