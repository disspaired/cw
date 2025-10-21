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
    int n;

    std::wcout << L"Введите количество чисел: ";
    std::wcin >> n;

    if (n == 1){
        std::wcout << L"Всего одно число? Серьезно? " << std::endl;
        return 0;
    }
    if (n < 1){
        std::wcout << L"Количество чисел дожно быть положительным." << std::endl;
        return 0;
    }

    int previous, current;
    bool isOrdered = true;
    bool allEqual = true;
    int count = 1;

    std::wcout << L"Введите число "<< count << ": ";
    std::wcin >> previous;

    while (count < n) {
        std::wcout << L"Введите число " << count + 1 << ": ";
        std::wcin >> current;

        if (current < previous){
            isOrdered = false;
        }

        allEqual = allEqual && (current == previous);

        // if (current != previous){
        //     allEqual = false;
        // }

        previous = current;
        count++;
    }

    if (isOrdered && !allEqual) {
        std::wcout << L"Числа упорядочены по возрастанию! " << std::endl;
    } else {
        std::wcout << L"Числа не упорядочены по возрастанию! " << std::endl;
    }

    return 0;
}

