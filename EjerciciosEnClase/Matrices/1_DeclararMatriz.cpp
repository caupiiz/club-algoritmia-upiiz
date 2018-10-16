#include <bits/stdc++.h>
/*
    Autor: David Betancourt Montellano | @dbetm
    Fecha: 16/10/2018.
    Compilado con: g++ 1_DeclararMatriz.cpp -o 1
    Ejecutado con: ./1
*/
using namespace std;

int main(int argc, char const *argv[]) {
    // Declaramos n y m, para las dimensiones de la matriz
    int m, n;
    // Leemos ambas medidas
    cout << "Escribe m: ";
    cin >> m;
    cout << "Escribe n: ";
    cin >> n;
    // Declaramos la matriz de m x n
    int A[m][n];
    // La recorremos usando ciclos, y la llenamos con 1's
        // Filas
    for (int m_i = 0; m_i < m; m_i++) {
        // Ciclo anidado
        // Columnas
        for (int n_i = 0; n_i < n; n_i++) {
            A[m_i][n_i] = 1;
        }
    }
    // Ahora la mostramos
    for (int m_i = 0; m_i < m; m_i++) { // filas
        for (int n_i = 0; n_i < n; n_i++) { // columnas
            cout << A[m_i][n_i] << " ";
        }
        cout << endl; // Imprimimos un salto de línea
    }
    return 0;
}
