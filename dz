#include <iostream>
 void n_1() {
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    if(number >= 10 && number <= 99 ){
        std::cout << "The number id two digit and positive" << std::endl;
    }
    else{
        std::cout << "The number is not two digit and negative" << std::endl;
    }
 }
 void n_2(){
    
 }
 void n_3(){
    int ur_pass;
    int us_pass = 12345678;

    std::cout << "Enter password: ";
    std::cin >> ur_pass;

    if(ur_pass == us_pass){
     std::cout << "Correct password! ";
    }
    else {
     std::cout << "Incorrect password!";
    }
 }
 void n_4(){
    int a, b, c;
    std::cout << " Enter lengths of sides of triangle: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a){
        std::cout << " Triangle is correct" << std::endl;
    }
    else{
        std::cout << " Triangle is incorrect!" << std::endl;
    }
 }
 void n_5() {  
      
     int a, b, c;

    std::cout << "Vvedite tri storons triugolnika ";
    std::cin >> a >> b >> c;
    
    if (a*a + b*b == c*c || 
        a*a + c*c == b*b || 
        b*b + c*c == a*a) {
        std::cout << "Treugolnik pryamougolniy!" << std::endl;
    } else {
        std::cout << "Treugolnik ne pryamougolniy." << std::endl;
    }
    
}

bool isTriangle(double a, double b, double c) {  
   
    return (a + b > c) && (a + c > b) && (b + c > a);  
} 
void n_6()  {  
double num1, num2; 
    char operation;   
    
    std::cout << "first: ";
    std::cin >> num1;
    
    std::cout << "secont: ";
    std::cin >> num2;
    
    std::cout << "operation (+, -, *, /): ";
    std::cin >> operation; 
   
    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
            
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
            
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
            
        case '/':
        
            if (num2 == 0) {
                std::cout << "You can't divide by zero." << std::endl;
            } else {
                std::cout << "Result: " << num1 / num2 << std::endl;
            }
            break;
            
        default:
            std::cout << "EROR: " << std::endl;
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

void n_8() {
  
    double x1, y1, x2, y2;  
    double x, y;
    
    std::cout << "vvedite cords left corner (x1 y1): ";
    std::cin >> x1 >> y1;
    
    std::cout << "vvedite cords left corner (x2 y2): ";
    std::cin >> x2 >> y2;
    
    std::cout << "Vvedite cords point (x y): ";
   std::cin >> x >> y;
    
   
    double minX = (x1 < x2) ? x1 : x2;
    double maxX = (x1 > x2) ? x1 : x2;
    double minY = (y1 < y2) ? y1 : y2;
    double maxY = (y1 > y2) ? y1 : y2;
     
    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        std::cout << "POINT PRINADLEJIT" << std::endl;
    } else {
        std::cout << "POINT Ne PRINADLEJIT" << std::endl;
    }  
}
void n_9() {

    int day, month;
    
   
    std::cout << "VVEDITE DAY ";
    std::cin >> day;
    std::cout << "VVEDITE MONTH (count from 1 to 12): ";
    std::cin >> month;
    
   
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        std::cout << "ERROR NEVERNO" << std::endl;

    }
    
    std::string zodiac;
    switch (month) {
        case 1:
            zodiac = (day <= 19) ? "KOZEROG" : "VODOLEY";
            break;
        case 2:
            zodiac = (day <= 18) ? "VODOLEY" : "RIBA";
            break;
        case 3:
            zodiac = (day <= 20) ? "RIBA" : "OVEN";
            break;
        case 4:
            zodiac = (day <= 19) ? "OVEN" : "TELEC";
            break;
        case 5:
            zodiac = (day <= 20) ? "TELEC" : "BLIZNEC";
            break;
        case 6:
            zodiac = (day <= 20) ? "BLIZNEC" : "RAK";
            break;
        case 7:
            zodiac = (day <= 22) ? "RAK" : "LEV";
            break;
        case 8:
            zodiac = (day <= 22) ? "LEV" : "DEVA";
            break;
        case 9:
            zodiac = (day <= 22) ? "DEVA" : "VESI";
            break;
        case 10:
            zodiac = (day <= 22) ? "VESI" : "SKORPION";
            break;
        case 11:
            zodiac = (day <= 21) ? "SKORPION" : "CTPELEC";
            break;
        case 12:
            zodiac = (day <= 21) ? "CTPELEC" : "KOZEROG";
            break;
    }
    
    std::cout << "UR ZNAK ZODIAKA: " << zodiac << std::endl;
    
}

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    return false;
}

void n_10() {

   int year;
    
    std::cout << "VVEDITE GOD ";
    std::cin >> year;
       
    if (isLeapYear(year)) {
        std::cout << year << " GOD YAVLYAETSA VISOKOSTM" << std::endl;
        
        
        if (year % 4 == 0) {
            std::cout << year << "GOD YAVLYAETSA OLIMP" << std::endl;
        }
    }
    else {
       std::cout << year << " GOD NE YAVLYAETSA VISOKOSTM " << std::endl;
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
