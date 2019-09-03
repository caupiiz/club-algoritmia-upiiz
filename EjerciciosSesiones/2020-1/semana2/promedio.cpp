#include <iostream>

using namespace std;
// Programa para promediar 5 calificaciones
/*
Pasos:
1) Leer y guardar las calificaciones
2) Sumarlas
3) Promediamos (dividir suma entre 5)
4) Mostramos el promedio
*/
int main() {
    // 1) Leer y guardar
    int tamanio = 5;
    int calificaciones[tamanio];
    for(int i = 0; i < tamanio; i++) {
        cout << "Escribe calificación: ";
        cin >> calificaciones[i]; // guardar
    }
    // 2) Sumarlas
    double suma = 0;
    for(int i = 0; i < tamanio; i++) {
        suma = suma + calificaciones[i];
    }
    // 3) Promediar
    double resultado = suma / tamanio;
    // 4) Mostrar resultado
    cout << "Resultado es: " << resultado << endl;

    return 0;
}
