#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/CR-Google-Chrome#problems
using namespace std;
// Por dbetm
stack <string> pila;

int main() {
    string accion = "";
    string url;
    string ultimaURL = "";
    while (cin >> accion) {
        if(accion[0] == 'A') {
            cin >> url;
            if(ultimaURL == "") ultimaURL = url;
            else {
                pila.push(ultimaURL);
                ultimaURL = url;
            }
        }
        else {
            if(pila.empty()) cout << "Sin historial" << endl;
            else {
                cout << pila.top() << endl;
                pila.pop();
                if(pila.empty()) ultimaURL = "";
            }
        }
    }

    return 0;
}
