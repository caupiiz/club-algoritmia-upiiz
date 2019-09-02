#include <iostream>

using namespace std;

int main() {
    // Declaración
    /*
        {tipo dato} nombreArreglo[{dimension}];
        {tipo dato} nombreArreglo[] = {val0, val1, val3, val4};
    */
    int arreglo1[10];
    bool arreglo2[] = {true, true, false, false};
    string palabras[] = {"club", "de", "algoritmia"};
    int numVocales = 5;
    char vocales[numVocales];

    // Acceso, índice va desde 0
    cout << arreglo2[2] << endl; // 0 -> false
    // Asignación
    vocales[0] = 'a';
    vocales[1] = 'e';
    vocales[2] = 'i';
    vocales[3] = 'o';
    vocales[4] = 'u';

    // Iterar (recorrer) un arreglo
    for(int i = 0; i < numVocales; i++) {
        cout << vocales[i] << endl;
    }

    return 0;
}
