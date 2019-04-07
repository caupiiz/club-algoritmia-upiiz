#include <bits/stdc++.h>

using namespace std;

long greatestCommonDivisor(long a, long b) {
    return b ? greatestCommonDivisor(b, a % b) : a;
}

// ...
long lcm(long a, long b) {
    return (a * b) / greatestCommonDivisor(a, b);
}

int main(int argc, char const *argv[]) {
    long a, b;
    cout << "Type a and b: ";
    cin >> a >> b;
    cout << "The least common multiple is: " << lcm(a, b) << endl;
    return 0;
}
// ...
