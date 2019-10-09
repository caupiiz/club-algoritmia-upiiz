/* C/C++ program for Memoized version for nth Fibonacci number */
// Source: Geeks for geeks

#include <cstdio>
#include <iostream>
#include <cstdlib>
#define NIL -1;
#define MAX 100

using namespace std;

int lookupTable[MAX];

void _initialize() {
    for (int i = 0; i < MAX; i++) {
        lookupTable[i] = NIL;
    }
}

// Function for n-th Fibonacci number
int fib(int n) {
    if(lookupTable[n] == -1) {
        if(n <= 1) lookupTable[n] = n;
        else lookupTable[n] = fib(n-1) + fib(n-2);
    }
    return lookupTable[n];
}

int main(int argc, char const *argv[]) {
    int n;
    cout << "Type n: ";
    cin >> n;
    _initialize();
    printf("Fibonacci number is %d\n", fib(n));
    return 0;
}
