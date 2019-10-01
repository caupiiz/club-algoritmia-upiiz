#include <iostream>

using namespace std;
// Variables globales
int filas, columnas;

int matriz[101][101];
// Prototipos de funciones
void leer();
int buscarVecinos(int i, int j);

int main() {
    leer();
    int vecinos, familias = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if(matriz[i][j] == 1) {
                familias++;
                vecinos = buscarVecinos(i, j);
                cout << "La familia " << familias;
                cout << " tiene " << vecinos << " vecino(s)." << endl;
            }
        }
    }
    cout << "Hay " << familias << "familia(s)." << endl;
    return 0;
}

// Implementar las funciones
void leer() {
    cout << "Escribe el número de filas ";
    cin >> filas;
    cout << "Escribe el número de columnas ";
    cin >> columnas;
    cout << "Escribe los valores de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }
}
// Función recursiva y mágica
int buscarVecinos(int i, int j) {
    int vecinos = 0;
    if(matriz[i][j] == 0) vecinos += 0; // No tiene sentido
    else {
        matriz[i][j] = 0;
        vecinos++;
        // Explorar
        // Arriba
        if(i-1 >= 0 && matriz[i-1][j] == 1)
            vecinos += buscarVecinos(i-1, j);
        // Abajo
        if (i+1 < filas && matriz[i+1][j] == 1)
            vecinos += buscarVecinos(i+1, j);
    	// Izquierda
        if (j-1 >= 0 && matriz[i][j-1] == 1)
            vecinos += buscarVecinos (i, j-1);
        // Derecha
        if (j+1 < columnas && matriz[i][j+1] == 1)
            vecinos += buscarVecinos (i, j+1);
    }
    return vecinos;
}
