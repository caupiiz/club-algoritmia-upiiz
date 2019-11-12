#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    1) Crear arreglo de tamaño n+1.
        1.1) arr[0] = 1; arr[1] = 1;
    2) Iterar desde 2 hasta el sqr(n).
        2.1) Buscar el próximo no marcado.
            2.1.1) Marcar todos sus múltiplos <= n.
    */
    int n, suma = 0;
    cin >> n;

    while(n > 0) {
        suma += n % 10;
        n /= 10;
    }

    cout << suma << endl;

    return 0;
}
