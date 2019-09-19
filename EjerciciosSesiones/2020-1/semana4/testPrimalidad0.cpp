#include <iostream>

using namespace std;
bool probarPrimalidad(int n);

int main() {
    int t; // Número de casos
    int n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n; // leer el número
        if(probarPrimalidad(n) == true) {
            cout << "Sí, es primo" << endl;
        }
        else {
            cout << "No es primo" << endl;
        }
    }
    return 0;
}

bool probarPrimalidad(int n) {
    bool bandera = true;

    for (int i = 2; i < n; i++) {
        if(n % i == 0) {
            bandera = false;
            break;
        }
    }
    /*
    5 / 2
    5 / 3
    */
    return bandera;
}
