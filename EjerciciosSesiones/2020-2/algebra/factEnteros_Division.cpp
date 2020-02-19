#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

vector<lli> getIntFact(lli n);

int main() {
    lli  n;
    cin >> n;

    auto displayIntFact = [&](vector<lli> factores) {
        int len = factores.size();
        for (int i = 0; i < len-1; i++) {
            cout << factores[i] << ", ";
        }
        cout << factores[len-1] << endl;
    };

    displayIntFact(getIntFact(n));
    return 0;
}

vector<lli> getIntFact(lli n) {
    vector<lli> factores;
    lli lim = sqrt(n);
    for (int d = 2; d <= lim; d++) {
        while(n % d == 0) {
            factores.push_back(d);
            n /= d;
        }
    }

    if(n > 1) factores.push_back(n);

    return factores;
}
