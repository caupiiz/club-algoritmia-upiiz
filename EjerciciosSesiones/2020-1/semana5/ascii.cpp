#include <iostream>

using namespace std;
// Programa para imprimir los caracteres básicos y su correspondiente
// código ASCII en décimal.
int main() {
    for (char x = '!'; x <= '~';x++) {
        cout << (int)(x) << ":" << x << endl;
    }
    return 0;
}
