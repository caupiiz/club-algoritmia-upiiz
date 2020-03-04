#include <bits/stdc++.h>
// Programa para convertir un entero a código Gray
/* Material asociado:
https://drive.google.com/open?id=1JQxqCd9mO3CWA4Fp_mFGZMZzvqVtS-M1
*/
using namespace std;

int main() {
    unsigned long long n, m;
    cin >> n;
    m = n >> 1;
    cout << (n^m) << endl;
    return 0;
}
