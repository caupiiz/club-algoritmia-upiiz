#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];
int val[1000];
int wt[1000];

int knapSack(int n, int w);

int main() {
    int n, w;
    cout << "Número de items: ";
    cin >> n;
    cout << "Escribe los pares valor-peso" << endl;
    for (int i = 0; i < n; i++) {
        cin >> val[i] >> wt[i];
    }
    cout << "Escribe el peso máximo de la mochila: ";
    cin >> w;
    memset(dp, -1, sizeof(dp));
    cout << knapSack(n, w) << endl;
    return 0;
}

int knapSack(int n, int w) {
    if(w < 0) return INT_MIN; // el artículo ya no cabe
    if(n == 0) return 0; // se terminan los artículos
    if(dp[n][w] != -1) return dp[n][w]; // el resultado ya se calculó antes
    int opt1 = knapSack(n - 1, w); // no se considera el artículo
    // Considerando el artículo
    int opt2 = val[n] + knapSack(n - 1, w - wt[w]);
    // Regresamos aquella solución que sea máxima
    return dp[n][w] = max(opt1, opt2);
}
