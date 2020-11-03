#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/boredx100/#problems
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <int> elementos(n);
    for (int i = 0; i < n; i++) cin >> elementos[i];

    sort(elementos.begin(), elementos.end());
    for (int i = 0; i < n - 1; i++) {
        cout << elementos[i] << " ";
    }
    if(n) cout << elementos[n-1] << endl;
    return 0;
}
