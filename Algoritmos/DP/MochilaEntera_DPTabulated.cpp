#include <iostream>
// O(n*W) TC
// O(n*W) SC
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    int K[n+1][W+1];
    // Construimos la matriz de manera ascendente
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if(i == 0 || w == 0) K[i][w] = 0;
            // Si hasta el i-ésimo peso no se excede cierto peso, se considera
            else if(wt[i-1] <= w) {
                // ¿Qué da más?
                // 1) Considerar el artículo con peso w[i-1]
                // 2) No considerarlo y tomar la última solución
                K[i][w] = max(val[i-1] +  K[i-1][w-wt[i-1]], K[i-1][w]);
            }
            // Se mantiene el mismo óptimo
            else {
                K[i][w] = K[i-1][w];
            }
        }
    }
    return K[n][W];
}

int main() {
    int n, W;
    cout << "Número de items: ";
    cin >> n;
    int val[n];
    int wt[n];
    cout << "Escribe los pares valor-peso" << endl;
    for (int i = 0; i < n; i++) {
        cin >> val[i] >> wt[i];
    }
    cout << "Escribe el peso máximo de la mochila: ";
    cin >> W;
    cout << knapSack(W, wt, val, n) << endl;
    return 0;
}
