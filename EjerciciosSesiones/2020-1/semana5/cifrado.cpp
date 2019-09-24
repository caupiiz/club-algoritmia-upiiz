#include <iostream>
#include <string>

using namespace std;
// Prototipo de la función
string encriptar(string cadena);
string desencriptar(string cadena);

int main() {
    string cadena; // declaración
    cout << "Escribe tu cadena a encriptar: ";
    cin >> cadena;
    string cadenaEncriptada = encriptar(cadena);
    cout << "Tu cadena encriptada es: " << cadenaEncriptada << endl;
    // desencriptar
    string ejemplo = "crpelh";
    cout << ejemplo << " -> " << desencriptar(ejemplo) << endl;

    return 0;
}

// Implementar la función
string encriptar(string cadena) {
    string resultado = "";
    // cadena = 'hola'
    // cadena[0] = 'h'
    // cadena[1] = 'o'...
    int longitud = cadena.size();
    for (int i = 0; i < longitud; i++) {
        int x = (int)cadena[i] - 97;
        int e_n = (x - 3) % 26;
        e_n += 97;
        resultado += (char)e_n;
    }
    return resultado;
}

string desencriptar(string cadena) {
    string resultado = "";

    int longitud = cadena.size();
    for (int i = 0; i < longitud; i++) {
        int x = (int)cadena[i] - 97;
        int e_n = (x - 3) % 26;
        e_n = (e_n < 0) ? 24 - e_n : e_n;
        e_n += 97;
        resultado += (char)e_n;
    }
    return resultado;
}
