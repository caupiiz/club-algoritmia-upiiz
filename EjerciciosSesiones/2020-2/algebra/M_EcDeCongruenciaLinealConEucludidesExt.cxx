#include <bits/stdc++.h>
/* Resuelve la ecuación de congruencia lineal ax ≡ b (mod n) al encontra x dados
a, b y n
Material asociado:
https://drive.google.com/open?id=1vrO5SWVHMzEjSqlQhFA2X56htIyuA3QHWkQGt8HNDts
*/
using namespace std;

int extendedGCD(int a, int b, int &x, int &k);
bool findAnySolution(int a, int b, int c, int &x0, int &k0, int &g);

int main() {
    /* La ecuación original se reescribe como una ecuación diofántica lineal de
    2 variables: ax + nk = b, se resuelve ésta con el algo de Euclides extendido.
    */
    int a, n, b;
    int x, y, g;

    cout << "Type a, n y b:" << endl;
    cin >> a >> n >> b;

    if(findAnySolution(a, n, b, x, y, g)) {
        cout << "The given Diophantine equation solution(s): " << endl;
        cout << "x is: " << x << endl;
        cout << "ax ≡ b (mod n)" << endl;
        cout << a << "*" << x << " ≡ " << b << "(mod " << n << ")" << endl;
        cout << ((a*x) % n) << " = " << (b % n) << endl;
    }
    else cout << "It doesn't have any solution" << endl;

    return 0;
}

bool findAnySolution(int a, int n, int b, int &x0, int &k0, int &g) {
    g = extendedGCD(abs(a), abs(n), x0, k0);
    if(b % g) return false;

    x0 *= b/g;
    k0 *= b/g;
    if(a < 0) x0 = -x0;
    if(n < 0) k0 = -k0;
    return true;
}

int extendedGCD(int a, int n, int &x, int &k) {
    if(a == 0) {
        x = 0;
        k = 1;
        return n;
    }

    int x1, k1;
    int d = extendedGCD(n % a, a, x1, k1);
    x = k1 - (n/a) * x1;
    k = x1;
    return d;
}
