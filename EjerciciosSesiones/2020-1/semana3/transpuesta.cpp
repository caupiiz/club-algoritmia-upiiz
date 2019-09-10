#include <iostream>
/*
Compilado con: g++ transpuesta.cpp -o transpuesta
Ejecutado con: ./transpuesta
Sistema operativo: GNU/Linux Ubuntu 18.04 LTS
*/
using namespace std;

int main() {
    int n = 3; // tamaño
    // Declarar
    int matriz[n][n];
    // Leer cada valor
    cout << "Escribe los valores de la matriz" << endl;
    for(int i = 0; i < n; i++) {        // filas
        for (int j = 0; j < n; j++) {   // columnas
            cout << "[" << i << "][" << j << "] ";
            cin >> matriz[i][j];
        }
    }
    // Mostrar la matriz original
    for(int i = 0; i < n; i++) {        // filas
        for (int j = 0; j < n; j++) {   // columnas
            // triangular superior/inferior
            if(j >= i) cout << matriz[i][j] << " ";
            else cout << "  ";
            // cout << matriz[i][j] << " ";
        }
        cout << endl;
        // cout << "\n";
    }
    int res[n][n];
    // Transponer la matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = matriz[j][i];
        }
    }
    // Mostrar la matriz original
    for(int i = 0; i < n; i++) {        // filas
        for (int j = 0; j < n; j++) {   // columnas
            cout << res[i][j] << " ";
        }
        cout << endl;
        // cout << "\n";
    }

    return 0;
}
