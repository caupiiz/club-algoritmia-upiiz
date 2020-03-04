#include <bits/stdc++.h>
/*
Un test de primalidad es generar un arreglo hasta cierto número, guardando un
valor donde hay un número compuesto, las posiciones del arreglo donde no hay
ese valor (o "marca") es un primo, a este test de primalidad se le llama
Criba de Eratóstenes (Criba de ceros y unos).
Complejidad en tiempo: O(nloglogn).

Existe una versión en tiempo lineal:
https://cp-algorithms.com/algebra/prime-sieve-linear.html
*/
// un 0 indica que es primo, un 1 que no lo es
using namespace std;
#define tam 121

bool A[tam];

void imprimirCriba();
void imprimirNumerosPrimos();
void generarCriba();

int main() {
    // el o y el 1 no son primos
    A[0] = 1;
    A[1] = 1;
    generarCriba();
    imprimirCriba();
    cout << endl;
    imprimirNumerosPrimos();
    return 0;
}

void imprimirCriba() {
    for (int i = 0; i < tam; i++) {
        cout << A[i] << " ";
        if((i+1) % 10 == 0) cout << endl;
    }
}

void imprimirNumerosPrimos() {
    int j = 1;
    for (int i = 0; i < tam; i++) {
        if(A[i] == 0) {
            cout << i << " ";
            if(j % 4 == 0) cout << endl;
            j++;
        }
    }
}

void generarCriba() {
    for (int i = 2; i <= sqrt(tam); i++) {
        if(A[i] == 0) {
            for (int j = i; j <= (tam / i); j++) {
                A[i*j] = 1;
            }
        }
    }
}
