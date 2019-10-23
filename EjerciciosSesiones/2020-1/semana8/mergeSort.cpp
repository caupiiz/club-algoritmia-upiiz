#include <bits/stdc++.h>

using namespace std;
// Prototipos de funciones
void mostrar(int arr[], int n);
void ordenar(int arr[], int izq, int der);
void mezclar(int arr[], int izq, int mitad, int der);

int main() {
    int arr[] = {3, 7, 12, 14, 2, 6, 9, 11};
    int n = sizeof(arr) / 4;
    cout << "Arreglo sin ordenar: " << endl;
    mostrar(arr, n);
    ordenar(arr, 0, n-1);
    cout << "Arreglo ordenado: " << endl;
    mostrar(arr, n);
    return 0;
}

void mostrar(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenar(int arr[], int izq, int der) {
    if(izq < der) {
        int mitad = (izq + der) / 2; // dividir
        // vencer mitad1
        ordenar(arr, izq, mitad);
        // vencer mitad2
        ordenar(arr, mitad+1, der);
        // mezclar, conquistar
        mezclar(arr, izq, mitad, der);
    }
}

void mezclar(int arr[], int izq, int mitad, int der) {
    // definir dos colas temporales
    queue<int> mitad1, mitad2;
    // Copiar los elementos de las mitades en las colas
    for (int i = izq; i <= mitad; i++) {
        mitad1.push(arr[i]);
    }
    for (int i = mitad+1; i <= der; i++) {
        mitad2.push(arr[i]);
    }
    int pos = izq;
    int veces = der - izq + 1;
    // [0..3], 3 - 0 = 3 + 1
    while(veces--) {
        if(mitad1.empty()) { // primer cola vacía.
            arr[pos] = mitad2.front();
            mitad2.pop(); // eliminar el frente.
        }
        else if(mitad2.empty()) { // segunda cola vacía.
            arr[pos] = mitad1.front();
            mitad1.pop(); // eliminar el frente.
        }
        else { // Niguna vacía
            if(mitad1.front() <= mitad2.front()) {
                arr[pos] = mitad1.front();
                mitad1.pop(); // eliminar el frente
            }
            else {
                arr[pos] = mitad2.front();
                mitad2.pop(); // eliminar el frente
            }
        }
        pos++;
    }
}
