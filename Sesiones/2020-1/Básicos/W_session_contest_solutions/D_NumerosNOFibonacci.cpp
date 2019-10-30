#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/nofib/#problems
using namespace std;
// Solución usando una tabla hash
int main() {
    // Faster I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int tabla[n] = {};

    int A[n+1];
    A[0] = 0;
    A[1] = 1;
    tabla[0] = 1;
    tabla[1] = 1;
    int i;
    for (i = 2; i <= n; i++) {
        A[i] = A[i-1] + A[i-2];
        if(A[i] >= n) break;
        tabla[A[i]] = 1;
    }

    for (int j = 2; j < n; j++) {
        if(tabla[j] == 0) cout << j << " ";
    }
    cout << endl;
    return 0;
}
