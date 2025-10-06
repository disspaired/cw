#include <iostream>

void t_1(){
 
 int week_day = 0;
 
 std::cout << "Enter week-day: ";
 std::cin >> week_day;
 
 switch (week_day) {
         case 1:
                std::cout << "Monday" << std::endl;
                break;
         case 2:
                std::cout << "Tuesday" << std::endl;
                break;
         case 3:
                std::cout << "Wednesday" << std::endl;
                break;
         case 4:
                std::cout << "Thursday" << std::endl;
                break;
         case 5:
                std::cout << "friday" << std::endl;
                break;
         case 6:
                std::cout << "saturday" << std::endl;
                break;
         case 7:
                std::cout << "sanday" << std::endl;
                break;
         default:
            std::cout <<"ERROR" << std::endl;
     
 }
}

void t_2(){
    
 char operation;
 
 std::cout <<"Entar operation (+, -, *, /): ";
 std::cin >> operation;
 
 switch (operation) {
     
        case '+':
               std::cout << "plus" << std::endl;
               break;
        case '-':
               std::cout << "minus" << std::endl;
               break;
        case '*':
               std::cout << "multiplication" << std::endl;
               break;
        case '/':
               std::cout << "division" << std::endl;
               break;
        default:
            std::cout <<"ERROR" << std::endl;
 }
}

void t_3(){
    
 int grade;
 
 std::cout <<"Enter grade:";
 std::cin >> grade;
 
 switch (grade) {
  
        case 1:
               std::cout << "terrible" << std::endl;
               break;    
        case 2:
               std::cout << "bad" << std::endl;
               break;
        case 3:
               std::cout << "satisfactory" << std::endl;
               break;
        case 4:
               std::cout << "good" << std::endl;
               break;
        case 5:
               std::cout << "perfect!" << std::endl;
               break;
        default:
            std::cout <<"ERROR" << std::endl;
 }
}

void t_10(){
    
 char simbol;
 
 std::cout << "Enter simbol: ";
 std::cin >> simbol;
 
 switch (simbol) {
  
        case '0'...'9':
               std::cout << "number" << std::endl;
               break;
        case 'a'...'z':
               std::cout << "little letter" << std::endl;
               break;
        case 'A'...'Z':
               std::cout << "big letter" << std::endl;
               break;    
        default:
            std::cout <<"Enother simbol" << std::endl;
     
 }
}

void t_4(){
    
char operation;
int a, b;

 std::cout << "Enter numbers: ";
 std::cin >> a >> b;
 
 std::cout <<"Enter operation (+, -, *, /): ";
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
        default:
            std::cout <<"ERROR" << std::endl;
  }
}

void t_5(){
 int num;
 
 std::cout <<"Enter number: ";
 std::cin >> num;
 
 switch (num) {
  
    case 1:
        std::cout << "31" << std::endl;
        break;
    case 2:
        std::cout << "30" << std::endl;
        break;
    case 3:
        std::cout << "31" << std::endl;
        break;
    case 4:
        std::cout << "30" << std::endl;
        break;
    case 5:
        std::cout << "31" << std::endl;
        break;
    case 6:
        std::cout << "30" << std::endl;
        break;
    case 7:
        std::cout << "31" << std::endl;
        break;
    case 8:
        std::cout << "31" << std::endl;
        break;
    case 9:
        std::cout << "30" << std::endl;
        break;
    case 10:
        std::cout << "31" << std::endl;
        break;
    case 11:
        std::cout << "30" << std::endl;
        break;
    case 12:
        std::cout << "31" << std::endl;
        break;
        
 default:
            std::cout <<"ERROR" << std::endl;
 }
    
}

void t_6(){
    
 char letter;
 
 std::cout << "Enter letter: ";
 std::cin >> letter;
 
 switch (letter) {
     
        case 'A':
             std::cout << "Austria, Angola, Andora" << std::endl;
             break;
        case 'B':
             std::cout << "Bangladesh, Barbados, Bahrein" << std::endl;
             break;
        case 'L':
             std::cout << "Laos, Livan, Litva" << std::endl;
             break;
        case 'T':
             std::cout << "Tailand, Togo, Tonga" << std::endl;
             break;
        default:
            std::cout <<"ERROR" << std::endl;
 }
}

void t_7(){
    
 int choise;

 std::cout << "Choose operation (1 - Start, 2 - Settings, 3 - Exit):  ";
 std::cin >> choise;
 
 
 switch (choise) {
     
        case 1:
              std::cout << "start" << std::endl;
              break;
        case 2:
              std::cout << "settings" << std::endl;
              break;
        case 3:
              std::cout << "exit" << std::endl;
              break;
              default:
            std::cout <<"ERROR" << std::endl;
  }   
}

void t_8(){
    
 int month;

 std::cout << "Enter number of month:  ";
 std::cin >> month;
 
 
 switch (month) {
     
        case 3:
              std::cout << "spring" << std::endl;
              break;
        case 4:
              std::cout << "spring" << std::endl;
              break;
        case 5:
              std::cout << "spring" << std::endl;
              break;
        case 6:
              std::cout << "summer" << std::endl;
              break;
        case 7:
              std::cout << "summer" << std::endl;
              break;
        case 8:
              std::cout << "summer" << std::endl;
              break;
        case 9:
              std::cout << "autumn" << std::endl;
              break;
        case 10:
              std::cout << "autumn" << std::endl;
              break;
        case 11:
              std::cout << "autumn" << std::endl;
              break;
        case 12:
              std::cout << "winter" << std::endl;
              break;
        case 1:
              std::cout << "winter" << std::endl;
              break;
        case 2:
              std::cout << "winter" << std::endl;
              break;
        default:
            std::cout <<"ERROR" << std::endl;
  }   
}

void t_9(){
    int color;
    std::cout << "Enter color: ";
    std::cin >> color;
    switch(color){
        case 1:
            std::cout << "red" << std::endl;
            break;
        case 2:
            std::cout << "orange" << std::endl;
            break;
        case 3:
            std::cout << "yellow" << std::endl;
            break;
        case 4:
            std::cout << "green" << std::endl;
            break;
        case 5:
            std::cout << "blue" << std::endl;
            break;
        case 6:
            std::cout << "indigo" << std::endl;
            break;
        case 7:
            std::cout << "pink" << std::endl;
            break;
        default: 
            std::cout << "ERROR!" << std::endl;
    }
}

int main(){
     t_1();
     t_2();
     t_3();
     t_4();
     t_5();
     t_6();
     t_7();
     t_8();
     t_9();
     t_10();
}
