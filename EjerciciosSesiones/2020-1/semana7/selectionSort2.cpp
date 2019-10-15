#include <bits/stdc++.h>
// // Algoritmo de ordenamiento por selección
using namespace std;

int main() {
    int n;
    // Leemos el tamaño del arreglo
    cin >> n;
    int arr[n];
    // Leemos los valores del arreglo
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        // Buscamos el índice del valor mínimo en el subarreglo
        int hip = arr[i];
        int index = i;
        for (int j = i+1; j < n; j++) {
            if(arr[j] < hip) {
                hip = arr[j];
                index = j;
            }
        }
        // Hacemos el intercambio
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
    // Mostrar el conjunto ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
