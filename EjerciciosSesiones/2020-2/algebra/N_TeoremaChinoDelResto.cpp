#include <bits/stdc++.h>

/* Implementación para resolver un sistema de congruencias aplicando
el Teorema Chino del Resto.

Nota: El algo para calcular el inverso modular puede mejorar al implementar el
algoritmo extendido de Euclides.
*/

using namespace std;
#define watch(x) cout << (#x) << " es " << x << endl;

int chineseTeorem(int n, vector<pair<int, int>> coef, int nuevoMod);
int encontrarInversoModular(int a, int c);

int main() {
    int n, a, b, nuevoMod = 1;
    cin >> n;
    vector<pair<int, int>> coef;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        nuevoMod *= b; // 1) calcular el nuevo módulo
        coef.push_back({a, b});
    }
    watch(nuevoMod)

    int res = chineseTeorem(n, coef, nuevoMod);
    cout << "Sol. particular: " << (res % nuevoMod) << endl;
    cout << "Sol. general: x = " << (res % nuevoMod) << "+" << nuevoMod << "k" << endl;

    return 0;
}

int chineseTeorem(int n, vector<pair<int, int>> coef, int nuevoMod) {
    vector<int> cn(coef.size());
    // 2) Calcular nuevos coef
    for (int i = 0; i < n; i++) {
        cn[i] = nuevoMod / coef[i].second;
    }
    // 3) Calcular inversos modulares
    vector<int> ivs;
    for (int i = 0; i < n; i++) {
        ivs.push_back(encontrarInversoModular(cn[i], coef[i].second));
    }
    // 4) Calcular producto
    int res = 0;

    for (int i = 0; i < n; i++) {
        res += (coef[i].first * cn[i] * ivs[i]);
    }

    return res;
}

int encontrarInversoModular(int a, int c) {
    for (int i = 0; i < c; i++) {
        if(((a % c) * (i % c)) % c == 1) {
            return i;
        }
    }

    return -1;
}
