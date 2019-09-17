#include <iostream>
#include <cmath>

using namespace std;
int a, b;
// Prototipos
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
void leerAyB();
double obtenerRaizCuadrada(double a);

int main() {
    int opt;
    cout << "Elige una opción: " << endl;
    cout << "1) Sumar" << endl;
    cout << "2) Restar" << endl;
    cout << "3) Multiplicar" << endl;
    cout << "--> ";
    cin >> opt;
    int res;
    switch (opt) {
        case 1:
            // tener los parámetros
            leerAyB();
            res = sumar(a, b);
            cout << "Resultado es: " << res << endl;
            break;
        case 2:
            leerAyB();
            res = restar(a, b);
            cout << "Resultado es: " << res << endl;
            break;
        case 3:
            leerAyB();
            res = multiplicar(a, b);
            cout << "Resultado es: " << res << endl;
            break;
        default:
            cout << "No elegiste una opción válida" << endl;
    }

    return 0;
}

// Implementación
int sumar(int a, int b) { // cuerpo de la función
    int res;
    res = a + b;
    return res;
}

int restar(int a, int b) { // cuerpo de la función
    int res;
    res = a - b;
    return res;
}

int multiplicar(int a, int b) { // cuerpo de la función
    int res;
    res = a * b;
    return res;
}

void leerAyB() {
    cout << "Escribe a: ";
    cin >> a;
    cout << "Escribe b: ";
    cin >> b;
}

double obtenerRaizCuadrada(double a) {
    double res = sqrt(a);
    return res;
}
