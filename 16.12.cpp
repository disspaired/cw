#include <iostream>

using namespace std;

int main() {
    int I1_stage = 0; 
    int I2_stage = 0; 
    int I3_stage = 0; 

    const int PIPELINE_STAGES = 3;
    int cycle = 0;
    bool done = false;

    while (!done) {
        cycle++;
        done = true;
        cout << "Cycle " << cycle << ":\n";

        if (I1_stage < PIPELINE_STAGES) {
            done = false;
            cout << "  Stage " << I1_stage << ": I1 (IF)\n";
            I1_stage++;
        }

        if (I2_stage < PIPELINE_STAGES) {
            done = false;
            if (I1_stage < PIPELINE_STAGES) {
                cout << "  Stage " << I2_stage << ": I2 (waiting for I1)\n";
            }
            else {
                cout << "  Stage " << I2_stage << ": I2 (EX)\n";
                I2_stage++;
            }
        }

        if (I3_stage < PIPELINE_STAGES) {
            done = false;
            if (I2_stage < PIPELINE_STAGES) {
                cout << "  Stage " << I3_stage << ": I3 (waiting for I2)\n";
            }
            else {
                cout << "  Stage " << I3_stage << ": I3 (WB)\n";
                I3_stage++;
            }
        }

        cout << "-----------------\n";
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    const int CACHE_SIZE = 4;     // размер кэша

    int cache[CACHE_SIZE];        // упрощённый кэш
    int cache_count = 0;          // сколько элементов сейчас в кэше
    int cache_index = 0;          // для FIFO
    int cache_hit = 0, cache_miss = 0;

    // последовательность обращений к данным
    int accesses[] = { 1, 2, 1, 3, 2, 1 };

    int num_accesses = sizeof(accesses) / sizeof(accesses[0]);

    for (int i = 0; i < num_accesses; i++) {
        int value = accesses[i];
        bool hit = false;

        // проверяем, есть ли value в кэше
        for (int j = 0; j < cache_count; j++) {
            if (cache[j] == value) {
                hit = true;
                break;
            }
        }

        if (hit) {
            cache_hit++;
            cout << "Access " << value << " -> HIT\n";
        }
        else {
            cache_miss++;
            cout << "Access " << value << " -> MISS\n";

            // загружаем данные в кэш (FIFO)
            if (cache_count < CACHE_SIZE) {
                cache[cache_count++] = value;
            }
            else {
                cache[cache_index] = value;
                cache_index = (cache_index + 1) % CACHE_SIZE;
            }
        }
    }

    cout << "\nTotal cache hits: " << cache_hit << endl;
    cout << "Total cache misses: " << cache_miss << endl;

    return 0;
}



#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void partial_sum(long long* arr, int start, int end, long long& result) {
    long long s = 0;
    for (int i = start; i < end; i++) {
        s += arr[i];
    }
    result = s;
}

int main() {
    const int N = 1000000;
    long long* arr = new long long[N];

    for (int i = 0; i < N; i++)
        arr[i] = 1;

   
    auto t1 = chrono::high_resolution_clock::now();

    long long sum1 = 0;
    for (int i = 0; i < N; i++)
        sum1 += arr[i];

    auto t2 = chrono::high_resolution_clock::now();
    cout << "Single-thread sum = " << sum1
        << ", time = " << chrono::duration<double>(t2 - t1).count() << " sec" << endl;


    auto t3 = chrono::high_resolution_clock::now();

    long long sum_left = 0;
    long long sum_right = 0;

    thread th1(partial_sum, arr, 0, N / 2, std::ref(sum_left));
    thread th2(partial_sum, arr, N / 2, N, std::ref(sum_right));

    th1.join();
    th2.join();

    long long sum2 = sum_left + sum_right;

    auto t4 = chrono::high_resolution_clock::now();
    cout << "Two-thread sum = " << sum2
        << ", time = " << chrono::duration<double>(t4 - t3).count() << " sec" << endl;

    delete[] arr;
}


#include <iostream>

using namespace std;

int main() {
    const char trace[] = { 'T','N','T','T', 'N'};
    const int N = sizeof(trace) / sizeof(trace[0]);

    int predictor = 1; 
    int correct = 0;
    int incorrect = 0;

    for (int i = 0; i < N; i++) {
        char actual = trace[i];         
        char predicted = (predictor ? 'T' : 'N');  

        cout << "Step " << i + 1 << ": predicted = "
            << predicted << ", actual = " << actual;

        if (predicted == actual) {
            correct++;
            cout << "  (OK)";
        }
        else {
            incorrect++;
            cout << "  (MISS)";
            predictor = 1 - predictor;
        }

        cout << ", next predictor state = " << predictor << endl;
    }

    cout << "\nTotal correct = " << correct << endl;
    cout << "Total incorrect = " << incorrect << endl;

    return 0;
}
