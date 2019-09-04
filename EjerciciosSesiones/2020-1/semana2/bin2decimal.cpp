// Bibliotecas
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el número de dígitos";
    cin >> n;
    // Declarar el arreglo
    int numBinario[n];
    // Leer el número en binario
    for(int i = 0; i < n; i++) {
        cin >> numBinario[i];
    }
    // Recorrerlo, y en cada iteración sumar
    int suma = 0;
    for(int i = n-1, j = 0; i >= 0; i--, j++) {
        suma = suma + (numBinario[i] * pow(2, j));
    }
    // Mostrar suma
    cout << suma << endl;
    return 0;
}
