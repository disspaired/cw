#include <iostream>
using namespace std;

int main() {

    const int DATA_SIZE = 12;
    int data[DATA_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

    const int ACCESS_SIZE = 12;
    int accesses[ACCESS_SIZE] = { 0, 1, 2, 0, 3, 1, 4, 2, 5, 0, 6, 1 };

    const int CACHE_SIZE = 3;
    int cache[CACHE_SIZE];   
    int cache_count = 0;     

    int cache_hit = 0;    
    int cache_miss = 0;  

    for (int i = 0; i < CACHE_SIZE; i++) {
        cache[i] = -1;
    }

    cout << "Симуляция кэша FIFO (размер кэша: " << CACHE_SIZE << ")" << endl;

    for (int i = 0; i < ACCESS_SIZE; i++) {
        int addr = accesses[i]; 
        bool hit = false;

        for (int j = 0; j < cache_count; j++) {
            if (cache[j] == addr) {
                hit = true;
                break;
            }
        }

        if (hit) {
            cout << "Access " << addr << " -> HIT" << endl;
            cache_hit++;
        }
        else {
            cout << "Access " << addr << " -> MISS" << endl;
            cache_miss++;

            if (cache_count < CACHE_SIZE) {
                cache[cache_count] = addr;
                cache_count++;
            }
            else {
                for (int j = 0; j < CACHE_SIZE - 1; j++) {
                    cache[j] = cache[j + 1];
                }
                cache[CACHE_SIZE - 1] = addr;
            }
        }
    }
    cout << "\nTotal cache hits: " << cache_hit << endl;
    cout << "Total cache misses: " << cache_miss << endl;

    return 0;
}
