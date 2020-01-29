#include <bits/stdc++.h>

using namespace std;

/*
Problema a resolver:
Sumar los valores al arreglo en función de un conjunto de intervalos.
*/

int main() {
    int n, m, inicio, fin, valor;
    cout << "Escribe n: ";
    cin >> n;
    // En la segunda columna de la matriz se calcularán los "cambios".
    // En la primer columa de la matriz se almacenan los valores.
    int arr[n+1][2];
    cout << "Escribe los valores separados por un espacio: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0];
        // el cambio del valor se inicializa en 0
        arr[i][1] = 0;
    }
    cout << "Escribe el número de intervalos: ";
    cin >> m;
    // Leemos los intervalos: inicio, fin, cambio
    // Algoritmo en línea:
    // En línea se refiere a que se procesa mientras se leen datos
    while(m--) {
        cin >> inicio >> fin >> valor;
        arr[inicio][1] += valor;
        arr[fin+1][1] -= valor;
    }

    // Mostramos el resultado, para ellos usamos una variable delta, que nos
    // ayude a saber cuánto ir sumando o restando por cada posición.
    int delta = 0;
    for (int i = 0; i < n; i++) {
        delta += arr[i][1];
        // mostramos el valor
        cout << (arr[i][0] + delta) << " ";
    }
    cout << endl;

    return 0;
}
