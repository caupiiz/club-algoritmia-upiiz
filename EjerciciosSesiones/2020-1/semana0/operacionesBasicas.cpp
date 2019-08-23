#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    int a = 5,b = 10;
    double resultado;
    // Suma
    resultado = a + b;
    cout << "La suma de a y b es : "<< resultado << endl;
    // Resta
    resultado = a - b;
    cout << "La resta de a y b es : " << resultado << endl;
    // Multiplicación
    resultado = a * b;
    cout << "La Multiplicacion de a y b es : " << resultado << endl;
    // División
    resultado = a / b;
    cout << "La Division de a y b es : " << resultado << endl;
    // Módulo
    resultado = a % 2;
    cout << "El Modulo de a y b es : " << resultado << endl;*/

    bool a = true, b = true;
    bool salida;
    //AND, &&
    /*
    0 and 0 = 0
    0 and 1 = 0
    1 and 0 = 0
    1 and 1 = 1
    */
    salida = a && b;

    // OR, ||
    /*
    0 or 0 = 0
    0 or 1 = 1
    1 or 0 = 1
    1 or 1 = 1
    */
    salida = a || b;

    // XOR
    /*
    0 and 0 = 0
    0 and 1 = 1
    1 and 0 = 1
    1 and 1 = 0
    */
    salida = a ^ b;

    return 0;
}
