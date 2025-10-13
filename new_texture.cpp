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
    std::wcout <<L"Добро пожалвать в с++" << std::endl;
    std::wcout <<L"мне лень эт писать" << std::endl;

    return 0;
}
