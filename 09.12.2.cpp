#include <iostream>
using namespace std;

int main() {
    const char trace[] = { 'T','N','T','T','N','N','T','N','T'};
    const int N = sizeof(trace) / sizeof(trace[0]);

    int predictor = 1; 
    int correct = 0;
    int incorrect = 0;

    for (int i = 0; i < N; i++) {
        char actual = trace[i];         
        char predicted = (predictor ? 'T' : 'N');  

        cout << "Step " << i + 1 << ": predicted = "
            << predicted << ", actual = " << 'T';

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


#include <iostream>
using namespace std;

int main() {
    const char trace[] = { 'T','N','T','T','N','N','T','N','T'};
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

когда ветвления выполняются последовательно в одном и том же направлении
потому что у него нет памяти или уверенности в предскозании
она не используется как единственная стратегия для всех ветвлений, потому что многие ветвления в реальном коде (например, if-else условия, обработка ошибок) чаще не выполняются (Not Taken)
Предсказатели ветвлений критически важны для современных процессоров, использующих конвейерную обработку инструкций и спекулятивное исполнение.
