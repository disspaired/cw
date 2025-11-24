#include <iostream>
#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <io.h>
#include <fcntl.h>
#endif
int main() {
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

    std::wcout << L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        std::wcout << L"Введите число: ";
        std::wcin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::wcout << a[i] << " ";
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
int main() {
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

    std::wcout << L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        std::wcout << L"Введите число: ";
        std::wcin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::wcout << a[i] << " ";
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
int main() {
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
    int count = 0;

    std::wcout << L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        std::wcout << L"Введите число: ";
        std::wcin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                count++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::wcout << a[i] << " ";
    }
    std::wcout<<std::endl;
    std::wcout<<count<<std::endl;

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
int main() {
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
    
    bool swap = true;
    
    std::wcout << L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        std::wcout << L"Введите число: ";
        std::wcin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }if(swap == false){
            break;
        }else{
            continue;
        }
    }

    for (int i = 0; i < n; i++) {
        std::wcout << a[i] << " ";
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
int main() {
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

    std::wcout<<L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        std::wcout<<L"Введите число: ";
        std::wcin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[maxIndex]) maxIndex = j;
        }
        std::swap(a[i], a[maxIndex]);
    }

    for(int i = 0; i < n; ++i){
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
int main() {
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

    int count = 0;

    std::wcout<<L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        std::wcout<<L"Введите число: ";
        std::wcin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[maxIndex]) maxIndex = j;
        }
        std::swap(a[i], a[maxIndex]);
        count++;
    }

    for(int i = 0; i < n; ++i){
        std::wcout<<a[i]<<" ";
    }
    std::wcout<<std::endl;
    std::wcout<<count<<std::endl;
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
int main() {
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

    std::wcout<<L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        std::wcout<<L"Введите число: ";
        std::wcin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) minIndex = j;
        }
        std::swap(a[i], a[minIndex]);
        std::wcout<<minIndex<<" ";
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
int main() {
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
    std::wcout<<L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        std::wcout<<L"введите число: ";
        std::wcin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }

    for (int i = 0; i < n; i++){
        std::wcout << a[i] << " ";
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
int main() {
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
    int count = 0;

    std::wcout<<L"Введите размер массива: ";
    std::wcin >> n;

    int a[n];

    for (int i = 0; i < n; i++){
        std::wcout<<L"введите число: ";
        std::wcin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
        count++;
    }

    for (int i = 0; i < n; i++){
        std::wcout << a[i] << " ";
    }

    std::wcout<<std::endl;
    std::wcout<<count<<std::endl;
    return 0;
}

