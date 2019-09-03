// Bibliotecas
#include <iostream>
#include <string>

using namespace std;
/*
{tipo dato} identificador[{tamanio}];
{tipo dato} identificador[] = {val1, val2, val3};
*/
int arreglo[10];
bool arreglo2[] = {true, false, true, false};
string palabras[] = {"club", "de", "algoritmia"};
int const tamanio = 5;
char vocales[tamanio];

int main() {
    // asignación
    vocales[0] = 'a';
    vocales[1] = 'e';
    vocales[2] = 'i';
    vocales[3] = 'o';
    vocales[4] = 'u';

    // Recorrer el arreglo con un ciclo
    for(int i = 0; i < tamanio; i++) {
        cout << vocales[i] << endl;
    }

    return 0;
}
