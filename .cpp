#include <iostream>

void n_1() {
   int a;
 
 std::cout << "Enter number: "; 
 std::cin >> a;
 
 if (a > 0){
  std::cout <<"Positive! " << std::endl;
 }
 if (a < 0){
 std::cout <<"Negative( " << std::endl;
 }
}

void n_2(){
    int a;
    
    std::cout << "Enter number:";
    std::cin >> a;
    
    if (a % 2 == 0){
        std::cout << "chetnoe" << std::endl;
    }
    if (a % 2 != 0) {
    std::cout <<"ne chetnoe" << std::endl;
    }
}

void n_3(){
 
 int a;
 int b;
 
 std::cout << "Enter first number:";
 std::cin >> a;
  
  std::cout << "Enter second number:";
 std::cin >> b;
 
  if (a == b){
      std::cout <<"Chisla ravni" << std::endl;
  }
  else if (a != b){
   std::cout <<"Chisla ne ravni" << std::endl;   
  }
}

void n_4(){
 int a;
 
 std::cout <<"Enter number: ";
 std::cin >> a;
 
 if(a % 5 == 0){
     std::cout << "Delitsya" << std::endl;
 }
 
 else if (a % 5 != 0){
  std::cout << "Ne delitsya" << std::endl;   
 }
}

void n_5(){
 int a;
 
 std::cout <<"Enter your age: ";
 std::cin >> a;
 
 if (a >= 18) {
    std::cout <<"Yoy can by beer;)" << std::endl;
 }
 else if (a < 18){
     std::cout <<"Maloletka" << std::endl;
 }
}

void n_6() {
   int a;
 
 std::cout << "Enter number: "; 
 std::cin >> a;
 
 if (a < 0){
  std::cout <<"Negative! " << std::endl;
 }
 if (a > 0){
 std::cout <<"positive( " << std::endl;
 }
}

void n_7(){
 char sim;
  
  std::cout <<"Enter simbol: ";
  std::cin >> sim;
  
  if (sim == 'A'){
   std::cout << "Correct!" << std::endl;
  }
  else if (sim != 'A'){
   std::cout <<"Incorrect(" << std::endl;   
  }
}

void n_8(){
 int num_1, num_2;
 
 std::cout << "Enter numbers: ";
 std::cin >> num_1 >> num_2;
 
 if (num_1 > 0 && num_2 > 0){
  std::cout <<"Positive" << std::endl;
 }
 else {
  std::cout <<"Negative" <<std::endl;   
 }
}

void n_9() {
 int num_1, num_2;
 
 std::cout <<"Enter numbers: ";
 std::cin >> num_1 >> num_2;
 
 if (num_1 == 0 || num_2 == 0){
 std::cout <<"one or both of numbers equal zero" << std::endl;
}
else {
std::cout <<"not equal zero" << std::endl;
}
}
    
    void n_10(){
     int number;
     
     std::cout <<"Enter number: ";
     std::cin >> number;
     
     if (!(number == 10)) {
      std::cout <<"Number is not equal to 10";   
     }
    }
   
int main(){
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
