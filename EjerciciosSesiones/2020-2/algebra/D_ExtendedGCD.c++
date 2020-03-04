#include <bits/stdc++.h>
/*
While the Euclidean algorithm calculates only the greatest common divisor (GCD)
of 2 integers a and b, the extended version also finds a way to represent GCD
in terms of a and b, i.e coefficients x and y for which:
    a*x + b*y = gcd(a,b)
*/
// Ref: https://cp-algorithms.com/algebra/extended-euclid-algorithm.html
using namespace std;
/* How is Extended Algorithm Useful?
The extended Euclidean algorithm is particularly useful when a and b are coprime
(or gcd is 1). Since x is the modular multiplicative inverse of “a modulo b”,
and y is the modular multiplicative inverse of “b modulo a”. In particular,
the computation of the modular multiplicative inverse is an essential step in
RSA public-key encryption method.

The time complexity of Extended Euclid’s Algorithm is O(log(max(a, b))).
*/
int extendedGCD(int a, int b, int &x, int &y) {
    if(a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int d = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main() {
    int x, y;
    int a, b;
    cout << "Type a and b:" << endl;
    cin >> a >> b;
    cout << "GCD is: " << extendedGCD(a, b, x, y) << endl;
    cout << "X is: " << x << endl;
    cout << "Y is: " << y << endl;
    return 0;
}
