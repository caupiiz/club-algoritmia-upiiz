#include <bits/stdc++.h>
#define ciclo for
using namespace std;
// Algoritmo de ordenamiento burbuja
// Con apuntadores
void ordenar(int *arr);
void mostrar(int *arr);

int main() {
    // 6, 5, 3, 1, 8, 7, 2, 4
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
    mostrar(arr);
    ordenar(arr);
    mostrar(arr);
    return 0;
}

void ordenar(int *arr) {
    int n = sizeof(arr);
    ciclo (int i = 0; i < n-1; i++) {
        ciclo (int j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]) {
                // intercambiar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void mostrar(int *arr) {
    int n = sizeof(arr);
    ciclo(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
