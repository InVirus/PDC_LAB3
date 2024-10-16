#include <iostream>
#include "stirbell.h"
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int i = 6; 
    const int n = i + 5; 

    auto S = stirling_second_kind(n);

    cout << "Числа Стірлінга другого роду для n = " << n << ":\n";
    for (int j = 0; j <= n; ++j) {
        for (int k = 0; k <= j; ++k) {
            cout << S[j][k] << " ";
        }
        cout << endl;
    }

    auto B = bell_numbers(n);
    cout << endl;
    cout << "Числа Белла для n = " << n << ":\n";
    for (int j = 0; j <= n; ++j) {
        cout << B[j] << " ";
    }
    cout << endl;

    return 0;
}
