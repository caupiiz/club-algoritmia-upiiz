#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Contando-espacios/#problems
using namespace std;

int contarEspacios(string str);

int main() {
    // Faster I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    string linea;
    cin >> n;
    // limpiar buffer
    cin.get();
    while(n--) {
        getline(cin, linea);
        cout << contarEspacios(linea) << endl;
    }
    return 0;
}

int contarEspacios(string str) {
    int numEspacios = 0;
    int n = str.size(); // obtener tamaño de la cadena
    for (int i = 0; i < n; i++) {
        if((int)str[i] == 32) numEspacios++;
    }

    return numEspacios;
}
