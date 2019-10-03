#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string texto;
    cout << "Escribe el texto: " << endl;
    // leer una cadena de texto con espacios
    getline(cin, texto);
    // Definir tabla hash
    bool tablaHash[26];
    // Llenar la tabla con falsos
    memset(tablaHash, false, sizeof(tablaHash));

    for (int i = 0; i < texto.size(); i++) {
        // f(x) = x-97
        // ignorar los espacios
        if((int)texto[i] != 32) {
            int x = (int)texto[i]; // valor décimal en ASCII
            tablaHash[x-97] = true;
        }
    }

    // Determinar si es pangrama
    for (int i = 0; i < 26; i++) {
        if(tablaHash[i] == false) {
            cout << "No es pangrama" << endl;
            return 0;
        }
    }

    cout << "Es pangrama" << endl;

    return 0;
}
