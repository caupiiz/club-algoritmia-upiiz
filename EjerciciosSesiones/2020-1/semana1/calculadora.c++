/*
Calculadora simple
- Sumar
- Restar
- Dividir
- Multiplicar
*/
#include <iostream> // Biblioteca
// Definimos el espacio de nombres de STL
using namespace std;
// Punto de entrada, función principal
int main() {
    // Declarar variables
    double a, b, resultado;
    int opcion;

    // Leer la opción
    cout << "Ingresa una opción:" << endl;
    // Mostrarles las opciones
    cout << "1) Sumar" << endl;
    cout << "2) Restar" << endl;
    cout << "3) Multiplicar" << endl;
    cout << "4) Dividir" << endl;
    // Leer la variable 'opcion'
    cin >> opcion;
    // leer a y b
    cin >> a;
    cin >> b;

    if(opcion == 1) { // sumar
        // >, <, >=, <=, !=
        resultado = a + b;
        // Mostrar resultado
        cout << resultado << endl;
    }
    // más opciones...
    else if(opcion == 2){
        resultado = a - b;
        // Mostrar resultado
        cout << resultado << endl;
    }
    else if(opcion == 3) {
        resultado = a * b;
        // Mostrar resultado
        cout << resultado << endl;
    }
    else if(opcion == 4) {
        if(b == 0) cout << "b debe ser != de 0" << endl;
        else {
            resultado = a / b;
            // Mostrar resultado
            cout << resultado << endl;
        }
    }
    // por defecto
    else {
        cout << "Elige una opción existente" << endl;
    }


    return 0;
}
