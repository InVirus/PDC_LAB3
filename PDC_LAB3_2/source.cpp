#include "stirbell.h"
#include <vector>
using namespace std;

vector<vector<int>> stirling_second_kind(int n) {
    vector<vector<int>> S(n + 1, vector<int>(n + 1, 0));
    S[0][0] = 1; 

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            S[i][j] = j * S[i - 1][j] + S[i - 1][j - 1];
        }
    }

    return S;
}

vector<int> bell_numbers(int n) {
    vector<vector<int>> S = stirling_second_kind(n);
    vector<int> B(n + 1, 0);

    
    for (int i = 0; i <= n; ++i) {
        for (int k = 0; k <= i; ++k) {
            B[i] += S[i][k]; 
        }
    }

    return B;
}
