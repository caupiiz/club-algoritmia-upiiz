#include <bits/stdc++.h>
// Program for solve Diofantic Linear Equation with 2 variables.
/* Associated material:
https://drive.google.com/open?id=1Xr_JMDYiGTmOBz9nxW-j9ZoEmJOWVyKPhYcvaaG1pKw
*/
using namespace std;

int extendedGCD(int, int, int &, int &);
bool findAnySolution(int, int, int, int &, int &, int &);

int main() {
    int a, b, c;
    int x, y, g; // They will find with extendedGCD
    cout << "Type a, b and c: ";
    cin >> a >> b >> c;
    if(findAnySolution(a, b, c, x, y, g)) {
        cout << "The given Diophantine equation has a solution: " << endl;
        cout << "x is: " << x << " and y is: " << y << endl;
    }
    else cout << "It does not have any solution" << endl;
    return 0;
}

int extendedGCD(int a, int b, int &x, int &y) {
    if(a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int d = extendedGCD(b % a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return d;
}

bool findAnySolution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = extendedGCD(abs(a), abs(b), x0, y0);
    if(c % g) return false;

    x0 *= c/g;
    y0 *= c/g;
    if(a < 0) x0 = -x0;
    if(b < 0) y0 = -y0;
    return true;
}
