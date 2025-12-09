#include <iostream>
#include <thread>
#include <chrono> 
#include <numeric> 

using namespace std;
using namespace std::chrono;

const int n = 8000000;
int arr[n];

long long partial_sum(int start, int end) {
    long long s = 0;
    for (int i = start; i < end; i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    auto init_start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }

    long long sum1;

    auto thread_start = high_resolution_clock::now();

    thread t1([&]() { sum1 = partial_sum(0, n); });
    t1.join();

    auto thread_end = high_resolution_clock::now();
    duration<double, milli> thread_duration = thread_end - thread_start;


    cout << "Total = " << sum1 << endl;
    cout << "Time =  " << thread_duration.count() << " ms" << endl;

    return 0;
}


#include <iostream>
#include <thread>
#include <chrono> 
#include <numeric> 

using namespace std;
using namespace std::chrono;

const int n = 8000000;
int arr[n];

long long partial_sum(int start, int end) {
    long long s = 0;
    for (int i = start; i < end; i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    auto init_start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }

    long long sum1, sum2;

    auto thread_start = high_resolution_clock::now();

    thread t1([&]() { sum1 = partial_sum(0, n/2); });
    thread t2([&]() { sum2 = partial_sum(n/2, n); });
    t1.join();
    t2.join();

    auto thread_end = high_resolution_clock::now();
    duration<double, milli> thread_duration = thread_end - thread_start;


    cout << "Total = " << sum1 + sum2 << endl;
    cout << "Time =  " << thread_duration.count() << " ms" << endl;

    return 0;
}

#include <iostream>
#include <thread>
#include <chrono> 
#include <numeric> 

using namespace std;
using namespace std::chrono;

const int n = 8000000;
int arr[n];

long long partial_sum(int start, int end) {
    long long s = 0;
    for (int i = start; i < end; i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    auto init_start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }

    long long sum1, sum2;

    auto thread_start = high_resolution_clock::now();

    thread t1([&]() { sum1 = partial_sum(0, n/2); });
    thread t2([&]() { sum2 = partial_sum(n/2, n); });
    t1.join();
    t2.join();

    auto thread_end = high_resolution_clock::now();
    duration<double, milli> thread_duration = thread_end - thread_start;


    cout << "Total = " << sum1 + sum2 << endl;
    cout << "Time =  " << thread_duration.count() << " ms" << endl;

    return 0;
}

ускорение было
Много задач
MIMD
