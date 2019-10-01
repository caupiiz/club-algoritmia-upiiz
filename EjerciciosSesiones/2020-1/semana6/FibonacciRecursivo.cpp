#include <iostream>

using namespace std;
// Prototipo
int fib(int n);

int main() {
    int n;
    cout << "Ingresa n: ";
    cin >> n;
    cout << "f_" << n << " es " << fib(n) << endl;
    // f_5 es 5
    return 0;
}

int fib(int n) {
    // Casos base
    if(n == 0) return 0;
    else if(n == 1) return 1;
    // Función de recurrencia
    return fib(n-1) + fib(n-2);
}
