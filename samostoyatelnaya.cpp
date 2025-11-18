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
    int a[10];
    int sum = 0;

    std::wcout <<L"Введите 10 чисел: ";
    for (int i = 0; i < 10; ++i) {
        std::wcin >> a[i];
        sum += a[i];
    }

    std::wcout<<L"Сумма = " << sum<< std::endl;


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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];
    int sum = 0;

    std::wcout<<L"Введите числа массива: ";

    for(int i = 0; i < n; ++i){
        std::wcin>>a[n];

        sum += a[n];
    }
    std::wcout<<L"Среднее арифметическое чисел: "<<sum / n<<std::endl;

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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    int count;

    std::wcout<<L"Введите числа массива: ";

    for(int i = 0; i < n; ++i){
        std::wcin>>a[n];

        if(a[n] == 0){
            ++count;
        }else{
            continue;
        }
    }
    std::wcout<<L"Всего "<<count<<L" нулей"<<std::endl;

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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    int count;

    std::wcout<<L"Введите числа массива: ";

    for(int i = 0; i < n; ++i){
        std::wcin>>a[n];
        
        if(a[n] < 0){
            ++count;
        }else{
            continue;
        }
    }
    std::wcout<<L"Всего "<<count<<L" нулей"<<std::endl;

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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    int min = 0;

    std::wcout<<L"Введите числа массива: ";
    std::wcin>>a[n];

    min = a[n];

    for(int i = 0; i < n - 1; ++i){
        std::wcin>>a[n];

        if(a[n] < min){
           min = a[n];
        } else {
            continue;
        }
    }
    std::wcout<<L"Наименьшее число: "<<min<<std::endl;

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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    int max = 0;

    std::wcout<<L"Введите числа массива: ";
    std::wcin>>a[n];

    max = a[n];

    for(int i = 0; i < n - 1; ++i){
        std::wcin>>a[n];

        if(a[n] > max){
           max = a[n];
        } else {
            continue;
        }
    }
    std::wcout<<L"Наибольшее число: "<<max<<std::endl;

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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    for(int i = 0; i < n; ++i){
    std::wcout<<L"Введите числа массива: ";
    std::wcin>>a[i];
    }

    for(int i = 0; i < n; ++i){
        std::wcout<< a[i] * 2<< " ";
    }


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
    int n;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    for(int i = 0; i < n; ++i){
    std::wcout<<L"Введите числа массива: ";
    std::wcin>>a[i];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] < 0){
            a[i] = 0;
        }else{
            std::wcout<<a[i]<<" ";
            continue;
        }
        std::wcout<<a[i]<<" ";
    }


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
    int n;
    int X = 23;

    std::wcout<<L"Введите количество чисел: ";
    std::wcin>>n;

    int a[n];

    for(int i = 0; i < n; ++i){
    std::wcout<<L"Введите числа массива: ";
    std::wcin>>a[i];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] == X){
            std::wcout<<L"Вы нашли скрытое число! Это "<<X<<"!";
        }else{
            continue;
        }
    }


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
    int n;

    std::wcout<<L"Введите размре массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        std::wcout<<L"Введите число: ";
        std::wcin >> a[i];
    }
    std::wcout <<L"Обратный порядок: ";
    for (int i = n - 1; i >= 0; i--){
        std::wcout << a[i] << " ";
}


    return 0;
}
