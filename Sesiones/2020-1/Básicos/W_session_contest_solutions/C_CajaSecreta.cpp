#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Caja-Secreta/#problems
using namespace std;

int main() {
    int n, p, caja;
    cin >> n >> p;
    while(n--) {
        cin >> caja;
        if(caja != p) cout << caja << endl;
    }

    return 0;
}
