#include <iostream>
 
 void n_1() {
    double number;

  std::cout << "Enter number: ";

  std::cin >> number;

  if (number > 0) {

    std::cout << "positive" << std::endl;
  } else if (number < 0) {
    std::cout << "negative" << std::endl;
  }
  else {
    std::cout << "zero" << std::endl;
}
}
 void n_2(){
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << "You entered an even number." << std::endl;
    } else {
        std::cout << "You entered an odd number." << std::endl;
    } 
 }
 void n_3(){
    double num1, num2;
    std::cout << "Enter number one: ";
    std::cin >> num1;
    std::cout << "Enter number two: ";
    std::cin >> num2;
    
    if (num1 > num2) {
        std::cout << "Max number: " << num1 << std::endl;
    } else {
        std::cout << "Max number: " << num2 << std::endl;
    }

 }
 void n_4 (){
    
    int grade;
    
    std::cout << "Enter a rating (from 1 to 5): ";
    std::cin >> grade;
    
    if (grade >= 3 && grade <= 5) {
        std::cout << "Satisfactory";
    } else if (grade >= 1 && grade <= 2) {
        std::cout << "Unsatisfactory";
    } else {
        std::cout << "Invalid rating! Please enter a number from 1 to 5";
    }
 }
 void n_5(){
    char symbol;
    
    std::cout << "Enter simbol: ";
    std::cin >> symbol;
    
    if (symbol == 'a' || symbol == 'i' || symbol == 'e' || symbol == 'o' || symbol == 'u') {
        std::cout << "This is a vowel letter";
    } else if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
        std::cout << "This is a consonant letter";
     else {
        std::cout << "This is not a letter";
    }
 }
 void n_6(){
    int year;
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << "Leap year";
    } else {
        std::cout << "The year is boneless";
    }
 }
 void n_7() {
    double  a, b;
    char  op;
    std::cout << "Enter number one: ";
    std::cin >> a;
    std::cout << "Enter number two: ";
    std::cin >> b;
    std::cout << "choose operation: ";
    std::cin >> op;
    if (op == '+') {
    std::cout << a + b << std::endl;
    }
    else if (op == '-') {
    std::cout << a - b << std::endl;
    }
    else if (op == '*') {
    std::cout << a * b << std::endl;
    }
    else if (op == '/') {
        if ('b' == 0) std::cout << "Error: division by zero is not handled";
        else std::cout << a / b << std::endl;
    }
    else std::cout << "Invalid operator";
}
 void n_8(){
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number >= 10 && number <= 20) {
        std::cout << "The number belongs to the interval [10, 20]";
    } else {
        std::cout << "The number does not belong to the interval [10, 20]";
    }
 }
 void n_9(){
    int month;
    
    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;
    
    if (month >= 3 && month <= 5) {
        std::cout << "Spring";
    } else if (month >= 6 && month <= 8) {
        std::cout << "Summer";
    } else if (month >= 9 && month <= 11) {
        std::cout << "Autumn";
    } else if (month >= 1 && month <= 2 || month == 12) {
        std::cout << "Winter";
    }
 }
 void n_10(){
    int number;
    int firstDigit;
    int lastDigit;
    std::cout << "Enter a three-digit number: ";
    std::cin >> number;
    
    if (number >= 100 && number <= 999) {
        int firstDigit = number / 100;
        int lastDigit = number % 10;
    }   
        if ( firstDigit == lastDigit ) {
            std::cout << "The number is a symmetric palindrome";
        } else {
            std::cout << "The number is not a symmetric palindrome";
        }
 }
int main() {
    n_1();
    n_2();
    n_3();
    n_4();
    n_5();
    n_6();
    n_7();
    n_8();
    n_9();
    n_10();
    return 0;
}
