#include <bits/stdc++.h>
using namespace std;
/*
Programa para sumar los dígitos de un número entero
*/
int main() {
    int n, suma = 0;
    cin >> n;

    while(n > 0) {
        suma += n % 10;
        n /= 10;
    }

    cout << suma << endl;

    return 0;
}
