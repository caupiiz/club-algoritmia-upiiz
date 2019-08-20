/*
Problema de clase 1:
Encontrar el número mas grande de n numeros
Nota: no es la única forma para solucionar el problema, se puede resolver de distintas formas, y esta es sólo una de ellas.
*/
// Autor: Onder Francisco García Campos

//Biblioteca que carga todas las funciones de c++
#include <bits/stdc++.h>
using namespace std;//para ya no usar el std:: en los cout y cin
//Función principal
int main() {
    // Se declaran las variables
    int n, num;
    // El límite, el número mayor de inicio debe de ser el más pequeño
    int mayor = 0;
    // Nota: Si se va a trabajar con números más pequeños la variable mayor
    // debe de ser más pequeña.
    cin >> n; // se pide el valor de n
    for(int i = 0;i < n;i++){ //Hace n veces, también puede ser while(n--) es algo análogo
        cin >> num; //Se pide un número
        if(num > mayor) { //se pregunta num es mayor a "mayor".
            // si es así
            mayor = num; //se hace el intercambio
        }
    }
    cout << mayor << endl; //imprimir el valor de mayor
}
