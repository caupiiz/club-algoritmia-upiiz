#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while(b > 0) {
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    int x, n, m;
    cout << "Ingresa x, n y m: ";
    cin >> x >> n >> m;
    cout << "\nEl resultado es: " << binpow(x, n, m) << endl;
    return 0;
}
