#include <bits/stdc++.h>
/*
    Autor: David Betancourt Montellano | @dbetm
    Fecha: 16/10/2018.
    Compilado con: g++ 2_MatrizPorEscalar.cpp -o 2
    Ejecutado con: ./2
*/
using namespace std;

int main(int argc, char const *argv[]) {
    int escalar;
    // Leemos el escalar
    cout << "Escalar: ";
    cin >> escalar;
    int m, n;
    // Leemos ambas medidas
    cout << "Escribe m: ";
    cin >> m;
    cout << "Escribe n: ";
    cin >> n;
    // Declaramos la matriz de m x n
    int A[m][n];
    // Leemos cada valor de la matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    // Multiplicamos cada posiciión de la matriz por el escalar
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] *= escalar;
        }
    }

    // Imprimimos la matriz resultado
    cout << "\n-----------" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    /* Nota. Para no tener que usar 3 pares de ciclos, es posible
    leer y multiplicar e imprimir en un solo par de ciclos:
        int aux;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> aux;
                A[i][j] = aux * escalar;
            }
            cout << endl;
        }
    */
    return 0;
}
