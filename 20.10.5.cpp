#include <iostream>
#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <io.h>
#include <fcntl.h>
#include <string>
#endif
int main(){
#ifdef _WIN32
    setlocale(LC_ALL, "");
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
#else
    std::ios_base::sync_with_studio(false);
    std::wcout.imbue(std::locale("en_US.UTF-8"));
    std::wcin.imbue(std::locate("en_US.UTF-8"));
#endif

    int a;
    int count = 0;
    int number;
    int number_old = 0;

    std::wcout << L"Введите количество чисел: ";
    std::wcin >> a;

    while (count < a){
        std::wcout << L"Введите число: ";
        std::wcin >> number;

        if (number < number_old || count == 0){
            std::wcout << number << std::endl;
        }
        number_old = number;
        
        ++count;
    }
        return 0;
    }

