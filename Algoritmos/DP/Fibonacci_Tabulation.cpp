#include <cstdio>
#include <iostream>
// Tabulation (bottom -> up) version
using namespace std;

int fib(int n) {
    int f[n+1];
    // base cases
    f[0] = 0;
    f[1] = 1;
    for (size_t i = 2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];

    return f[n];
}

int main(void) {
    int n;
    cout << "Type n: ";
    cin >> n;
    cout << "Fibonacci number is: " << fib(n) << endl;
    return 0;
}
