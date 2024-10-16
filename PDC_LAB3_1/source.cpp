#include "arrangement.h"

long long factorial(int x) {
    if (x == 0 || x == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= x; ++i) {
        result *= i;
    }
    return result;
}

long long arrangements(int n, int r) {
    long long nFactorial = factorial(n);
    long long n_rFactorial = factorial(n - r);
    return nFactorial / n_rFactorial;
}
