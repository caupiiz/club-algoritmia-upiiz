/* Autor: Onder
   Fecha: 11/09/2018
   Nivel: Básico
   ################################################
*/

/*
No me acuerdo exactamente de los valores pero es algo similar
        |----
        |  x²    x > 0
        |
f(x)=   | 3x - 5   x < 0
        |
        | x + 20   x = 0
        |----
Nota: La solución a este problema no es única, esto es solo una
propuesta de solución al problema.

Cualquier duda, corrección o sugerencia por favor me dicen jejje xd
*/

#include<bits/stdc++.h> // Bibliotecas
using namespace std; // Para no estar usando a cada rato el std:: en los cout y cin
// Función principal
int main(){
    // Declaro la variables
    int x;
    int resultado;
    // Pido el valor de x
    cin >> x;
    // Preguntamos "¿x es mayor que 0?"
    if(x > 0) {
        // Resultado es igual a "x al cuadrado".
        resultado = x*x;
    }
    // Preguntamos "¿x es menor a 0?"
    else if(x < 0) {
        // Resultado es igual a "3 veces lo que tiene x menos 5"
        resultado = 3*x-5;
    }
    // Si no es mayor a 0 ni menor a 0 entonces es igual a 0
    else{
        //Resultado es igual o lo que tiene x + 20
        resultado = x+20;
        /* En este caso también podríamos decir que x = 20 ya que ya sabemos que
        x == 0 por lo que nos ahorramos una operación */
    }
    cout << resultado << endl;
    return 0;
}
