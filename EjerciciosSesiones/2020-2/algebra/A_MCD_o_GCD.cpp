#include <bits/stdc++.h>
// Programa para calcular el máximo común divisor de dos enteros (a y b).
// GCD - Greatest Common Divisor
/* Material asociado:
https://drive.google.com/open?id=1Xr_JMDYiGTmOBz9nxW-j9ZoEmJOWVyKPhYcvaaG1pKw
*/
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

/* Es posible usar la función "inbuilt" __gcd(int, int) que es parte de la
biblioteca estándar de C++.
ejemplo:

    g = __gcd(a, b);

*/
