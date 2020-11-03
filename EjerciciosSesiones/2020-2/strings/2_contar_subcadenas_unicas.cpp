#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int count_unique_substrings(string s);

int main() {
    string s;
    cin >> s;
    cout << count_unique_substrings(s) << endl;
    return 0;
}

int count_unique_substrings(string s) {
    int n = s.size(); // Obtener tamaño de la cadena
    // 1) Pre-computar las potencias
    const int p = 31;
    const int m = 1e9+9;
    vector<lli> p_pow(n);
    p_pow[0] = 1;
    for (int i = 1; i < n; i++) {
        p_pow[i] = (p_pow[i-1] * p) % m;
    }
    // 2) Calcular los hashes de cada prefijo
    vector<lli> h(n+1, 0);
    for (int i = 0; i < n; i++) {
        h[i+1] = (h[i] + (s[i]-'a'+1)*p_pow[i]) % m;
    }

    // 3) Por cada posible longitud, calculamos lo
    // hashes de las subcadenas y los agregamos a un set.
    int cont = 0;
    for (int l = 1; l <= n; l++) {
        set<lli> hs; // hashes subcadenas
        for (int i = 0; i <= n-l; i++) {
            lli c_hash = (h[i+l] - h[i]) % m;
            c_hash = (c_hash * p_pow[n-i-1]) % m;
            hs.insert(c_hash);
        }
        cont += hs.size();
    }

    return cont;
}
