#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);
int mcm(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;

    cout << mcm(a, b) << endl;

    return 0;
}


int mcm(int a, int b) {
    return ((a * b) / gcd(a, b));
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
