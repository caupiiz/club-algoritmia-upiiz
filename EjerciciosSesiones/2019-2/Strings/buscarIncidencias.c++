#include <bits/stdc++.h>

using namespace std;

int buscarIncidencias(string palabra, string palabras[], int n);

int main() {
    int n;
    cin >> n;

    string palabras[n];
    for (int i = 0; i < n; i++) {
        cin >> palabras[i];
    }

    int t;
    string palabra;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> palabra;
        int incidencias = buscarIncidencias(palabra, palabras, n);
        cout << incidencias << endl;
    }
    return 0;
}

int buscarIncidencias(string palabra, string palabras[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if(palabra == palabras[i]) cont++;
    }
    return cont;
}
