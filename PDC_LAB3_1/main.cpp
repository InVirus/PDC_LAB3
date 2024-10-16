#include <iostream>
#include "arrangement.h"
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 0;  
    int r = 0;  

    do {
        cout << "Введіть ціле додатнє число n (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "Помилка: n повинно бути цілим додатнім числом більше 0!" << endl;
        }
    } while (n <= 0);

    do {
        cout << "Введіть ціле додатнє число r (0 < r <= n): ";
        cin >> r;
        if (r <= 0 || r > n) {
            cout << "Помилка: r повинно бути цілим додатнім числом більше 0 та не більше ніж n!" << endl;
        }
    } while (r <= 0 || r > n);

    long long result = arrangements(n, r); 

    cout << endl;
    cout << " r     n!" << endl;
    cout << "A = ________" << endl;
    cout << " n  (n - r)!" << endl << endl;
    cout << "Для n = " << n << " і r = " << r << " кількість розміщень без повторень: " << result << endl;

    return 0;
}
