#include <bits/stdc++.h>
/*
    Autor: David Betancourt Montellano | @dbetm
    Fecha: 16/10/2018.
    Compilado con: g++ 3_Suma.cxx -o 3
    Ejecutado con: ./3
*/
using namespace std;

int main(int argc, char const *argv[]) {
    // Programa que suma dos matrices de 3 * 3.

    // Se declaran ambas matrices
    int A[3][3], B[3][3];
    int R[3][3]; // Para guardar el resultado
    /* Representación gráfica de la matriz A
    A = [(0,0) (0,1) (0, 2)
        (1,0) (1,1) (1, 2)
        (2,0) (2,1) (2, 2)]
    */

    // Leemos los elementos de la matriz A
    cout << "A = " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nB = " << endl;
    // Leemos los elementos de la matriz B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Se suma posición a posición y se va mostrando el resultado
    cout << "\nResultado = " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            R[i][j] = A[i][j] + B[i][j];
            cout << R[i][j] << " ";
        }
        // Imprimos un salto de línea para que nos ayude a ver de mejor
        // forma el resultado en forma de matriz
        cout << endl;
    }

    return 0;
}
