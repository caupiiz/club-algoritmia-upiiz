#include <bits/stdc++.h>

using namespace std;

long gcd(long a, long b) {
    return b ? gcd(b, a % b) : a;
}

int main(int argc, char const *argv[]) {
    long a, b;
    cout << "Escribe a y b: ";
    cin >> a >> b;
    cout << "El máximo común divisor es: " << gcd(a, b) << endl;
    return 0;
}
