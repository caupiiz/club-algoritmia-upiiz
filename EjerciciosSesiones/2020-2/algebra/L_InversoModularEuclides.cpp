#include <bits/stdc++.h>
// Programa para calcular el inverso modular multiplicativo
/* Material asociado:
https://drive.google.com/open?id=1BArQTdM3KfjnUav2eAcSAaP5oIotAiVG__VWL_lw00s
*/
using namespace std;

int extendedGCD(int a, int b, int &x, int &y);

int main() {
    int x, y, a, m;
    cout << "Escribe a y m, de la eq. ax mod m = 1 mod m" << endl;
    cin >> a >> m;
    int g = extendedGCD(a, m, x, y);

    if (g != 1) {
        cout << "No solution!";
    }
    else {
        x = (x % m + m) % m;
        cout << x << endl;
    }

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
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
