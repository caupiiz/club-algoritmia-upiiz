#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b) {
    return (b != 0 ? gcd(b, b % a) : a);
}
