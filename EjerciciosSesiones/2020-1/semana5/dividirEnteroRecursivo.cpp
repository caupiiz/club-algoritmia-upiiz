#include <iostream>

using namespace std;
int cont = 0;
int resta(int a, int b); // Prototipo

int main() {
    /*
    a = 8, b = 4
    ¿Cuántas veces se puede restar 'b' a 'a' antes de que 'a' sea <= a 0?
    8-4 = 4
    4-4 = 0
    */
    int a, b;
    cin >> a >> b;
    cout << a << "/" << b << "=" << resta(a, b) << endl;
    return 0;
}

// Implementación
int resta(int a, int b) {
    // Casos base
    if((a-b) < 0 || a == 0) return cont;
    cont++;
    // parte recursiva
    return resta(a-b, b);
}
