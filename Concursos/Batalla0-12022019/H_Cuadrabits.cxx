#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Quadrabits#problems
using namespace std;
// Por dbetm
long convertirADecimal(string bin);

int main() {
    string quadrado;
    int n, o, k;
    // Leer el número en binario
    cin >> quadrado;
    // Lo convertimos a un entero base 10
    long quadradoB10 = convertirADecimal(quadrado);
    // Leer el número de operaciones
    cin >> n;
    // Leemos todas las operaciones y se realizan sobre el número
    for (int i = 0; i < n; i++) {
        cin >> o; // para saber si se recorre a la izq o derecha
        cin >> k;  // cuántos quadrabits se debe recorrer
        if(o == 1) // a la derecha
            quadradoB10 >>= k; // se hace el corrimiento
        else // a la izquierda
            quadradoB10 <<= k; // se hace el corrimiento
    }
    cout << quadradoB10 << endl;
    return 0;
}

long convertirADecimal(string bin) {
    long num = 0;
    for (int i = bin.size()-1, j = 0; i >= 0; i--, j++) {
        if(bin[i] == '1') num += pow(2, j);
    }
    return num;
}
