#include <bits/stdc++.h>

using namespace std;

void ordenar(int arr[], int izq, int der);
void mezclar(int arr[], int izq, int mi, int der);
void mostrar(int arr[], int n);

int main() {
    int arr[] = {14,7,3,12,9,11,6,2};
    int n = sizeof(arr) / 4;
    cout << "Arreglo sin ordenar:" << endl;
    mostrar(arr, n);
    ordenar(arr, 0, n-1);
    cout << "Arreglo ordenado:" << endl;
    mostrar(arr, n);
    return 0;
}

void ordenar(int arr[], int izq, int der) {
    if(izq < der) {
        // Dividir
        int mi = (izq + der) / 2;
        // Vencer
        ordenar(arr, izq, mi); // primer mitad
        ordenar(arr, mi+1, der); // segunda mitad
        // Combinar
        mezclar(arr, izq, mi, der);
    }
}

void mezclar(int arr[], int izq, int mi, int der) {
    // Copiar en dos arreglos (colas) temporales cada mitad
    queue <int> mitad1, mitad2;
    // Copiamos el primer subarreglo
    for (int i = izq; i <= mi; i++) mitad1.push(arr[i]);
    // Copiamos el segundo subarreglo
    for (int i = mi+1; i <= der; i++) mitad2.push(arr[i]);

    // Se va insertando de nuevo en el arreglo, con orden por favor.
    int veces = der - izq + 1;
    int pos = izq;
    while(veces--) {
        if(mitad1.empty()) {
            // sacar de la mitad 2
            arr[pos] = mitad2.front();
            mitad2.pop();
        }
        else if(mitad2.empty()) {
            // sacar de la mitad 1
            arr[pos] = mitad1.front();
            mitad1.pop();
        }
        else {
            if(mitad1.front() <= mitad2.front()){
                arr[pos] = mitad1.front();
                mitad1.pop();
            }
            else {
                arr[pos] = mitad2.front();
                mitad2.pop();
            }
        }
        pos++;
    }
}

void mostrar(int arr[], int n) {
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
