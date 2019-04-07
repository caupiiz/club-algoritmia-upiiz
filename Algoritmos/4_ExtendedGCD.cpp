#include <bits/stdc++.h>
/*
While the Euclidean algorithm calculates only the greatest common divisor (GCD)
of 2 integers a and b, the extended version also finds a way to represent GCD
in terms of a and b, i.e coefficients x and y for which:
    a*x + b*y = gcd(a,b)
*/
using namespace std;
// ...
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
