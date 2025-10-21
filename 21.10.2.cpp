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
    int n, v, k;

    std::wcout << L"Количество дней воздержания: ";
    std::wcin >> n;

    std::wcout << L"Количество горстей меда, добавляемых ежедневно: ";
    std::wcin >> v;

    std::wcout << L"Количество меда, съеденого на второй день: ";
    std::wcin >> k;

    int total_hon = 0;
    int current_day = 1;
    int eaten_today = 0;
    bool empty_plot = false;

    while (current_day <= v){
        if (current_day == 1){
            total_hon += v;
        } else {
            eaten_today = k * (current_day - 1);

            if (eaten_today >= v){
                empty_plot = true;
            } else {
                total_hon += (v - eaten_today);
            }
        }
        current_day++;
    }
    std::wcout << L"Винни смог запасти только " << total_hon << L" горстей меда и ";

    if(empty_plot) {
        std::wcout << L"приходил к кролику с пустым горшочком." << std::endl;
    } else {
        std::wcout << L"не приходил к кролику с пустым горшочком." << std::endl;
    }


    return 0;
}

