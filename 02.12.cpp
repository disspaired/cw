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
    int I1_stage = 0; 
    int I2_stage = 0; 
    int I3_stage = 0; 
    
    const int PIPELINE_STAGES = 5;
    int cycle = 0;
    bool done = false;
    
    while (!done) {
        cycle++;
        done = true;
        std::wcout << "Cycle " << cycle << ":\n";
        
        if (I1_stage < PIPELINE_STAGES) {
            done = false;
            std::wcout << "  Stage " << I1_stage << ": I1 (X=A+B)\n";
            I1_stage++;
        }
        
        if (I2_stage < PIPELINE_STAGES) {
            done = false;
            if (I1_stage < PIPELINE_STAGES) {
                std::wcout << "  Stage " << I2_stage << ": I2 (waiting for I1)\n";
            } else {
                std::wcout << "  Stage " << I2_stage << ": I2 (Y=X*2)\n";
                I2_stage++;
            }
        }
        
        if (I3_stage < PIPELINE_STAGES) {
            done = false;
            if (I2_stage < PIPELINE_STAGES) {
                std::wcout << "  Stage " << I3_stage << ": I3 (waiting for I2)\n";
            } else {
                std::wcout << "  Stage " << I3_stage << ": I3 (Z=Y-3)\n";
                I3_stage++;
            }
        }
        
        std::wcout << "-----------------\n";
    }
    
    
    return 0;
}
