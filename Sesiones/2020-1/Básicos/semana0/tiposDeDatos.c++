#include <iostream>

using namespace std;
typedef long long int lli;

int main() {
    // Tipos de datos primitivos:
        // Entero
    int a = 560.45;
    cout << a << endl;
    printf("%d\n", a);
        // Entero sin signo
    unsigned int b = 45;
        // Entero largo
    long int masGrande = 131313;
        // Entero largo largo
    long long int masGrande10x = 113616761371;
    lli masGrande10x2 = 7261361;

        // Float
    float otraVariable = 0.1 + 45;
    cout << otraVariable << endl;
        // Doble
    double numeroReal = 42852846;
    double otraVariable2 = 1e6;
    cout << numeroReal << endl;
    cout << otraVariable2 << endl;
        // Bool
    bool autoEncendido = false;
        // Char - caracter
    char letra = '+';
    cout << "Letra " << letra << endl;

    // Objetos:
        // cadena
    string nombre;
        // Leer datos
    cin >> nombre;
        // Mostrarlo en pantalla
    cout << nombre << endl;

    return 0;
}
/*


*/
