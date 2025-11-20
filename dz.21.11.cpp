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
    int sum = 0;
    
    std::wcout<<L"Введите начальное число:";
    std::wcin>>a;
    
    for(int i = a; i <= 500; i++){
        sum += i;
    }
    
    std::wcout<<sum<<std::endl;
    
    return 0;
}



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
    
    int x;
    int y;
    int sum = 1;
    
    std::wcout<<L"Введите число: ";
    std::wcin>>x;
    
    std::wcout<<L"Введите степень: ";
    std::wcin>>y;
    
    for(int i = 0; i < y; ++i){
        sum *= x;
    }
    
    std::wcout<<sum<<std::endl;
    return 0;
}



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
    int sum = 0;

    for(int i = 1; i <= 1000; ++i){
        sum += i;
    }

    int arf;

    arf = sum / 1000;

    std::wcout<<arf<<std::endl;

    return 0;
}



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
    int sum = 1;
    
    std::wcout<<L"Введите число: ";
    std::wcin>>a;
    
    
    for(int i = a; i <= 20; ++i){
        sum *= i;
    }
    
    std::wcout<<sum<<std::endl;
    return 0;
}



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
    
    std::wcout<<L"Введите число: ";
    std::wcin>>a;
    
    
    for(int i = 1; i <= 10; ++i){
        std::wcout<<a<<'*'<<i<<'='<<a * i<<std::endl;
    }
    
    std::wcout<<std::endl;
    return 0;
}

