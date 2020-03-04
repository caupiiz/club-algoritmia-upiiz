#include <bits/stdc++.h>
/* Material asociado:
https://drive.google.com/open?id=1JQxqCd9mO3CWA4Fp_mFGZMZzvqVtS-M1
*/
using namespace std;

int negarNumero(int);
int comprobarBitEncendido(int, int);
int apagarBit(int, int);
int encenderBit(int, int);
void multiplicarDividirPor2(int);
int calcularDosALaN(int);

int main() {
    int n;
    cout << "Escribe un número entero: ";
    cin >> n;
    cout << "Negar número: " << negarNumero(n) << endl;
    cout << "Bit encendido: " << comprobarBitEncendido(n, 4) << endl;
    cout << "Bit apagado: " << apagarBit(n, 1) << endl;
    cout << "Bit encendido: " << encenderBit(n, 3) << endl;
    multiplicarDividirPor2(n);
    cout << "2 a la " << n << ": " << calcularDosALaN(n) << endl;
    return 0;
}

int negarNumero(int n) {
    return ~n;
}

int comprobarBitEncendido(int n, int delta) {
    return (1 << delta) & n;
}

int apagarBit(int n, int delta) {
    return (~(1 << delta)) & n;
}

int encenderBit(int n, int delta) {
    return (1 << delta) | n;
}

void multiplicarDividirPor2(int n) {
    cout << n << " * " << " 2 = " << (n << 1) << endl;
    cout << n << " / " << " 2 = " << (n >> 1) << endl;
}

int calcularDosALaN(int n) {
    return (1 << n);
}
