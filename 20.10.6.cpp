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
    
    wchar_t ch;
    int n;
    
    std::wcout << L"Введите символ: ";
    std::wcin >> ch;
    
    std::wcout << L"Введите количество строк: ";
    std::wcin >> n;
    
    int i = 0;
    while (i < n){
        int j = i + 1;
        while (j > 0){
            std::wcout << ch;
            --j;
        }
        std::wcout << std::endl;
        i++;
    }
    return 0;
}

