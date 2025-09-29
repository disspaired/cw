#include <iostream>

void n_1() {
      int number;
      
      std::cout <<"Enter number: ";
      std::cin >> number;
      
      if(number >= 10 && number <= 99 ){
          std::cout <<"The number is two-digit and positive" << std::endl;
      } else {
           std::cout <<"The number is not two-digit and negative" << std::endl;
      }
      
}  

void n_3(){
    
 int ur_pass;
 int us_pass = 56341237;
 
 std::cout <<"Enter password: ";
 std::cin >> ur_pass;
 
 if(ur_pass == us_pass){
     std::cout << "Correct password!" << std::endl;
 }else {
  std::cout <<"Incorrect password!" << std::endl;   
 }
 
}

void n_4(){
   int a, b, c;
   
   std::cout << "Enter lengths of sides of triangle: ";
   std::cin >> a >> b >> c;
   
   if(a + b > c && a + c > b && b + c > a){
       std::cout <<"Triangle is correct" << std::endl;
   }else{
    std::cout <<"Triangle is incorrect!" << std::endl;   
   }
}

void n_5(){
   int a, b, c;
    
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Triangle doesn't exist";
    }
    
    if (a * a + b * b == c * c || 
        b * b + c * c == a * a || 
        a * a + c * c == b * b) {
        std::cout << "Yes, the triangle is right-angled" std::endl;
    } else {
        std::cout << "No, the triangle is not a right triangle" << std::endl;
    }   
}

void n_6(){
 int a, b;
 char operation;
 
 std::cout << "Enter numbers: ";
 std::cin >> a >> b;
 
 std::cout << "Enter operation (+, -, *, /)";
 std::cin >> operation;
 
 if(operation == '+'){
     std::cout << a + b << std::endl;
 }
 if(operation == '-'){
     std::cout << a - b << std::endl;
 }
 if(operation == '*'){
  std::cout << a * b << std::endl;
 }
 if(operation == '/'){
  std::cout << a / b << std::endl;   
 }
else if(b == 0){
  std::cout << "Error" << std::endl;
 }
}

void n_7() {

    double a, b, c;
    
    std::cout << "enter three strings: ";
    std::cin >> a >> b >> c;
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Treugolnik not exist!" << std::endl;   
    }
    if (a == b && b == c) {
        std::cout << "ravnostoronii" << std::endl;
    }
    else if (a == b || b == c || a == c) {
        std::cout << "ravnobedrenii" << std::endl;
    }
    else {
        std::cout << "raznostoronii" << std::endl;
    }
}  
 
  

int main(){
     n_1();
    // n_2();  
     n_3();
     n_4();
     n_5(); 
     n_6();
     n_7();
    // n_8();
    // n_9();
    // n_10();
      return 0;
}
