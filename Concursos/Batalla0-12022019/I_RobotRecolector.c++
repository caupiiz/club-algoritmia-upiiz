#include <bits/stdc++.h>

using namespace std;

int main() {
    int tramos;
    int unidadesTiempo, aux;
    int kilos = 0;
    char chr;
    cin >> tramos >> unidadesTiempo;
    aux = unidadesTiempo;
    for (int i = 0; i < tramos; i++) {
        cin >> chr;
        if(chr >= '0' && chr <= '9') {
            kilos += (int)(chr) - 48;
        }
        else if(chr == '#') {
            if(aux <= 0) break;
        }
        // Recoge una C que es combustible
        else aux += (unidadesTiempo - aux);
        aux--;
    }
    cout << kilos << endl;
    return 0;
}
