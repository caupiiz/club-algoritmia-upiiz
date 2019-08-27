#include <bits/stdc++.h>
// https://www.hackerrank.com/challenges/find-point/problem
// Por David Betancourt Montellano
using namespace std;

int main(int argc, char const *argv[]) {
    unsigned int n;
    int px, py, qx, qy, rx, ry;
    cin >> n; // Número de casos
    for (size_t i = 0; i < n; i++) {
        // Se leen los puntos
        cin >> px >> py >> qx >> qy;
        // Calculamos rx
        rx = (qx - px) + qx;
        // Ahora ry
        ry = (qy - py) + qy;
        cout << rx << " " << ry << endl;
    }
    return 0;
}
