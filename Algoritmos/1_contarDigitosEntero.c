#include <stdlib.h>
#include <stdio.h>
/*
    Autor: David Betancourt Montellano | @dbetm
    Fecha: 11/09/2018.
    Compilado con: gcc 1_contarDigitosEntero.c -o 1
    Ejecutado con: ./1
*/

// Prototipo de la función
int obtenerNumeroDigitos(int);

int main() {
    int numero;
    int numeroDigitos;

    printf("Escribe el número: ");
    scanf("%d", &numero);

    numeroDigitos = obtenerNumeroDigitos(numero);
    // Mostramos el resultado
    printf("El número de dígitos es: %d\n", numeroDigitos);

    return 0;
}

// Algoritmo para contar los dígitos de un entero
int obtenerNumeroDigitos(int n) {
    int numDigitos = 0;
    while (n > 0) {
        numDigitos++;
        n /= 10;
    }
    return numDigitos;
}
