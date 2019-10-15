#include <bits/stdc++.h>
// Algoritmo de ordenamiento por selección
// Usando funciones

// Orden: Numérico ascendente
using namespace std;

int minIndex(int init, int arr[], int n) {
    int hip = arr[init];
    int ans = init;
    for (int i = init+1; i < n; i++) {
        if(hip > arr[i]) {
            hip = arr[i];
            ans = i;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int min = minIndex(i, arr, n);
        // Intercambio
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
