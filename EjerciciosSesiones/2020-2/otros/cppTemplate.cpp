#include <bits/stdc++.h>

using namespace std;

#define watch(x) cout << (#x) << " es " << x << endl;
#define EPS 1.19209e-07
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef int david;
typedef long long int lli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;

int main() {
    fastIO
    int yolo = 345;
    double real = 5.0;
    cout << "yolo tiene " << yolo << endl;
    watch(yolo)
    david numero = 5;

    auto sumar = [&](int a, int b) {
        return a + b;
    };

    cout << sumar(5, 6) << endl;

    return 0;
}
