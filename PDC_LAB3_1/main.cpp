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
        cout << "������ ���� ������ ����� n (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "�������: n ������� ���� ����� ������� ������ ����� 0!" << endl;
        }
    } while (n <= 0);

    do {
        cout << "������ ���� ������ ����� r (0 < r <= n): ";
        cin >> r;
        if (r <= 0 || r > n) {
            cout << "�������: r ������� ���� ����� ������� ������ ����� 0 �� �� ����� �� n!" << endl;
        }
    } while (r <= 0 || r > n);

    long long result = arrangements(n, r); 

    cout << endl;
    cout << " r     n!" << endl;
    cout << "A = ________" << endl;
    cout << " n  (n - r)!" << endl << endl;
    cout << "��� n = " << n << " � r = " << r << " ������� �������� ��� ���������: " << result << endl;

    return 0;
}
