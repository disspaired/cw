#include <iostream>

void t_1(){
 int a, b;
 
 std::cout << "Enter numbers: ";
 std::cin >> a >> b;
 
 if (b == 0) {
  std::cout << "ERROR" << std::endl;   
 }
 
 std::cout << a / b << std::endl;
 
}

void t_2(){
 int a;
 
 std::cout <<"Enter number: ";
 std::cin >> a;
 
 if(a >= 100 && a<=999 && a % 2 == 0){
  std::cout <<"The number is three-digit and even! " << std::endl;
 } else {
  std::cout << "Incorrecr number" <<std::endl;   
 }
    
}

void t_3(){
 int number;
 
 std::cout << "Enter number of month: ";
 std::cin >> number;
 
 switch (number) {
     
    case 1:
         std::cout << "winter, 30 days" << std::endl;
         break;
    case 2:
         std::cout << "winter, 28 days" << std::endl;
         break;
    case 3:
         std::cout << "spring, 31 days" << std::endl;
         break;
    case 4:
         std::cout << "spring, 30 days" << std::endl;
         break;
    case 5:
         std::cout << "spring, 31 days" << std::endl;
         break;
    case 6:
         std::cout << "summer, 30 days" << std::endl;
         break;
    case 7:
         std::cout << "summer, 31 days" << std::endl;
         break;
    case 8:
         std::cout << "summer, 31 days" << std::endl;
         break;
    case 9:
         std::cout << "autumn, 30 days" << std::endl;
         break;
    case 10:
         std::cout << "autumn, 31 days" << std::endl;
         break;
    case 11:
         std::cout << "autumn, 30 days" << std::endl;
         break;
    case 12:
         std::cout << "winter, 31 days" << std::endl;
         break;
    default:
            std::cout <<"ERROR" << std::endl;
 }
    
}

void t_4(){
    
char operation;
int a, b;

 std::cout << "Enter numbers: ";
 std::cin >> a >> b;
 
 std::cout <<"Enter operation (+, -, *, /, %): ";
 std::cin >> operation;
 
 switch (operation) {
     
        case '+':
              std::cout << a + b << std::endl;
              break;
        case '-':
              std::cout << a - b << std::endl;
              break;
        case '*':
              std::cout << a * b << std::endl;
              break;
        case '/':
              std::cout << a / b << std::endl;
              break;
        case '%':
              std::cout << a % b << std::endl;
              break;
        default:
            std::cout <<"ERROR" << std::endl;
  }
}
    


int main (){
    t_1();
    t_2();
    t_3();
    t_4();
}
