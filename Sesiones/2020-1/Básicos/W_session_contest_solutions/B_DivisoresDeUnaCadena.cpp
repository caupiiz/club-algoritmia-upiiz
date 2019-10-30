#include <iostream>
#include <cstring>
#include <algorithm>
// https://omegaup.com/arena/problem/Divisores-de-una-cadena/#problems
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string cadena;
    int cont = 0, suma = 0;
    cin >> cadena;
    // Convertir cada caracter a mayúscula
    transform(cadena.begin(), cadena.end(), cadena.begin(), ::toupper);
    // Calcular la suma acumulada
    for (unsigned int i = 0; i < cadena.size(); i++) suma += (int)cadena[i];
    // Buscar los divisores y contarlos
    for (int i = 1; i <= suma; i++) {
        if(suma % i == 0) cont++;
    }

    cout << cont << endl;

    return 0;
}
