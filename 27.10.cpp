#include <iostream>
#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <io.h>
#include <fcntl.h>
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

    int number = 1;
    int number2 = 10;
    for (int i = 0; i < 10; i++){
        std::wcout<<number<< " ";

        ++number;
    }
    std::wcout<<std::endl;

    for (int a = 0; a < 10; a++){
        std::wcout<<number2<< " ";

        --number2;
    }

    std::wcout<<std::endl;
return 0;
}

